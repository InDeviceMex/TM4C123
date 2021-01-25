/**
 *
 * @file FLASH_RegisterDefines.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERDEFINES_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 1 FMA *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FMA_R_OFFSET_MASK     ((uint32_t)0x0003FFFFU)
#define FLASH_FMA_R_OFFSET_BIT      (0U)

#define FLASH_FMA_OFFSET_MASK       ((uint32_t)0x0003FFFFU)
/*----------*/

/******************************************************************************************
************************************ 2 FMD *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FMD_R_DATA_MASK     ((uint32_t)0xFFFFFFFFU)
#define FLASH_FMD_R_DATA_BIT      (0U)

#define FLASH_FMD_DATA_MASK       ((uint32_t)0xFFFFFFFFU)
/*----------*/

/******************************************************************************************
************************************ 3 FMC *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FMC_R_WRITE_MASK          ((uint32_t)0x00000001U)
#define FLASH_FMC_R_WRITE_BIT           (0U)
#define FLASH_FMC_R_WRITE_COMPLETE      ((uint32_t)0x00000000U)
#define FLASH_FMC_R_WRITE_NOCOMPLETE    ((uint32_t)0x00000001U)
#define FLASH_FMC_R_WRITE_WRITE         ((uint32_t)0x00000001U)

#define FLASH_FMC_WRITE_MASK            ((uint32_t)0x00000001U)
#define FLASH_FMC_WRITE_COMPLETE        ((uint32_t)0x00000000U)
#define FLASH_FMC_WRITE_NOCOMPLETE      ((uint32_t)0x00000001U)
#define FLASH_FMC_WRITE_WRITE           ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FMC_R_ERASE_MASK          ((uint32_t)0x00000002U)
#define FLASH_FMC_R_ERASE_BIT           (1U)
#define FLASH_FMC_R_ERASE_COMPLETE      ((uint32_t)0x00000000U)
#define FLASH_FMC_R_ERASE_NOCOMPLETE    ((uint32_t)0x00000002U)
#define FLASH_FMC_R_ERASE_ERASE         ((uint32_t)0x00000002U)

#define FLASH_FMC_ERASE_MASK            ((uint32_t)0x00000001U)
#define FLASH_FMC_ERASE_COMPLETE        ((uint32_t)0x00000000U)
#define FLASH_FMC_ERASE_NOCOMPLETE      ((uint32_t)0x00000001U)
#define FLASH_FMC_ERASE_ERASE           ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FMC_R_MERASE_MASK          ((uint32_t)0x00000004U)
#define FLASH_FMC_R_MERASE_BIT           (2U)
#define FLASH_FMC_R_MERASE_COMPLETE      ((uint32_t)0x00000000U)
#define FLASH_FMC_R_MERASE_NOCOMPLETE    ((uint32_t)0x00000004U)
#define FLASH_FMC_R_MERASE_MERASE        ((uint32_t)0x00000004U)

#define FLASH_FMC_MERASE_MASK           ((uint32_t)0x00000001U)
#define FLASH_FMC_MERASE_COMPLETE       ((uint32_t)0x00000000U)
#define FLASH_FMC_MERASE_NOCOMPLETE     ((uint32_t)0x00000001U)
#define FLASH_FMC_MERASE_MERASE         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FMC_R_COMT_MASK           ((uint32_t)0x00000008U)
#define FLASH_FMC_R_COMT_BIT            (3U)
#define FLASH_FMC_R_COMT_COMPLETE       ((uint32_t)0x00000000U)
#define FLASH_FMC_R_COMT_NOCOMPLETE     ((uint32_t)0x00000008U)
#define FLASH_FMC_R_COMT_WRITE          ((uint32_t)0x00000008U)

#define FLASH_FMC_COMT_MASK             ((uint32_t)0x00000001U)
#define FLASH_FMC_COMT_COMPLETE         ((uint32_t)0x00000000U)
#define FLASH_FMC_COMT_NOCOMPLETE       ((uint32_t)0x00000001U)
#define FLASH_FMC_COMT_WRITE            ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FMC_R_WRKEY_MASK          ((uint32_t)0xFFFF0000U)
#define FLASH_FMC_R_WRKEY_BIT           (16U)
#define FLASH_FMC_R_WRKEY_KEY1          ((uint32_t)0xA4420000U)
#define FLASH_FMC_R_WRKEY_KEY2          ((uint32_t)0x71D50000U)

#define FLASH_FMC_WRKEY_MASK            ((uint32_t)0x0000FFFFU)
#define FLASH_FMC_WRKEY_KEY1            ((uint32_t)0x0000A442U)
#define FLASH_FMC_WRKEY_KEY2            ((uint32_t)0x000071D5U)
/*----------*/

