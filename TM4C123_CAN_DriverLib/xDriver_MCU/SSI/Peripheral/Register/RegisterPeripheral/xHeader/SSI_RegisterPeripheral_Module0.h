/**
 *
 * @file SSI_RegisterPeripheral_Module0.h
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
 * @verbatim 16 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE0_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE0_H_

#include <xDriver_MCU/SSI/Peripheral/Register/xHeader/SSI_RegisterAddress.h>
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterDefines/SSI_RegisterDefines.h>
#include <xDriver_MCU/SSI/Peripheral/Struct/xHeader/SSI_StructPeripheral.h>

/******************************************************************************************
************************************ SSI0 *********************************************
******************************************************************************************/

#define SSI0    ((SSI_TypeDef*) (SSI0_BASE))

/******************************************************************************************
************************************ 1 CR0 *********************************************
******************************************************************************************/
#define SSI0_CR0    ((SSICR0_TypeDef*) (SSI0_BASE + SSI_CR0_OFFSET ))
#define SSI0_CR0_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_CR0_OFFSET)))

/******************************************************************************************
************************************ 2 CR1 *********************************************
******************************************************************************************/
#define SSI0_CR1    ((SSICR1_TypeDef*) (SSI0_BASE + SSI_CR1_OFFSET ))
#define SSI0_CR1_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_CR1_OFFSET)))

/******************************************************************************************
************************************ 3 DR *********************************************
******************************************************************************************/
#define SSI0_DR    ((SSIDR_TypeDef*) (SSI0_BASE + SSI_DR_OFFSET ))
#define SSI0_DR_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_DR_OFFSET)))

/******************************************************************************************
************************************ 4 SR *********************************************
******************************************************************************************/
#define SSI0_SR    ((SSISR_TypeDef*) (SSI0_BASE + SSI_SR_OFFSET ))
#define SSI0_SR_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SR_OFFSET)))

/******************************************************************************************
************************************ 5 CPSR *********************************************
******************************************************************************************/
#define SSI0_CPSR    ((SSICPSR_TypeDef*) (SSI0_BASE + SSI_CPSR_OFFSET ))
#define SSI0_CPSR_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_CPSR_OFFSET)))

/******************************************************************************************
************************************ 6 IM *********************************************
******************************************************************************************/
#define SSI0_IM    ((SSIIM_TypeDef*) (SSI0_BASE + SSI_IM_OFFSET ))
#define SSI0_IM_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_IM_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define SSI0_RIS    ((SSIRIS_TypeDef*) (SSI0_BASE + SSI_RIS_OFFSET ))
#define SSI0_RIS_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_RIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define SSI0_MIS    ((SSIMIS_TypeDef*) (SSI0_BASE + SSI_MIS_OFFSET ))
#define SSI0_MIS_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_MIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define SSI0_ICR    ((SSIICR_TypeDef*) (SSI0_BASE + SSI_ICR_OFFSET ))
#define SSI0_ICR_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_ICR_OFFSET)))

/******************************************************************************************
************************************ 10 DMACTL *********************************************
******************************************************************************************/
#define SSI0_DMACTL    ((SSIDMACTL_TypeDef*) (SSI0_BASE + SSI_DMACTL_OFFSET ))
#define SSI0_DMACTL_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_DMACTL_OFFSET)))

/******************************************************************************************
************************************ 11 CC *********************************************
******************************************************************************************/
#define SSI0_CC    ((SSICC_TypeDef*) (SSI0_BASE + SSI_CC_OFFSET ))
#define SSI0_CC_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_CC_OFFSET)))

/******************************************************************************************
 ************************************ 12 PeriphID4 *********************************************
 ******************************************************************************************/
/* SSI0 PID4*/
#define SSI0_PeriphID4    ((SSIPeriphID4_TypeDef*) (SSI0_BASE + SSI_PeriphID4_OFFSET))
#define SSI0_PeriphID4_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 13 PeriphID5 *********************************************
 ******************************************************************************************/
/* SSI0 PID5*/
#define SSI0_PeriphID5    ((SSIPeriphID5_TypeDef*) (SSI0_BASE + SSI_PeriphID5_OFFSET))
#define SSI0_PeriphID5_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 14 PeriphID6 *********************************************
 ******************************************************************************************/
/* SSI0 PID6*/
#define SSI0_PeriphID6    ((SSIPeriphID6_TypeDef*) (SSI0_BASE + SSI_PeriphID6_OFFSET))
#define SSI0_PeriphID6_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 15 PeriphID7 *********************************************
 ******************************************************************************************/
/* SSI0 PID7*/
#define SSI0_PeriphID7    ((SSIPeriphID7_TypeDef*) (SSI0_BASE + SSI_PeriphID7_OFFSET))
#define SSI0_PeriphID7_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 16 PeriphID0 *********************************************
 ******************************************************************************************/
/* SSI0 PID0*/
#define SSI0_PeriphID0    ((SSIPeriphID0_TypeDef*) (SSI0_BASE + SSI_PeriphID0_OFFSET))
#define SSI0_PeriphID0_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 17 PeriphID1 *********************************************
 ******************************************************************************************/
/* SSI0 PID1*/
#define SSI0_PeriphID1    ((SSIPeriphID1_TypeDef*) (SSI0_BASE + SSI_PeriphID1_OFFSET))
#define SSI0_PeriphID1_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 18 PeriphID2 *********************************************
 ******************************************************************************************/
/* SSI0 PID2*/
#define SSI0_PeriphID2    ((SSIPeriphID2_TypeDef*) (SSI0_BASE + SSI_PeriphID2_OFFSET))
#define SSI0_PeriphID2_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 19 PeriphID3 *********************************************
 ******************************************************************************************/
/* SSI0 PID3*/
#define SSI0_PeriphID3    ((SSIPeriphID3_TypeDef*) (SSI0_BASE + SSI_PeriphID3_OFFSET))
#define SSI0_PeriphID3_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 20 CellID0 *********************************************
 ******************************************************************************************/
/* SSI0 CID0*/
#define SSI0_CellID0    ((SSICellID0_TypeDef*) (SSI0_BASE + SSI_CellID0_OFFSET))
#define SSI0_CellID0_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 21 CellID1 *********************************************
 ******************************************************************************************/
/* SSI0 CID1*/
#define SSI0_CellID1    ((SSICellID1_TypeDef*) (SSI0_BASE + SSI_CellID1_OFFSET))
#define SSI0_CellID1_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 22 CellID2 *********************************************
 ******************************************************************************************/
/* SSI0 CID2*/
#define SSI0_CellID2    ((SSICellID2_TypeDef*) (SSI0_BASE + SSI_CellID2_OFFSET))
#define SSI0_CellID2_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 23 CellID3 *********************************************
 ******************************************************************************************/
/* SSI0 CID3*/
#define SSI0_CellID3    ((SSICellID3_TypeDef*) (SSI0_BASE + SSI_CellID3_OFFSET))
#define SSI0_CellID3_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE0_H_ */
