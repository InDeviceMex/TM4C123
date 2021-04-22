/**
 *
 * @file SSI_RegisterPeripheral_Module1.h
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
#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE1_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE1_H_

#include <xDriver_MCU/SSI/Peripheral/Register/xHeader/SSI_RegisterAddress.h>
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterDefines/SSI_RegisterDefines.h>
#include <xDriver_MCU/SSI/Peripheral/Struct/xHeader/SSI_StructPeripheral.h>

/******************************************************************************************
************************************ SSI1 *********************************************
******************************************************************************************/

#define SSI1    ((SSI_TypeDef*) (SSI1_BASE))

/******************************************************************************************
************************************ 1 SSICR0 *********************************************
******************************************************************************************/
#define SSI1_SSICR0    ((SSICR0_TypeDef*) (SSI1_BASE + SSI_SSICR0_OFFSET ))
#define SSI1_SSICR0_R    (*((volatile uint32_t*) (SSI1_BASE + SSI_SSICR0_OFFSET)))

/******************************************************************************************
************************************ 2 SSICR1 *********************************************
******************************************************************************************/
#define SSI1_SSICR1    ((SSICR1_TypeDef*) (SSI1_BASE + SSI_SSICR1_OFFSET ))
#define SSI1_SSICR1_R    (*((volatile uint32_t*) (SSI1_BASE + SSI_SSICR1_OFFSET)))

/******************************************************************************************
************************************ 3 SSIDR *********************************************
******************************************************************************************/
#define SSI1_SSIDR    ((SSIDR_TypeDef*) (SSI1_BASE + SSI_SSIDR_OFFSET ))
#define SSI1_SSIDR_R    (*((volatile uint32_t*) (SSI1_BASE + SSI_SSIDR_OFFSET)))

/******************************************************************************************
************************************ 4 SSISR *********************************************
******************************************************************************************/
#define SSI1_SSISR    ((SSISR_TypeDef*) (SSI1_BASE + SSI_SSISR_OFFSET ))
#define SSI1_SSISR_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSISR_OFFSET)))

/******************************************************************************************
************************************ 5 SSICPSR *********************************************
******************************************************************************************/
#define SSI1_SSICPSR    ((SSICPSR_TypeDef*) (SSI1_BASE + SSI_SSICPSR_OFFSET ))
#define SSI1_SSICPSR_R    (*((volatile uint32_t*) (SSI1_BASE + SSI_SSICPSR_OFFSET)))

/******************************************************************************************
************************************ 6 SSIIM *********************************************
******************************************************************************************/
#define SSI1_SSIIM    ((SSIIM_TypeDef*) (SSI1_BASE + SSI_SSIIM_OFFSET ))
#define SSI1_SSIIM_R    (*((volatile uint32_t*) (SSI1_BASE + SSI_SSIIM_OFFSET)))

/******************************************************************************************
************************************ 7 SSIRIS *********************************************
******************************************************************************************/
#define SSI1_SSIRIS    ((SSIRIS_TypeDef*) (SSI1_BASE + SSI_SSIRIS_OFFSET ))
#define SSI1_SSIRIS_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSIRIS_OFFSET)))

/******************************************************************************************
************************************ 8 SSIMIS *********************************************
******************************************************************************************/
#define SSI1_SSIMIS    ((SSIMIS_TypeDef*) (SSI1_BASE + SSI_SSIMIS_OFFSET ))
#define SSI1_SSIMIS_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSIMIS_OFFSET)))

/******************************************************************************************
************************************ 9 SSIICR *********************************************
******************************************************************************************/
#define SSI1_SSIICR    ((SSIICR_TypeDef*) (SSI1_BASE + SSI_SSIICR_OFFSET ))
#define SSI1_SSIICR_R    (*((volatile uint32_t*) (SSI1_BASE + SSI_SSIICR_OFFSET)))

/******************************************************************************************
************************************ 10 SSIDMACTL *********************************************
******************************************************************************************/
#define SSI1_SSIDMACTL    ((SSIDMACTL_TypeDef*) (SSI1_BASE + SSI_SSIDMACTL_OFFSET ))
#define SSI1_SSIDMACTL_R    (*((volatile uint32_t*) (SSI1_BASE + SSI_SSIDMACTL_OFFSET)))