/******************************************************************************************
************************************ 4 FCRIS *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FCRIS_R_ARIS_MASK         ((uint32_t)0x00000001U)
#define FLASH_FCRIS_R_ARIS_BIT          (0U)
#define FLASH_FCRIS_R_ARIS_NOACTIVE     ((uint32_t)0x00000000U)
#define FLASH_FCRIS_R_ARIS_ACTIVE       ((uint32_t)0x00000001U)

#define FLASH_FCRIS_ARIS_MASK           ((uint32_t)0x00000001U)
#define FLASH_FCRIS_ARIS_NOACTIVE       ((uint32_t)0x00000000U)
#define FLASH_FCRIS_ARIS_ACTIVE         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_PRIS_MASK         ((uint32_t)0x00000002U)
#define FLASH_FCRIS_R_PRIS_BIT          (1U)
#define FLASH_FCRIS_R_PRIS_NOACTIVE     ((uint32_t)0x00000000U)
#define FLASH_FCRIS_R_PRIS_ACTIVE       ((uint32_t)0x00000002U)

#define FLASH_FCRIS_PRIS_MASK           ((uint32_t)0x00000001U)
#define FLASH_FCRIS_PRIS_NOACTIVE       ((uint32_t)0x00000000U)
#define FLASH_FCRIS_PRIS_ACTIVE         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_ERIS_MASK         ((uint32_t)0x00000004U)
#define FLASH_FCRIS_R_ERIS_BIT          (2U)
#define FLASH_FCRIS_R_ERIS_NOACTIVE     ((uint32_t)0x00000000U)
#define FLASH_FCRIS_R_ERIS_ACTIVE       ((uint32_t)0x00000004U)

#define FLASH_FCRIS_ERIS_MASK           ((uint32_t)0x00000001U)
#define FLASH_FCRIS_ERIS_NOACTIVE       ((uint32_t)0x00000000U)
#define FLASH_FCRIS_ERIS_ACTIVE         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_VOLTRIS_MASK      ((uint32_t)0x00000200U)
#define FLASH_FCRIS_R_VOLTRIS_BIT       (9U)
#define FLASH_FCRIS_R_VOLTRIS_NOACTIVE  ((uint32_t)0x00000000U)
#define FLASH_FCRIS_R_VOLTRIS_ACTIVE    ((uint32_t)0x00000200U)

#define FLASH_FCRIS_VOLTRIS_MASK        ((uint32_t)0x00000001U)
#define FLASH_FCRIS_VOLTRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define FLASH_FCRIS_VOLTRIS_ACTIVE      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_INVDRIS_MASK      ((uint32_t)0x00000400U)
#define FLASH_FCRIS_R_INVDRIS_BIT       (10U)
#define FLASH_FCRIS_R_INVDRIS_NOACTIVE  ((uint32_t)0x00000000U)
#define FLASH_FCRIS_R_INVDRIS_ACTIVE    ((uint32_t)0x00000400U)

#define FLASH_FCRIS_INVDRIS_MASK        ((uint32_t)0x00000001U)
#define FLASH_FCRIS_INVDRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define FLASH_FCRIS_INVDRIS_ACTIVE      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_ERRIS_MASK        ((uint32_t)0x00000800U)
#define FLASH_FCRIS_R_ERRIS_BIT         (11U)
#define FLASH_FCRIS_R_ERRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define FLASH_FCRIS_R_ERRIS_ACTIVE      ((uint32_t)0x00000800U)

#define FLASH_FCRIS_ERRIS_MASK          ((uint32_t)0x00000001U)
#define FLASH_FCRIS_ERRIS_NOACTIVE      ((uint32_t)0x00000000U)
#define FLASH_FCRIS_ERRIS_ACTIVE        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCRIS_R_PROGRIS_MASK      ((uint32_t)0x00002000U)
#define FLASH_FCRIS_R_PROGRIS_BIT       (13U)
#define FLASH_FCRIS_R_PROGRIS_NOACTIVE  ((uint32_t)0x00000000U)
#define FLASH_FCRIS_R_PROGRIS_ACTIVE    ((uint32_t)0x00002000U)

#define FLASH_FCRIS_PROGRIS_MASK        ((uint32_t)0x00000001U)
#define FLASH_FCRIS_PROGRIS_NOACTIVE    ((uint32_t)0x00000000U)
#define FLASH_FCRIS_PROGRIS_ACTIVE      ((uint32_t)0x00000001U)
/*----------*/

