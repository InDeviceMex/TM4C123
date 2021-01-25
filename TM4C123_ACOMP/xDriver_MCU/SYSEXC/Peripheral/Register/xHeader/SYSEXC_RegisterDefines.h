/**
 *
 * @file SYSEXC_RegisterDefines.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERDEFINES_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 1 SYSEXCRIS *********************************************
******************************************************************************************/
/*----------*/
#define SYSEXC_SYSEXCRIS_R_FPIDCRIS_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCRIS_R_FPIDCRIS_BIT         (0U)
#define SYSEXC_SYSEXCRIS_R_FPIDCRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCRIS_R_FPIDCRIS_ACTIVE      ((uint32_t)0x00000001U)

#define SYSEXC_SYSEXCRIS_FPIDCRIS_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCRIS_FPIDCRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCRIS_FPIDCRIS_ACTIVE      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCRIS_R_FPDZCRIS_MASK        ((uint32_t)0x00000002U)
#define SYSEXC_SYSEXCRIS_R_FPDZCRIS_BIT         (1U)
#define SYSEXC_SYSEXCRIS_R_FPDZCRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCRIS_R_FPDZCRIS_ACTIVE      ((uint32_t)0x00000002U)

#define SYSEXC_SYSEXCRIS_FPDZCRIS_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCRIS_FPDZCRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCRIS_FPDZCRIS_ACTIVE      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCRIS_R_FPIOCRIS_MASK        ((uint32_t)0x00000004U)
#define SYSEXC_SYSEXCRIS_R_FPIOCRIS_BIT         (2U)
#define SYSEXC_SYSEXCRIS_R_FPIOCRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCRIS_R_FPIOCRIS_ACTIVE      ((uint32_t)0x00000004U)

#define SYSEXC_SYSEXCRIS_FPIOCRIS_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCRIS_FPIOCRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCRIS_FPIOCRIS_ACTIVE      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCRIS_R_FPUFCRIS_MASK        ((uint32_t)0x00000008U)
#define SYSEXC_SYSEXCRIS_R_FPUFCRIS_BIT         (3U)
#define SYSEXC_SYSEXCRIS_R_FPUFCRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCRIS_R_FPUFCRIS_ACTIVE      ((uint32_t)0x00000008U)

#define SYSEXC_SYSEXCRIS_FPUFCRIS_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCRIS_FPUFCRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCRIS_FPUFCRIS_ACTIVE      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCRIS_R_FPOFCRIS_MASK        ((uint32_t)0x00000010U)
#define SYSEXC_SYSEXCRIS_R_FPOFCRIS_BIT         (4U)
#define SYSEXC_SYSEXCRIS_R_FPOFCRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCRIS_R_FPOFCRIS_ACTIVE      ((uint32_t)0x00000010U)

#define SYSEXC_SYSEXCRIS_FPOFCRIS_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCRIS_FPOFCRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCRIS_FPOFCRIS_ACTIVE      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCRIS_R_FPIXCRIS_MASK        ((uint32_t)0x00000020U)
#define SYSEXC_SYSEXCRIS_R_FPIXCRIS_BIT         (5U)
#define SYSEXC_SYSEXCRIS_R_FPIXCRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCRIS_R_FPIXCRIS_ACTIVE      ((uint32_t)0x00000010U)

#define SYSEXC_SYSEXCRIS_FPIXCRIS_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCRIS_FPIXCRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCRIS_FPIXCRIS_ACTIVE      ((uint32_t)0x00000001U)
/*----------*/

/******************************************************************************************
************************************ 2 SYSEXCIM *********************************************
******************************************************************************************/
/*----------*/
#define SYSEXC_SYSEXCIM_R_FPIDCIM_MASK        ((uint32_t) 0x00000001U)
#define SYSEXC_SYSEXCIM_R_FPIDCIM_BIT         ((uint32_t)0)
#define SYSEXC_SYSEXCIM_R_FPIDCIM_DIS         ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCIM_R_FPIDCIM_EN          ((uint32_t)0x00000001U)

#define SYSEXC_SYSEXCIM_FPIDCIM_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCIM_FPIDCIM_DIS         ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCIM_FPIDCIM_EN          ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIM_R_FPDZCIM_MASK        ((uint32_t)0x00000002U)
#define SYSEXC_SYSEXCIM_R_FPDZCIM_BIT         ((uint32_t)1)
#define SYSEXC_SYSEXCIM_R_FPDZCIM_DIS         ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCIM_R_FPDZCIM_EN          ((uint32_t)0x00000002U)

