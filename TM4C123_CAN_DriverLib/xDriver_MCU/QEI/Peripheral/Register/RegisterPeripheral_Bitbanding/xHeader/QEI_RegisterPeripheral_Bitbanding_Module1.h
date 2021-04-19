/**
 *
 * @file QEI_RegisterPeripheral_Bitbanding_Module1.h
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_QEI_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_QEI_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_

#include <xDriver_MCU/QEI/Peripheral/Register/xHeader/QEI_RegisterAddress.h>
#include <xDriver_MCU/QEI/Peripheral/Register/xHeader/QEI_RegisterDefines.h>
#include <xDriver_MCU/QEI/Peripheral/Struct/xHeader/QEI_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ QEI *********************************************
******************************************************************************************/
#define QEI1_BITBANDING    ((QEI_BITBANDING_TypeDef*) (QEI_BITBANDING_BASE + (QEI1_OFFSET * 32UL)))


/******************************************************************************************
************************************ 1 QEICTL *********************************************
******************************************************************************************/
#define QEI1_BITBANDING_QEICTL    ((BITBANDING_QEICTL_TypeDef*) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL)))

#define QEI1_BITBANDING_QEICTL_ENABLE    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + (QEI_QEICTL_R_ENABLE_BIT * 4UL))))
#define QEI1_BITBANDING_QEICTL_SWAP    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + (QEI_QEICTL_R_SWAP_BIT * 4UL))))
#define QEI1_BITBANDING_QEICTL_SIGMODE    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + (QEI_QEICTL_R_SIGMODE_BIT * 4UL))))
#define QEI1_BITBANDING_QEICTL_CAPMODE    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + (QEI_QEICTL_R_CAPMODE_BIT * 4UL))))
#define QEI1_BITBANDING_QEICTL_RESMODE    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + (QEI_QEICTL_R_RESMODE_BIT * 4UL))))
#define QEI1_BITBANDING_QEICTL_VELEN    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + (QEI_QEICTL_R_VELEN_BIT * 4UL))))
#define QEI1_BITBANDING_QEICTL_VELDIV_0    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + ((QEI_QEICTL_R_VELDIV_BIT + 0UL) * 4UL))))
#define QEI1_BITBANDING_QEICTL_VELDIV_1    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + ((QEI_QEICTL_R_VELDIV_BIT + 1UL) * 4UL))))
#define QEI1_BITBANDING_QEICTL_VELDIV_2    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + ((QEI_QEICTL_R_VELDIV_BIT + 2UL) * 4UL))))
#define QEI1_BITBANDING_QEICTL_INVA    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + (QEI_QEICTL_R_INVA_BIT * 4UL))))
#define QEI1_BITBANDING_QEICTL_INVB    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + (QEI_QEICTL_R_INVB_BIT * 4UL))))
#define QEI1_BITBANDING_QEICTL_INVI    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + (QEI_QEICTL_R_INVI_BIT * 4UL))))
#define QEI1_BITBANDING_QEICTL_STALLEN    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + (QEI_QEICTL_R_STALLEN_BIT * 4UL))))
#define QEI1_BITBANDING_QEICTL_FILTEN    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + (QEI_QEICTL_R_FILTEN_BIT * 4UL))))
#define QEI1_BITBANDING_QEICTL_FILTCNT_0    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + ((QEI_QEICTL_R_FILTCNT_BIT + 0UL) * 4UL))))
#define QEI1_BITBANDING_QEICTL_FILTCNT_1    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + ((QEI_QEICTL_R_FILTCNT_BIT + 1UL) * 4UL))))
#define QEI1_BITBANDING_QEICTL_FILTCNT_2    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + ((QEI_QEICTL_R_FILTCNT_BIT + 2UL) * 4UL))))
#define QEI1_BITBANDING_QEICTL_FILTCNT_3    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICTL_OFFSET) * 32UL) + ((QEI_QEICTL_R_FILTCNT_BIT + 3UL) * 4UL))))

/******************************************************************************************
************************************ 2 QEISTAT *********************************************
******************************************************************************************/
#define QEI1_BITBANDING_QEISTAT    ((BITBANDING_QEISTAT_TypeDef*) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEISTAT_OFFSET) * 32UL)))

#define QEI1_BITBANDING_QEISTAT_ERROR    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEISTAT_OFFSET) * 32UL) + (QEI_QEISTAT_R_ERROR_BIT * 4UL))))
#define QEI1_BITBANDING_QEISTAT_DIRECTION    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEISTAT_OFFSET) * 32UL) + (QEI_QEISTAT_R_DIRECTION_BIT * 4UL))))