/******************************************************************************************
************************************ 5 FCIM *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FCIM_R_AMASK_MASK         ((uint32_t)0x00000001U)
#define FLASH_FCIM_R_AMASK_BIT          (0U)
#define FLASH_FCIM_R_AMASK_DIS          ((uint32_t)0x00000000U)
#define FLASH_FCIM_R_AMASK_EN           ((uint32_t)0x00000001U)

#define FLASH_FCIM_AMASK_MASK           ((uint32_t)0x00000001U)
#define FLASH_FCIM_AMASK_DIS            ((uint32_t)0x00000000U)
#define FLASH_FCIM_AMASK_EN             ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_PMASK_MASK         ((uint32_t)0x00000002U)
#define FLASH_FCIM_R_PMASK_BIT          (1U)
#define FLASH_FCIM_R_PMASK_DIS          ((uint32_t)0x00000000U)
#define FLASH_FCIM_R_PMASK_EN           ((uint32_t)0x00000002U)

#define FLASH_FCIM_PMASK_MASK           ((uint32_t)0x00000001U)
#define FLASH_FCIM_PMASK_DIS            ((uint32_t)0x00000000U)
#define FLASH_FCIM_PMASK_EN             ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_EMASK_MASK         ((uint32_t)0x00000004U)
#define FLASH_FCIM_R_EMASK_BIT          (2U)
#define FLASH_FCIM_R_EMASK_DIS          ((uint32_t)0x00000000U)
#define FLASH_FCIM_R_EMASK_EN           ((uint32_t)0x00000004U)

#define FLASH_FCIM_EMASK_MASK           ((uint32_t)0x00000001U)
#define FLASH_FCIM_EMASK_DIS            ((uint32_t)0x00000000U)
#define FLASH_FCIM_EMASK_EN             ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_VOLTMASK_MASK      ((uint32_t)0x00000200U)
#define FLASH_FCIM_R_VOLTMASK_BIT       (9U)
#define FLASH_FCIM_R_VOLTMASK_DIS       ((uint32_t)0x00000000U)
#define FLASH_FCIM_R_VOLTMASK_EN        ((uint32_t)0x00000200U)

#define FLASH_FCIM_VOLTMASK_MASK        ((uint32_t)0x00000001U)
#define FLASH_FCIM_VOLTMASK_DIS         ((uint32_t)0x00000000U)
#define FLASH_FCIM_VOLTMASK_EN          ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_INVDMASK_MASK      ((uint32_t)0x00000400U)
#define FLASH_FCIM_R_INVDMASK_BIT       (10U)
#define FLASH_FCIM_R_INVDMASK_DIS       ((uint32_t)0x00000000U)
#define FLASH_FCIM_R_INVDMASK_EN        ((uint32_t)0x00000400U)

#define FLASH_FCIM_INVDMASK_MASK        ((uint32_t)0x00000001U)
#define FLASH_FCIM_INVDMASK_DIS         ((uint32_t)0x00000000U)
#define FLASH_FCIM_INVDMASK_EN          ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_ERMASK_MASK        ((uint32_t)0x00000800U)
#define FLASH_FCIM_R_ERMASK_BIT         (11U)
#define FLASH_FCIM_R_ERMASK_DIS         ((uint32_t)0x00000000U)
#define FLASH_FCIM_R_ERMASK_EN          ((uint32_t)0x00000800U)

#define FLASH_FCIM_ERMASK_MASK          ((uint32_t)0x00000001U)
#define FLASH_FCIM_ERMASK_DIS           ((uint32_t)0x00000000U)
#define FLASH_FCIM_ERMASK_EN            ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCIM_R_PROGMASK_MASK      ((uint32_t)0x00002000U)
#define FLASH_FCIM_R_PROGMASK_BIT       (13U)
#define FLASH_FCIM_R_PROGMASK_DIS       ((uint32_t)0x00000000U)
#define FLASH_FCIM_R_PROGMASK_EN        ((uint32_t)0x00002000U)

#define FLASH_FCIM_PROGMASK_MASK        ((uint32_t)0x00000001U)
#define FLASH_FCIM_PROGMASK_DIS         ((uint32_t)0x00000000U)
#define FLASH_FCIM_PROGMASK_EN          ((uint32_t)0x00000001U)
/*----------*/