#define SYSEXC_SYSEXCIM_FPDZCIM_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCIM_FPDZCIM_DIS         ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCIM_FPDZCIM_EN          ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIM_R_FPIOCIM_MASK        ((uint32_t)0x00000004U)
#define SYSEXC_SYSEXCIM_R_FPIOCIM_BIT         (2U)
#define SYSEXC_SYSEXCIM_R_FPIOCIM_DIS         ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCIM_R_FPIOCIM_EN          ((uint32_t)0x00000004U)

#define SYSEXC_SYSEXCIM_FPIOCIM_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCIM_FPIOCIM_DIS         ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCIM_FPIOCIM_EN          ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIM_R_FPUFCIM_MASK        ((uint32_t)0x00000008U)
#define SYSEXC_SYSEXCIM_R_FPUFCIM_BIT         (3U)
#define SYSEXC_SYSEXCIM_R_FPUFCIM_DIS         ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCIM_R_FPUFCIM_EN          ((uint32_t)0x00000008U)

#define SYSEXC_SYSEXCIM_FPUFCIM_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCIM_FPUFCIM_DIS         ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCIM_FPUFCIM_EN          ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIM_R_FPOFCIM_MASK        ((uint32_t)0x00000010U)
#define SYSEXC_SYSEXCIM_R_FPOFCIM_BIT         (4U)
#define SYSEXC_SYSEXCIM_R_FPOFCIM_DIS         ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCIM_R_FPOFCIM_EN          ((uint32_t)0x00000010U)

#define SYSEXC_SYSEXCIM_FPOFCIM_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCIM_FPOFCIM_DIS         ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCIM_FPOFCIM_EN          ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIM_R_FPIXCIM_MASK        ((uint32_t)0x00000020U)
#define SYSEXC_SYSEXCIM_R_FPIXCIM_BIT         (5U)
#define SYSEXC_SYSEXCIM_R_FPIXCIM_DIS         ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCIM_R_FPIXCIM_EN          ((uint32_t)0x00000010U)

#define SYSEXC_SYSEXCIM_FPIXCIM_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCIM_FPIXCIM_DIS         ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCIM_FPIXCIM_EN          ((uint32_t)0x00000001U)
/*----------*/

/******************************************************************************************
************************************ 3 SYSEXCMIS *********************************************
******************************************************************************************/
/*----------*/
#define SYSEXC_SYSEXCMIS_R_FPIDCMIS_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCMIS_R_FPIDCMIS_BIT         (0U)
#define SYSEXC_SYSEXCMIS_R_FPIDCMIS_NOOCCUR    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCMIS_R_FPIDCMIS_OCCUR      ((uint32_t)0x00000001U)

#define SYSEXC_SYSEXCMIS_FPIDCMIS_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCMIS_FPIDCMIS_NOOCCUR    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCMIS_FPIDCMIS_OCCUR      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCMIS_R_FPDZCMIS_MASK        ((uint32_t)0x00000002U)
#define SYSEXC_SYSEXCMIS_R_FPDZCMIS_BIT         (1U)
#define SYSEXC_SYSEXCMIS_R_FPDZCMIS_NOOCCUR    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCMIS_R_FPDZCMIS_OCCUR      ((uint32_t)0x00000002U)

#define SYSEXC_SYSEXCMIS_FPDZCMIS_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCMIS_FPDZCMIS_NOOCCUR    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCMIS_FPDZCMIS_OCCUR      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCMIS_R_FPIOCMIS_MASK        ((uint32_t)0x00000004U)
#define SYSEXC_SYSEXCMIS_R_FPIOCMIS_BIT         (2U)
#define SYSEXC_SYSEXCMIS_R_FPIOCMIS_NOOCCUR    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCMIS_R_FPIOCMIS_OCCUR      ((uint32_t)0x00000004U)

#define SYSEXC_SYSEXCMIS_FPIOCMIS_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCMIS_FPIOCMIS_NOOCCUR    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCMIS_FPIOCMIS_OCCUR      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCMIS_R_FPUFCMIS_MASK        ((uint32_t)0x00000008U)
#define SYSEXC_SYSEXCMIS_R_FPUFCMIS_BIT         (3U)
#define SYSEXC_SYSEXCMIS_R_FPUFCMIS_NOOCCUR    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCMIS_R_FPUFCMIS_OCCUR      ((uint32_t)0x00000008U)

