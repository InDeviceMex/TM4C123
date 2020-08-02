/**
 *
 * @file EEPROM_RegisterDefines.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERDEFINES_H_

#include <stdint.h>

/******************************************************************************************
************************************ 1 EESIZE *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EESIZE_R_WORDCNT_MASK     ((uint32_t)0x0000FFFFu)
#define EEPROM_EESIZE_R_WORDCNT_BIT      (0u)
#define EEPROM_EESIZE_R_WORDCNT_NUMBER   ((uint32_t)0x00000200u)

#define EEPROM_EESIZE_WORDCNT_MASK       ((uint32_t)0x0000FFFFu)
#define EEPROM_EESIZE_WORDCNT_NUMBER     ((uint32_t)0x00000200u)
/*----------*/

/*----------*/
#define EEPROM_EESIZE_R_BLKCNT_MASK     ((uint32_t)0x07FF0000u)
#define EEPROM_EESIZE_R_BLKCNT_BIT      (16u)
#define EEPROM_EESIZE_R_BLKCNT_NUMBER   ((uint32_t)0x00200000u)

#define EEPROM_EESIZE_BLKCNT_MASK       ((uint32_t)0x000007FFu)
#define EEPROM_EESIZE_BLKCNT_NUMBER     ((uint32_t)0x00000020u)
/*----------*/

/******************************************************************************************
************************************ 2 EEBLOCK *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EEBLOCK_R_BLOCK_MASK     ((uint32_t)0x0000FFFFu)
#define EEPROM_EEBLOCK_R_BLOCK_BIT      (0u)

#define EEPROM_EEBLOCK_BLOCK_MASK       ((uint32_t)0x0000FFFFu)
/*----------*/

/******************************************************************************************
************************************ 3 EEOFFSET *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EEOFFSET_R_OFFSET_MASK     ((uint32_t)0x0000000Fu)
#define EEPROM_EEOFFSET_R_OFFSET_BIT      (0u)

#define EEPROM_EEOFFSET_OFFSET_MASK       ((uint32_t)0x0000000Fu)
/*----------*/

/******************************************************************************************
************************************ 4 EERDWR *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EERDWR_R_VALUE_MASK     ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EERDWR_R_VALUE_BIT      (0u)

#define EEPROM_EERDWR_VALUE_MASK       ((uint32_t)0xFFFFFFFFu)
/*----------*/

/******************************************************************************************
************************************ 5 EERDWRINC *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EERDWRINC_R_VALUE_MASK     ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EERDWRINC_R_VALUE_BIT      (0u)

#define EEPROM_EERDWRINC_VALUE_MASK       ((uint32_t)0xFFFFFFFFu)
/*----------*/