/******************************************************************************************
************************************ 6 FCMISC *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FCMISC_R_AMISC_MASK       ((uint32_t)0x00000001U)
#define FLASH_FCMISC_R_AMISC_BIT        (0U)
#define FLASH_FCMISC_R_AMISC_NOOCCUR    ((uint32_t)0x00000000U)
#define FLASH_FCMISC_R_AMISC_OCCUR      ((uint32_t)0x00000001U)
#define FLASH_FCMISC_R_AMISC_CLEAR      ((uint32_t)0x00000001U)

#define FLASH_FCMISC_AMISC_MASK         ((uint32_t)0x00000001U)
#define FLASH_FCMISC_AMISC_NOOCCUR      ((uint32_t)0x00000000U)
#define FLASH_FCMISC_AMISC_OCCUR        ((uint32_t)0x00000001U)
#define FLASH_FCMISC_AMISC_CLEAR        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_PMISC_MASK       ((uint32_t)0x00000002U)
#define FLASH_FCMISC_R_PMISC_BIT        (1U)
#define FLASH_FCMISC_R_PMISC_NOOCCUR    ((uint32_t)0x00000000U)
#define FLASH_FCMISC_R_PMISC_OCCUR      ((uint32_t)0x00000002U)
#define FLASH_FCMISC_R_PMISC_CLEAR      ((uint32_t)0x00000002U)

#define FLASH_FCMISC_PMISC_MASK         ((uint32_t)0x00000001U)
#define FLASH_FCMISC_PMISC_NOOCCUR      ((uint32_t)0x00000000U)
#define FLASH_FCMISC_PMISC_OCCUR        ((uint32_t)0x00000001U)
#define FLASH_FCMISC_PMISC_CLEAR        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_EMISC_MASK       ((uint32_t)0x00000004U)
#define FLASH_FCMISC_R_EMISC_BIT        (2U)
#define FLASH_FCMISC_R_EMISC_NOOCCUR    ((uint32_t)0x00000000U)
#define FLASH_FCMISC_R_EMISC_OCCUR      ((uint32_t)0x00000004U)
#define FLASH_FCMISC_R_EMISC_CLEAR      ((uint32_t)0x00000004U)

#define FLASH_FCMISC_EMISC_MASK         ((uint32_t)0x00000001U)
#define FLASH_FCMISC_EMISC_NOOCCUR      ((uint32_t)0x00000000U)
#define FLASH_FCMISC_EMISC_OCCUR        ((uint32_t)0x00000001U)
#define FLASH_FCMISC_EMISC_CLEAR        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_VOLTMISC_MASK    ((uint32_t)0x00000200U)
#define FLASH_FCMISC_R_VOLTMISC_BIT     (9U)
#define FLASH_FCMISC_R_VOLTMISC_NOOCCUR ((uint32_t)0x00000000U)
#define FLASH_FCMISC_R_VOLTMISC_OCCUR   ((uint32_t)0x00000200U)
#define FLASH_FCMISC_R_VOLTMISC_CLEAR   ((uint32_t)0x00000200U)

#define FLASH_FCMISC_VOLTMISC_MASK      ((uint32_t)0x00000001U)
#define FLASH_FCMISC_VOLTMISC_NOOCCUR   ((uint32_t)0x00000000U)
#define FLASH_FCMISC_VOLTMISC_OCCUR     ((uint32_t)0x00000001U)
#define FLASH_FCMISC_VOLTMISC_CLEAR     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_INVDMISC_MASK    ((uint32_t)0x00000400U)
#define FLASH_FCMISC_R_INVDMISC_BIT     (10U)
#define FLASH_FCMISC_R_INVDMISC_NOOCCUR ((uint32_t)0x00000000U)
#define FLASH_FCMISC_R_INVDMISC_OCCUR   ((uint32_t)0x00000400U)
#define FLASH_FCMISC_R_INVDMISC_CLEAR   ((uint32_t)0x00000400U)

#define FLASH_FCMISC_INVDMISC_MASK      ((uint32_t)0x00000001U)
#define FLASH_FCMISC_INVDMISC_NOOCCUR   ((uint32_t)0x00000000U)
#define FLASH_FCMISC_INVDMISC_OCCUR     ((uint32_t)0x00000001U)
#define FLASH_FCMISC_INVDMISC_CLEAR     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_ERMISC_MASK      ((uint32_t)0x00000800U)
#define FLASH_FCMISC_R_ERMISC_BIT       (11U)
#define FLASH_FCMISC_R_ERMISC_NOOCCUR   ((uint32_t)0x00000000U)
#define FLASH_FCMISC_R_ERMISC_OCCUR     ((uint32_t)0x00000800U)
#define FLASH_FCMISC_R_ERMISC_CLEAR     ((uint32_t)0x00000800U)

#define FLASH_FCMISC_ERMISC_MASK        ((uint32_t)0x00000001U)
#define FLASH_FCMISC_ERMISC_NOOCCUR     ((uint32_t)0x00000000U)
#define FLASH_FCMISC_ERMISC_OCCUR       ((uint32_t)0x00000001U)
#define FLASH_FCMISC_ERMISC_CLEAR       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FCMISC_R_PROGMISC_MASK    ((uint32_t)0x0002000U)
#define FLASH_FCMISC_R_PROGMISC_BIT     (13U)
#define FLASH_FCMISC_R_PROGMISC_NOOCCUR ((uint32_t)0x00000000U)
#define FLASH_FCMISC_R_PROGMISC_OCCUR   ((uint32_t)0x00002000U)
#define FLASH_FCMISC_R_PROGMISC_CLEAR   ((uint32_t)0x00002000U)

#define FLASH_FCMISC_PROGMISC_MASK      ((uint32_t)0x00000001U)
#define FLASH_FCMISC_PROGMISC_NOOCCUR   ((uint32_t)0x00000000U)
#define FLASH_FCMISC_PROGMISC_OCCUR     ((uint32_t)0x00000001U)
#define FLASH_FCMISC_PROGMISC_CLEAR     ((uint32_t)0x00000001U)
/*----------*/