#define SYSEXC_SYSEXCMIS_FPUFCMIS_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCMIS_FPUFCMIS_NOOCCUR    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCMIS_FPUFCMIS_OCCUR      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCMIS_R_FPOFCMIS_MASK        ((uint32_t)0x00000010U)
#define SYSEXC_SYSEXCMIS_R_FPOFCMIS_BIT         (4U)
#define SYSEXC_SYSEXCMIS_R_FPOFCMIS_NOOCCUR    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCMIS_R_FPOFCMIS_OCCUR      ((uint32_t)0x00000010U)

#define SYSEXC_SYSEXCMIS_FPOFCMIS_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCMIS_FPOFCMIS_NOOCCUR    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCMIS_FPOFCMIS_OCCUR      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCMIS_R_FPIXCMIS_MASK        ((uint32_t)0x00000020U)
#define SYSEXC_SYSEXCMIS_R_FPIXCMIS_BIT         (5U)
#define SYSEXC_SYSEXCMIS_R_FPIXCMIS_NOOCCUR    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCMIS_R_FPIXCMIS_OCCUR      ((uint32_t)0x00000010U)

#define SYSEXC_SYSEXCMIS_FPIXCMIS_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCMIS_FPIXCMIS_NOOCCUR    ((uint32_t)0x00000000U)
#define SYSEXC_SYSEXCMIS_FPIXCMIS_OCCUR      ((uint32_t)0x00000001U)
/*----------*/

/******************************************************************************************
************************************ 4 SYSEXCIC *********************************************
******************************************************************************************/
/*----------*/
#define SYSEXC_SYSEXCIC_R_FPIDCIC_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCIC_R_FPIDCIC_BIT         (0U)
#define SYSEXC_SYSEXCIC_R_FPIDCIC_CLEAR      ((uint32_t)0x00000001U)

#define SYSEXC_SYSEXCIC_FPIDCIC_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCIC_FPIDCIC_CLEAR      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIC_R_FPDZCIC_MASK        ((uint32_t)0x00000002U)
#define SYSEXC_SYSEXCIC_R_FPDZCIC_BIT         (1U)
#define SYSEXC_SYSEXCIC_R_FPDZCIC_CLEAR      ((uint32_t)0x00000002U)

#define SYSEXC_SYSEXCIC_FPDZCIC_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCIC_FPDZCIC_CLEAR      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIC_R_FPIOCIC_MASK        ((uint32_t)0x00000004U)
#define SYSEXC_SYSEXCIC_R_FPIOCIC_BIT         (2U)
#define SYSEXC_SYSEXCIC_R_FPIOCIC_CLEAR      ((uint32_t)0x00000004U)

#define SYSEXC_SYSEXCIC_FPIOCIC_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCIC_FPIOCIC_CLEAR      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIC_R_FPUFCIC_MASK        ((uint32_t)0x00000008U)
#define SYSEXC_SYSEXCIC_R_FPUFCIC_BIT         (3U)
#define SYSEXC_SYSEXCIC_R_FPUFCIC_CLEAR      ((uint32_t)0x00000008U)

#define SYSEXC_SYSEXCIC_FPUFCIC_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCIC_FPUFCIC_CLEAR      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIC_R_FPOFCIC_MASK        ((uint32_t)0x00000010U)
#define SYSEXC_SYSEXCIC_R_FPOFCIC_BIT         (4U)
#define SYSEXC_SYSEXCIC_R_FPOFCIC_CLEAR      ((uint32_t)0x00000010U)

#define SYSEXC_SYSEXCIC_FPOFCIC_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCIC_FPOFCIC_CLEAR      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSEXC_SYSEXCIC_R_FPIXCIC_MASK        ((uint32_t)0x00000020U)
#define SYSEXC_SYSEXCIC_R_FPIXCIC_BIT         (5U)
#define SYSEXC_SYSEXCIC_R_FPIXCIC_CLEAR      ((uint32_t)0x00000010U)

#define SYSEXC_SYSEXCIC_FPIXCIC_MASK        ((uint32_t)0x00000001U)
#define SYSEXC_SYSEXCIC_FPIXCIC_CLEAR      ((uint32_t)0x00000001U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERDEFINES_H_ */