/******************************************************************************************
************************************ 6 EEDONE *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EEDONE_R_WORKING_MASK     ((uint32_t)0x00000001u)
#define EEPROM_EEDONE_R_WORKING_BIT      (0u)
#define EEPROM_EEDONE_R_WORKING_DIS      ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_R_WORKING_EN       ((uint32_t)0x00000001u)

#define EEPROM_EEDONE_WORKING_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EEDONE_WORKING_DIS        ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_WORKING_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEDONE_R_WKERASE_MASK     ((uint32_t)0x00000004u)
#define EEPROM_EEDONE_R_WKERASE_BIT      (2u)
#define EEPROM_EEDONE_R_WKERASE_DIS      ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_R_WKERASE_EN       ((uint32_t)0x00000004u)

#define EEPROM_EEDONE_WKERASE_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EEDONE_WKERASE_DIS        ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_WKERASE_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEDONE_R_WKCOPY_MASK     ((uint32_t)0x00000008u)
#define EEPROM_EEDONE_R_WKCOPY_BIT      (3u)
#define EEPROM_EEDONE_R_WKCOPY_DIS      ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_R_WKCOPY_EN       ((uint32_t)0x00000008u)

#define EEPROM_EEDONE_WKCOPY_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EEDONE_WKCOPY_DIS        ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_WKCOPY_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEDONE_R_NOPERM_MASK     ((uint32_t)0x00000010u)
#define EEPROM_EEDONE_R_NOPERM_BIT      (4u)
#define EEPROM_EEDONE_R_NOPERM_NOERROR  ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_R_NOPERM_ERROR    ((uint32_t)0x00000010u)

#define EEPROM_EEDONE_NOPERM_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EEDONE_NOPERM_NOERROR    ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_NOPERM_ERROR      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEDONE_R_WRBUSY_MASK     ((uint32_t)0x00000020u)
#define EEPROM_EEDONE_R_WRBUSY_BIT      (5u)
#define EEPROM_EEDONE_R_WRBUSY_NOERROR  ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_R_WRBUSY_ERROR    ((uint32_t)0x00000020u)

#define EEPROM_EEDONE_WRBUSY_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EEDONE_WRBUSY_NOERROR    ((uint32_t)0x00000000u)
#define EEPROM_EEDONE_WRBUSY_ERROR      ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************7 EESUPP *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EESUPP_R_START_MASK     ((uint32_t)0x00000001u)
#define EEPROM_EESUPP_R_START_BIT      (0u)
#define EEPROM_EESUPP_R_START_DIS      ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_R_START_EN       ((uint32_t)0x00000001u)

#define EEPROM_EESUPP_START_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EESUPP_START_DIS        ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_START_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EESUPP_R_EREQ_MASK     ((uint32_t)0x00000002u)
#define EEPROM_EESUPP_R_EREQ_BIT      (1u)
#define EEPROM_EESUPP_R_EREQ_DIS      ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_R_EREQ_EN       ((uint32_t)0x00000002u)

#define EEPROM_EESUPP_EREQ_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EESUPP_EREQ_DIS        ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_EREQ_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EESUPP_R_ERETRY_MASK     ((uint32_t)0x00000004u)
#define EEPROM_EESUPP_R_ERETRY_BIT      (2u)
#define EEPROM_EESUPP_R_ERETRY_DIS      ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_R_ERETRY_EN       ((uint32_t)0x00000004u)

#define EEPROM_EESUPP_ERETRY_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EESUPP_ERETRY_DIS        ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_ERETRY_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EESUPP_R_PRETRY_MASK     ((uint32_t)0x00000008u)
#define EEPROM_EESUPP_R_PRETRY_BIT      (3u)
#define EEPROM_EESUPP_R_PRETRY_NOERROR  ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_R_PRETRY_ERROR    ((uint32_t)0x00000008u)

#define EEPROM_EESUPP_PRETRY_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EESUPP_PRETRY_NOERROR    ((uint32_t)0x00000000u)
#define EEPROM_EESUPP_PRETRY_ERROR      ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************8 EEUNLOCK *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EEUNLOCK_R_UNLOCK_MASK     ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EEUNLOCK_R_UNLOCK_BIT      (0u)

#define EEPROM_EEUNLOCK_UNLOCK_MASK       ((uint32_t)0xFFFFFFFFu)
/*----------*/