/******************************************************************************************
************************************ 7 FMC2 *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FMC2_R_WRBUF_MASK         ((uint32_t)0x00000001U)
#define FLASH_FMC2_R_WRBUF_BIT          (0U)
#define FLASH_FMC2_R_WRBUF_COMPLETE     ((uint32_t)0x00000000U)
#define FLASH_FMC2_R_WRBUF_NOCOMPLETE   ((uint32_t)0x00000001U)
#define FLASH_FMC2_R_WRBUF_WRITE        ((uint32_t)0x00000001U)

#define FLASH_FMC2_WRBUF_MASK           ((uint32_t)0x00000001U)
#define FLASH_FMC2_WRBUF_COMPLETE       ((uint32_t)0x00000000U)
#define FLASH_FMC2_WRBUF_NOCOMPLETE     ((uint32_t)0x00000001U)
#define FLASH_FMC2_WRBUF_WRITE          ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FMC2_R_WRKEY_MASK         ((uint32_t)0xFFFF0000U)
#define FLASH_FMC2_R_WRKEY_BIT          (16U)
#define FLASH_FMC2_R_WRKEY_KEY1         ((uint32_t)0xA4420000U)
#define FLASH_FMC2_R_WRKEY_KEY2         ((uint32_t)0x71D50000U)

#define FLASH_FMC2_WRKEY_MASK           ((uint32_t)0x0000FFFFU)
#define FLASH_FMC2_WRKEY_KEY1           ((uint32_t)0x0000A442U)
#define FLASH_FMC2_WRKEY_KEY2           ((uint32_t)0x000071D5U)
/*----------*/