/******************************************************************************************
************************************ 3 QEIPOS *********************************************
******************************************************************************************/
#define QEI1_BITBANDING_QEIPOS    ((BITBANDING_QEIPOS_TypeDef*) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIPOS_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 4 QEIMAXPOS *********************************************
******************************************************************************************/
#define QEI1_BITBANDING_QEIMAXPOS    ((BITBANDING_QEIMAXPOS_TypeDef*) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIMAXPOS_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 5 QEILOAD *********************************************
******************************************************************************************/
#define QEI1_BITBANDING_QEILOAD    ((BITBANDING_QEILOAD_TypeDef*) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEILOAD_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 6 QEITIME *********************************************
******************************************************************************************/
#define QEI1_BITBANDING_QEITIME    ((BITBANDING_QEITIME_TypeDef*) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEITIME_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 7 QEICOUNT *********************************************
******************************************************************************************/
#define QEI1_BITBANDING_QEICOUNT    ((BITBANDING_QEICOUNT_TypeDef*) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEICOUNT_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 8 QEISPEED *********************************************
******************************************************************************************/
#define QEI1_BITBANDING_QEISPEED    ((BITBANDING_QEISPEED_TypeDef*) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEISPEED_OFFSET) * 32UL)))

/******************************************************************************************
************************************ 9 QEIINTEN *********************************************
******************************************************************************************/
#define QEI1_BITBANDING_QEIINTEN    ((BITBANDING_QEIINTEN_TypeDef*) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIINTEN_OFFSET) * 32UL)))

#define QEI1_BITBANDING_QEIINTEN_INTINDEX    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIINTEN_OFFSET) * 32UL) + (QEI_QEIINTEN_R_INTINDEX_BIT * 4UL))))
#define QEI1_BITBANDING_QEIINTEN_INTTIMER    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIINTEN_OFFSET) * 32UL) + (QEI_QEIINTEN_R_INTTIMER_BIT * 4UL))))
#define QEI1_BITBANDING_QEIINTEN_INTDIR    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIINTEN_OFFSET) * 32UL) + (QEI_QEIINTEN_R_INTDIR_BIT * 4UL))))
#define QEI1_BITBANDING_QEIINTEN_INTERROR    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIINTEN_OFFSET) * 32UL) + (QEI_QEIINTEN_R_INTERROR_BIT * 4UL))))

/******************************************************************************************
************************************ 10 QEIRIS *********************************************
******************************************************************************************/
#define QEI1_BITBANDING_QEIRIS    ((BITBANDING_QEIRIS_TypeDef*) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIRIS_OFFSET) * 32UL)))

#define QEI1_BITBANDING_QEIRIS_INTINDEX    (*((volatile const uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIRIS_OFFSET) * 32UL) + (QEI_QEIRIS_R_INTINDEX_BIT * 4UL))))
#define QEI1_BITBANDING_QEIRIS_INTTIMER    (*((volatile const uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIRIS_OFFSET) * 32UL) + (QEI_QEIRIS_R_INTTIMER_BIT * 4UL))))
#define QEI1_BITBANDING_QEIRIS_INTDIR    (*((volatile const uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIRIS_OFFSET) * 32UL) + (QEI_QEIRIS_R_INTDIR_BIT * 4UL))))
#define QEI1_BITBANDING_QEIRIS_INTERROR    (*((volatile const uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIRIS_OFFSET) * 32UL) + (QEI_QEIRIS_R_INTERROR_BIT * 4UL))))

/******************************************************************************************
************************************ 11 QEIISC *********************************************
******************************************************************************************/
#define QEI1_BITBANDING_QEIISC    ((BITBANDING_QEIISC_TypeDef*) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIISC_OFFSET) * 32UL)))

#define QEI1_BITBANDING_QEIISC_INTINDEX    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIISC_OFFSET) * 32UL) + (QEI_QEIISC_R_INTINDEX_BIT * 4UL))))
#define QEI1_BITBANDING_QEIISC_INTTIMER    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIISC_OFFSET) * 32UL) + (QEI_QEIISC_R_INTTIMER_BIT * 4UL))))
#define QEI1_BITBANDING_QEIISC_INTDIR    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIISC_OFFSET) * 32UL) + (QEI_QEIISC_R_INTDIR_BIT * 4UL))))
#define QEI1_BITBANDING_QEIISC_INTERROR    (*((volatile uint32_t *) (QEI_BITBANDING_BASE + ((QEI1_OFFSET + QEI_QEIISC_OFFSET) * 32UL) + (QEI_QEIISC_R_INTERROR_BIT * 4UL))))

#endif /* XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_QEI_REGISTERPERIPHERAL_BITBANDING_MODULE1_H_ */