/******************************************************************************************
************************************ 9 EEPROT *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EEPROT_R_PROT_MASK           ((uint32_t)0x00000007u)
#define EEPROM_EEPROT_R_PROT_BIT            (0u)
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
#define EEPROM_EEPROT_R_ACC_BIT            (3u)
#define EEPROM_EEPROT_R_ACC_BOTH           ((uint32_t)0x00000000u)
#define EEPROM_EEPROT_R_ACC_SUPERVISOR     ((uint32_t)0x00000008u)

#define EEPROM_EEPROT_ACC_MASK           ((uint32_t)0x00000001u)
#define EEPROM_EEPROT_ACC_BOTH           ((uint32_t)0x00000000u)
#define EEPROM_EEPROT_ACC_SUPERVISOR     ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************ 10 EEPASS0 *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EEPASS0_R_PASS_MASK     ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EEPASS0_R_PASS_BIT      (0u)
#define EEPROM_EEPASS0_R_PASS_NOSET    ((uint32_t)0x00000000u)
#define EEPROM_EEPASS0_R_PASS_SET      ((uint32_t)0x00000001u)

#define EEPROM_EEPASS0_PASS_MASK       ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EEPASS0_PASS_NOSET      ((uint32_t)0x00000000u)
#define EEPROM_EEPASS0_PASS_SET        ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************11 EEPASS1 *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EEPASS1_R_PASS_MASK     ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EEPASS1_R_PASS_BIT      (0u)
#define EEPROM_EEPASS1_R_PASS_NOSET    ((uint32_t)0x00000000u)
#define EEPROM_EEPASS1_R_PASS_SET      ((uint32_t)0x00000001u)

#define EEPROM_EEPASS1_PASS_MASK       ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EEPASS1_PASS_NOSET      ((uint32_t)0x00000000u)
#define EEPROM_EEPASS1_PASS_SET        ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************12 EEPASS2 *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EEPASS2_R_PASS_MASK     ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EEPASS2_R_PASS_BIT      (0u)
#define EEPROM_EEPASS2_R_PASS_NOSET    ((uint32_t)0x00000000u)
#define EEPROM_EEPASS2_R_PASS_SET      ((uint32_t)0x00000001u)

#define EEPROM_EEPASS2_PASS_MASK       ((uint32_t)0xFFFFFFFFu)
#define EEPROM_EEPASS2_PASS_NOSET      ((uint32_t)0x00000000u)
#define EEPROM_EEPASS2_PASS_SET        ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************13 EEINT *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EEINT_R_INT_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EEINT_R_INT_BIT        (0u)
#define EEPROM_EEINT_R_INT_NOOCCUR    ((uint32_t)0x00000000u)
#define EEPROM_EEINT_R_INT_OCCUR      ((uint32_t)0x00000001u)

#define EEPROM_EEINT_INT_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEINT_INT_NOOCCUR      ((uint32_t)0x00000000u)
#define EEPROM_EEINT_INT_OCCUR        ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************14 EEHIDE *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EEHIDE_R_H1_MASK       ((uint32_t)0x00000002u)
#define EEPROM_EEHIDE_R_H1_BIT        (1u)
#define EEPROM_EEHIDE_R_H1_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H1_HIDE       ((uint32_t)0x00000002u)

#define EEPROM_EEHIDE_H1_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H1_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H1_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H2_MASK       ((uint32_t)0x00000004u)
#define EEPROM_EEHIDE_R_H2_BIT        (2u)
#define EEPROM_EEHIDE_R_H2_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H2_HIDE       ((uint32_t)0x00000004u)

#define EEPROM_EEHIDE_H2_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H2_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H2_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H3_MASK       ((uint32_t)0x00000008u)
#define EEPROM_EEHIDE_R_H3_BIT        (3u)
#define EEPROM_EEHIDE_R_H3_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H3_HIDE       ((uint32_t)0x00000008u)

#define EEPROM_EEHIDE_H3_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H3_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H3_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H4_MASK       ((uint32_t)0x00000010u)
#define EEPROM_EEHIDE_R_H4_BIT        (4u)
#define EEPROM_EEHIDE_R_H4_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H4_HIDE       ((uint32_t)0x000000010u)

#define EEPROM_EEHIDE_H4_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H4_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H4_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H5_MASK       ((uint32_t)0x00000020u)
#define EEPROM_EEHIDE_R_H5_BIT        (5u)
#define EEPROM_EEHIDE_R_H5_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H5_HIDE       ((uint32_t)0x00000020u)

#define EEPROM_EEHIDE_H5_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H5_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H5_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H6_MASK       ((uint32_t)0x00000040u)
#define EEPROM_EEHIDE_R_H6_BIT        (6u)
#define EEPROM_EEHIDE_R_H6_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H6_HIDE       ((uint32_t)0x00000040u)

#define EEPROM_EEHIDE_H6_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H6_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H6_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H7_MASK       ((uint32_t)0x00000080u)
#define EEPROM_EEHIDE_R_H7_BIT        (7u)
#define EEPROM_EEHIDE_R_H7_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H7_HIDE       ((uint32_t)0x00000080u)

#define EEPROM_EEHIDE_H7_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H7_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H7_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H8_MASK       ((uint32_t)0x00000100u)
#define EEPROM_EEHIDE_R_H8_BIT        (8u)
#define EEPROM_EEHIDE_R_H8_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H8_HIDE       ((uint32_t)0x00000100u)

#define EEPROM_EEHIDE_H8_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H8_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H8_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H9_MASK       ((uint32_t)0x00000200u)
#define EEPROM_EEHIDE_R_H9_BIT        (9u)
#define EEPROM_EEHIDE_R_H9_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H9_HIDE       ((uint32_t)0x00000200u)

#define EEPROM_EEHIDE_H9_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H9_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H9_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H10_MASK       ((uint32_t)0x00000400u)
#define EEPROM_EEHIDE_R_H10_BIT        (10u)
#define EEPROM_EEHIDE_R_H10_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H10_HIDE       ((uint32_t)0x00000400u)

#define EEPROM_EEHIDE_H10_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H10_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H10_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H11_MASK       ((uint32_t)0x00000800u)
#define EEPROM_EEHIDE_R_H11_BIT        (11u)
#define EEPROM_EEHIDE_R_H11_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H11_HIDE       ((uint32_t)0x00000800u)

#define EEPROM_EEHIDE_H11_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H11_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H11_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H12_MASK       ((uint32_t)0x00001000u)
#define EEPROM_EEHIDE_R_H12_BIT        (12u)
#define EEPROM_EEHIDE_R_H12_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H12_HIDE       ((uint32_t)0x00001000u)

#define EEPROM_EEHIDE_H12_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H12_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H12_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H13_MASK       ((uint32_t)0x00002000u)
#define EEPROM_EEHIDE_R_H13_BIT        (13u)
#define EEPROM_EEHIDE_R_H13_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H13_HIDE       ((uint32_t)0x00002000u)

#define EEPROM_EEHIDE_H13_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H13_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H13_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H14_MASK       ((uint32_t)0x00004000u)
#define EEPROM_EEHIDE_R_H14_BIT        (14u)
#define EEPROM_EEHIDE_R_H14_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H14_HIDE       ((uint32_t)0x00004000u)

#define EEPROM_EEHIDE_H14_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H14_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H14_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H15_MASK       ((uint32_t)0x00008000u)
#define EEPROM_EEHIDE_R_H15_BIT        (15u)
#define EEPROM_EEHIDE_R_H15_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H15_HIDE       ((uint32_t)0x00008000u)

#define EEPROM_EEHIDE_H15_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H15_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H15_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H16_MASK       ((uint32_t)0x00010000u)
#define EEPROM_EEHIDE_R_H16_BIT        (16u)
#define EEPROM_EEHIDE_R_H16_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H16_HIDE       ((uint32_t)0x00010000u)

#define EEPROM_EEHIDE_H16_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H16_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H16_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H17_MASK       ((uint32_t)0x00020000u)
#define EEPROM_EEHIDE_R_H17_BIT        (17u)
#define EEPROM_EEHIDE_R_H17_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H17_HIDE       ((uint32_t)0x00020000u)

#define EEPROM_EEHIDE_H17_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H17_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H17_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H18_MASK       ((uint32_t)0x00040000u)
#define EEPROM_EEHIDE_R_H18_BIT        (18u)
#define EEPROM_EEHIDE_R_H18_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H18_HIDE       ((uint32_t)0x00040000u)

#define EEPROM_EEHIDE_H18_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H18_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H18_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H19_MASK       ((uint32_t)0x00080000u)
#define EEPROM_EEHIDE_R_H19_BIT        (19u)
#define EEPROM_EEHIDE_R_H19_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H19_HIDE       ((uint32_t)0x00080000u)

#define EEPROM_EEHIDE_H19_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H19_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H19_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H20_MASK       ((uint32_t)0x00100000u)
#define EEPROM_EEHIDE_R_H20_BIT        (20u)
#define EEPROM_EEHIDE_R_H20_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H20_HIDE       ((uint32_t)0x00100000u)

#define EEPROM_EEHIDE_H20_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H20_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H20_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H21_MASK       ((uint32_t)0x00200000u)
#define EEPROM_EEHIDE_R_H21_BIT        (21u)
#define EEPROM_EEHIDE_R_H21_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H21_HIDE       ((uint32_t)0x00200000u)

#define EEPROM_EEHIDE_H21_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H21_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H21_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H22_MASK       ((uint32_t)0x00400000u)
#define EEPROM_EEHIDE_R_H22_BIT        (22u)
#define EEPROM_EEHIDE_R_H22_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H22_HIDE       ((uint32_t)0x00400000u)

#define EEPROM_EEHIDE_H22_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H22_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H22_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H23_MASK       ((uint32_t)0x00800000u)
#define EEPROM_EEHIDE_R_H23_BIT        (23u)
#define EEPROM_EEHIDE_R_H23_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H23_HIDE       ((uint32_t)0x00800000u)

#define EEPROM_EEHIDE_H23_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H23_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H23_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H24_MASK       ((uint32_t)0x01000000u)
#define EEPROM_EEHIDE_R_H24_BIT        (24u)
#define EEPROM_EEHIDE_R_H24_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H24_HIDE       ((uint32_t)0x01000000u)

#define EEPROM_EEHIDE_H24_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H24_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H24_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H25_MASK       ((uint32_t)0x02000000u)
#define EEPROM_EEHIDE_R_H25_BIT        (25u)
#define EEPROM_EEHIDE_R_H25_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H25_HIDE       ((uint32_t)0x02000000u)

#define EEPROM_EEHIDE_H25_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H25_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H25_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H26_MASK       ((uint32_t)0x04000000u)
#define EEPROM_EEHIDE_R_H26_BIT        (26u)
#define EEPROM_EEHIDE_R_H26_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H26_HIDE       ((uint32_t)0x04000000u)

#define EEPROM_EEHIDE_H26_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H26_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H26_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H27_MASK       ((uint32_t)0x08000000u)
#define EEPROM_EEHIDE_R_H27_BIT        (27u)
#define EEPROM_EEHIDE_R_H27_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H27_HIDE       ((uint32_t)0x08000000u)

#define EEPROM_EEHIDE_H27_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H27_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H27_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H28_MASK       ((uint32_t)0x10000000u)
#define EEPROM_EEHIDE_R_H28_BIT        (28u)
#define EEPROM_EEHIDE_R_H28_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H28_HIDE       ((uint32_t)0x10000000u)

#define EEPROM_EEHIDE_H28_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H28_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H28_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H29_MASK       ((uint32_t)0x20000000u)
#define EEPROM_EEHIDE_R_H29_BIT        (29u)
#define EEPROM_EEHIDE_R_H29_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H29_HIDE       ((uint32_t)0x20000000u)

#define EEPROM_EEHIDE_H29_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H29_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H29_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H30_MASK       ((uint32_t)0x40000000u)
#define EEPROM_EEHIDE_R_H30_BIT        (30u)
#define EEPROM_EEHIDE_R_H30_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H30_HIDE       ((uint32_t)0x40000000u)

#define EEPROM_EEHIDE_H30_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H30_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H30_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEHIDE_R_H31_MASK       ((uint32_t)0x80000000u)
#define EEPROM_EEHIDE_R_H31_BIT        (31u)
#define EEPROM_EEHIDE_R_H31_NOHIDE     ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_R_H31_HIDE       ((uint32_t)0x80000000u)

#define EEPROM_EEHIDE_H31_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEHIDE_H31_NOHIDE       ((uint32_t)0x00000000u)
#define EEPROM_EEHIDE_H31_HIDE         ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************15 EEDBGME *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EEDBGME_R_ME_MASK       ((uint32_t)0x00000001u)
#define EEPROM_EEDBGME_R_ME_BIT        (0u)
#define EEPROM_EEDBGME_R_ME_NA         ((uint32_t)0x00000000u)
#define EEPROM_EEDBGME_R_ME_ERASE      ((uint32_t)0x00000001u)

#define EEPROM_EEDBGME_ME_MASK         ((uint32_t)0x00000001u)
#define EEPROM_EEDBGME_ME_NA           ((uint32_t)0x00000000u)
#define EEPROM_EEDBGME_ME_ERASE        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define EEPROM_EEDBGME_R_KEY_MASK       ((uint32_t)0xFFFF0000u)
#define EEPROM_EEDBGME_R_KEY_BIT        (0u)
#define EEPROM_EEDBGME_R_KEY_ERASE      ((uint32_t)0xE37B0000u)

#define EEPROM_EEDBGME_KEY_MASK         ((uint32_t)0x0000FFFFu)
#define EEPROM_EEDBGME_KEY_ERASE        ((uint32_t)0x0000E37Bu)
/*----------*/

/******************************************************************************************
************************************16 EEPROMPP *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_EEPROMPP_R_SIZE_MASK       ((uint32_t)0x0000001Fu)
#define EEPROM_EEPROMPP_R_SIZE_BIT        (0u)
#define EEPROM_EEPROMPP_R_SIZE_2KB        ((uint32_t)0x0000001Fu)

#define EEPROM_EEPROMPP_SIZE_MASK         ((uint32_t)0x0000001Fu)
#define EEPROM_EEPROMPP_SIZE_2KB          ((uint32_t)0x0000001Fu)
/*----------*/



#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERDEFINES_H_ */