/******************************************************************************************
************************************ 8 FWBVAL *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FWBVAL_R_FWB0_MASK        ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_R_FWB0_BIT         (0U)
#define FLASH_FWBVAL_R_FWB0_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB0_NEWDATA     ((uint32_t)0x00000001U)

#define FLASH_FWBVAL_FWB0_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB0_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB0_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB1_MASK        ((uint32_t)0x00000002U)
#define FLASH_FWBVAL_R_FWB1_BIT         (1U)
#define FLASH_FWBVAL_R_FWB1_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB1_NEWDATA     ((uint32_t)0x00000002U)

#define FLASH_FWBVAL_FWB1_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB1_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB1_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB2_MASK        ((uint32_t)0x00000004U)
#define FLASH_FWBVAL_R_FWB2_BIT         (2U)
#define FLASH_FWBVAL_R_FWB2_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB2_NEWDATA     ((uint32_t)0x00000004U)

#define FLASH_FWBVAL_FWB2_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB2_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB2_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB3_MASK        ((uint32_t)0x00000008U)
#define FLASH_FWBVAL_R_FWB3_BIT         (3U)
#define FLASH_FWBVAL_R_FWB3_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB3_NEWDATA     ((uint32_t)0x00000008U)

#define FLASH_FWBVAL_FWB3_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB3_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB3_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB4_MASK        ((uint32_t)0x00000010U)
#define FLASH_FWBVAL_R_FWB4_BIT         (4U)
#define FLASH_FWBVAL_R_FWB4_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB4_NEWDATA     ((uint32_t)0x00000010U)

#define FLASH_FWBVAL_FWB4_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB4_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB4_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB5_MASK        ((uint32_t)0x00000020U)
#define FLASH_FWBVAL_R_FWB5_BIT         (5U)
#define FLASH_FWBVAL_R_FWB5_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB5_NEWDATA     ((uint32_t)0x00000020U)

#define FLASH_FWBVAL_FWB5_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB5_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB5_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB6_MASK        ((uint32_t)0x00000040U)
#define FLASH_FWBVAL_R_FWB6_BIT         (6U)
#define FLASH_FWBVAL_R_FWB6_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB6_NEWDATA     ((uint32_t)0x00000040U)

#define FLASH_FWBVAL_FWB6_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB6_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB6_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB7_MASK        ((uint32_t)0x00000080U)
#define FLASH_FWBVAL_R_FWB7_BIT         (7U)
#define FLASH_FWBVAL_R_FWB7_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB7_NEWDATA     ((uint32_t)0x00000080U)

#define FLASH_FWBVAL_FWB7_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB7_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB7_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB8_MASK        ((uint32_t)0x00000100U)
#define FLASH_FWBVAL_R_FWB8_BIT         (8U)
#define FLASH_FWBVAL_R_FWB8_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB8_NEWDATA     ((uint32_t)0x00000100U)

#define FLASH_FWBVAL_FWB8_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB8_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB8_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB9_MASK        ((uint32_t)0x00000200U)
#define FLASH_FWBVAL_R_FWB9_BIT         (9U)
#define FLASH_FWBVAL_R_FWB9_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB9_NEWDATA     ((uint32_t)0x00000200U)

#define FLASH_FWBVAL_FWB9_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB9_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB9_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB10_MASK        ((uint32_t)0x00000400U)
#define FLASH_FWBVAL_R_FWB10_BIT         (10U)
#define FLASH_FWBVAL_R_FWB10_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB10_NEWDATA     ((uint32_t)0x00000400U)

#define FLASH_FWBVAL_FWB10_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB10_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB10_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB11_MASK        ((uint32_t)0x00000800U)
#define FLASH_FWBVAL_R_FWB11_BIT         (11U)
#define FLASH_FWBVAL_R_FWB11_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB11_NEWDATA     ((uint32_t)0x00000800U)

#define FLASH_FWBVAL_FWB11_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB11_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB11_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB12_MASK        ((uint32_t)0x00001000U)
#define FLASH_FWBVAL_R_FWB12_BIT         (12U)
#define FLASH_FWBVAL_R_FWB12_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB12_NEWDATA     ((uint32_t)0x00001000U)

#define FLASH_FWBVAL_FWB12_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB12_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB12_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB13_MASK        ((uint32_t)0x00002000U)
#define FLASH_FWBVAL_R_FWB13_BIT         (13U)
#define FLASH_FWBVAL_R_FWB13_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB13_NEWDATA     ((uint32_t)0x00002000U)

#define FLASH_FWBVAL_FWB13_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB13_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB13_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB14_MASK        ((uint32_t)0x00004000U)
#define FLASH_FWBVAL_R_FWB14_BIT         (14U)
#define FLASH_FWBVAL_R_FWB14_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB14_NEWDATA     ((uint32_t)0x00004000U)

#define FLASH_FWBVAL_FWB14_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB14_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB14_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB15_MASK        ((uint32_t)0x00008000U)
#define FLASH_FWBVAL_R_FWB15_BIT         (15U)
#define FLASH_FWBVAL_R_FWB15_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB15_NEWDATA     ((uint32_t)0x00008000U)

#define FLASH_FWBVAL_FWB15_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB15_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB15_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB16_MASK        ((uint32_t)0x00010000U)
#define FLASH_FWBVAL_R_FWB16_BIT         (16U)
#define FLASH_FWBVAL_R_FWB16_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB16_NEWDATA     ((uint32_t)0x00010000U)

#define FLASH_FWBVAL_FWB16_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB16_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB16_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB17_MASK        ((uint32_t)0x00020000U)
#define FLASH_FWBVAL_R_FWB17_BIT         (17U)
#define FLASH_FWBVAL_R_FWB17_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB17_NEWDATA     ((uint32_t)0x00020000U)

#define FLASH_FWBVAL_FWB17_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB17_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB17_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB18_MASK        ((uint32_t)0x00040000U)
#define FLASH_FWBVAL_R_FWB18_BIT         (18U)
#define FLASH_FWBVAL_R_FWB18_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB18_NEWDATA     ((uint32_t)0x00040000U)

#define FLASH_FWBVAL_FWB18_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB18_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB18_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB19_MASK        ((uint32_t)0x00080000U)
#define FLASH_FWBVAL_R_FWB19_BIT         (19U)
#define FLASH_FWBVAL_R_FWB19_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB19_NEWDATA     ((uint32_t)0x00080000U)

#define FLASH_FWBVAL_FWB19_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB19_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB19_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB20_MASK        ((uint32_t)0x00100000U)
#define FLASH_FWBVAL_R_FWB20_BIT         (20U)
#define FLASH_FWBVAL_R_FWB20_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB20_NEWDATA     ((uint32_t)0x00100000U)

#define FLASH_FWBVAL_FWB20_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB20_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB20_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB21_MASK        ((uint32_t)0x00200000U)
#define FLASH_FWBVAL_R_FWB21_BIT         (21U)
#define FLASH_FWBVAL_R_FWB21_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB21_NEWDATA     ((uint32_t)0x00200000U)

#define FLASH_FWBVAL_FWB21_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB21_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB21_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB22_MASK        ((uint32_t)0x00400000U)
#define FLASH_FWBVAL_R_FWB22_BIT         (22U)
#define FLASH_FWBVAL_R_FWB22_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB22_NEWDATA     ((uint32_t)0x00400000U)

#define FLASH_FWBVAL_FWB22_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB22_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB22_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB23_MASK        ((uint32_t)0x00800000U)
#define FLASH_FWBVAL_R_FWB23_BIT         (23U)
#define FLASH_FWBVAL_R_FWB23_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB23_NEWDATA     ((uint32_t)0x00800000U)

#define FLASH_FWBVAL_FWB23_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB23_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB23_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB24_MASK        ((uint32_t)0x01000000U)
#define FLASH_FWBVAL_R_FWB24_BIT         (24U)
#define FLASH_FWBVAL_R_FWB24_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB24_NEWDATA     ((uint32_t)0x01000000U)

#define FLASH_FWBVAL_FWB24_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB24_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB24_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB25_MASK        ((uint32_t)0x02000000U)
#define FLASH_FWBVAL_R_FWB25_BIT         (25U)
#define FLASH_FWBVAL_R_FWB25_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB25_NEWDATA     ((uint32_t)0x02000000U)

#define FLASH_FWBVAL_FWB25_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB25_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB25_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB26_MASK        ((uint32_t)0x04000000U)
#define FLASH_FWBVAL_R_FWB26_BIT         (26U)
#define FLASH_FWBVAL_R_FWB26_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB26_NEWDATA     ((uint32_t)0x04000000U)

#define FLASH_FWBVAL_FWB26_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB26_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB26_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB27_MASK        ((uint32_t)0x08000000U)
#define FLASH_FWBVAL_R_FWB27_BIT         (27U)
#define FLASH_FWBVAL_R_FWB27_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB27_NEWDATA     ((uint32_t)0x08000000U)

#define FLASH_FWBVAL_FWB27_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB27_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB27_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB28_MASK        ((uint32_t)0x10000000U)
#define FLASH_FWBVAL_R_FWB28_BIT         (28U)
#define FLASH_FWBVAL_R_FWB28_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB28_NEWDATA     ((uint32_t)0x10000000U)

#define FLASH_FWBVAL_FWB28_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB28_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB28_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB29_MASK        ((uint32_t)0x20000000U)
#define FLASH_FWBVAL_R_FWB29_BIT         (29U)
#define FLASH_FWBVAL_R_FWB29_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB29_NEWDATA     ((uint32_t)0x20000000U)

#define FLASH_FWBVAL_FWB29_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB29_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB29_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB30_MASK        ((uint32_t)0x40000000U)
#define FLASH_FWBVAL_R_FWB30_BIT         (30U)
#define FLASH_FWBVAL_R_FWB30_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB30_NEWDATA     ((uint32_t)0x40000000U)

#define FLASH_FWBVAL_FWB30_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB30_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB30_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define FLASH_FWBVAL_R_FWB31_MASK        ((uint32_t)0x80000000U)
#define FLASH_FWBVAL_R_FWB31_BIT         (31U)
#define FLASH_FWBVAL_R_FWB31_NODATA      ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_R_FWB31_NEWDATA     ((uint32_t)0x80000000U)

#define FLASH_FWBVAL_FWB31_MASK          ((uint32_t)0x00000001U)
#define FLASH_FWBVAL_FWB31_NODATA        ((uint32_t)0x00000000U)
#define FLASH_FWBVAL_FWB31_NEWDATA       ((uint32_t)0x00000001U)
/*----------*/