/******************************************************************************************
************************************ 11 SSICC *********************************************
******************************************************************************************/
#define SSI1_SSICC    ((SSICC_TypeDef*) (SSI1_BASE + SSI_SSICC_OFFSET ))
#define SSI1_SSICC_R    (*((volatile uint32_t*) (SSI1_BASE + SSI_SSICC_OFFSET)))

/******************************************************************************************
 ************************************ 12 SSIPeriphID4 *********************************************
 ******************************************************************************************/
/* SSI1 PID4*/
#define SSI1_SSIPeriphID4    ((SSIPeriphID4_TypeDef*) (SSI1_BASE + SSI_SSIPeriphID4_OFFSET))
#define SSI1_SSIPeriphID4_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSIPeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 13 SSIPeriphID5 *********************************************
 ******************************************************************************************/
/* SSI1 PID5*/
#define SSI1_SSIPeriphID5    ((SSIPeriphID5_TypeDef*) (SSI1_BASE + SSI_SSIPeriphID5_OFFSET))
#define SSI1_SSIPeriphID5_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSIPeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 14 SSIPeriphID6 *********************************************
 ******************************************************************************************/
/* SSI1 PID6*/
#define SSI1_SSIPeriphID6    ((SSIPeriphID6_TypeDef*) (SSI1_BASE + SSI_SSIPeriphID6_OFFSET))
#define SSI1_SSIPeriphID6_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSIPeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 15 SSIPeriphID7 *********************************************
 ******************************************************************************************/
/* SSI1 PID7*/
#define SSI1_SSIPeriphID7    ((SSIPeriphID7_TypeDef*) (SSI1_BASE + SSI_SSIPeriphID7_OFFSET))
#define SSI1_SSIPeriphID7_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSIPeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 16 SSIPeriphID0 *********************************************
 ******************************************************************************************/
/* SSI1 PID0*/
#define SSI1_SSIPeriphID0    ((SSIPeriphID0_TypeDef*) (SSI1_BASE + SSI_SSIPeriphID0_OFFSET))
#define SSI1_SSIPeriphID0_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSIPeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 17 SSIPeriphID1 *********************************************
 ******************************************************************************************/
/* SSI1 PID1*/
#define SSI1_SSIPeriphID1    ((SSIPeriphID1_TypeDef*) (SSI1_BASE + SSI_SSIPeriphID1_OFFSET))
#define SSI1_SSIPeriphID1_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSIPeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 18 SSIPeriphID2 *********************************************
 ******************************************************************************************/
/* SSI1 PID2*/
#define SSI1_SSIPeriphID2    ((SSIPeriphID2_TypeDef*) (SSI1_BASE + SSI_SSIPeriphID2_OFFSET))
#define SSI1_SSIPeriphID2_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSIPeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 19 SSIPeriphID3 *********************************************
 ******************************************************************************************/
/* SSI1 PID3*/
#define SSI1_SSIPeriphID3    ((SSIPeriphID3_TypeDef*) (SSI1_BASE + SSI_SSIPeriphID3_OFFSET))
#define SSI1_SSIPeriphID3_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSIPeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 20 SSICellID0 *********************************************
 ******************************************************************************************/
/* SSI1 CID0*/
#define SSI1_SSICellID0    ((SSICellID0_TypeDef*) (SSI1_BASE + SSI_SSICellID0_OFFSET))
#define SSI1_SSICellID0_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSICellID0_OFFSET)))

/******************************************************************************************
 ************************************ 21 SSICellID1 *********************************************
 ******************************************************************************************/
/* SSI1 CID1*/
#define SSI1_SSICellID1    ((SSICellID1_TypeDef*) (SSI1_BASE + SSI_SSICellID1_OFFSET))
#define SSI1_SSICellID1_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSICellID1_OFFSET)))

/******************************************************************************************
 ************************************ 22 SSICellID2 *********************************************
 ******************************************************************************************/
/* SSI1 CID2*/
#define SSI1_SSICellID2    ((SSICellID2_TypeDef*) (SSI1_BASE + SSI_SSICellID2_OFFSET))
#define SSI1_SSICellID2_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSICellID2_OFFSET)))

/******************************************************************************************
 ************************************ 23 SSICellID3 *********************************************
 ******************************************************************************************/
/* SSI1 CID3*/
#define SSI1_SSICellID3    ((SSICellID3_TypeDef*) (SSI1_BASE + SSI_SSICellID3_OFFSET))
#define SSI1_SSICellID3_R    (*((volatile const uint32_t*) (SSI1_BASE + SSI_SSICellID3_OFFSET)))

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE1_H_ */