/******************************************************************************************
************************************ 9-40 FWBn *********************************************
******************************************************************************************/

/******************************************************************************************
************************************ 41 FSIZE *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_FSIZE_R_SIZE_MASK     ((uint32_t)0x0000FFFFU)
#define FLASH_FSIZE_R_SIZE_BIT      (0U)
#define FLASH_FSIZE_R_SIZE_256KB    ((uint32_t)0x0000007FU)

#define FLASH_FSIZE_SIZE_MASK       ((uint32_t)0x0000FFFFU)
#define FLASH_FSIZE_SIZE_256KB      ((uint32_t)0x0000007FU)
/*----------*/

/******************************************************************************************
************************************ 42 SSIZE *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_SSIZE_R_SIZE_MASK     ((uint32_t)0x0000FFFFU)
#define FLASH_SSIZE_R_SIZE_BIT      (0U)
#define FLASH_SSIZE_R_SIZE_32KB     ((uint32_t)0x0000007FU)

#define FLASH_SSIZE_SIZE_MASK       ((uint32_t)0x0000FFFFU)
#define FLASH_SSIZE_SIZE_32KB       ((uint32_t)0x0000007FU)
/*----------*/

/******************************************************************************************
************************************ 43 ROMSWMAP *********************************************
******************************************************************************************/

/*----------*/
#define FLASH_ROMSWMAP_R_SAFERTOS_MASK      ((uint32_t)0x00000001U)
#define FLASH_ROMSWMAP_R_SAFERTOS_BIT       (0U)
#define FLASH_ROMSWMAP_R_SAFERTOS_NOPRESENT ((uint32_t)0x00000000U)
#define FLASH_ROMSWMAP_R_SAFERTOS_PRESENT   ((uint32_t)0x00000001U)

#define FLASH_ROMSWMAP_SAFERTOS_MASK       ((uint32_t)0x00000001U)
#define FLASH_ROMSWMAP_SAFERTOS_NOPRESENT  ((uint32_t)0x00000000U)
#define FLASH_ROMSWMAP_SAFERTOS_PRESENT    ((uint32_t)0x00000001U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERDEFINES_H_ */
