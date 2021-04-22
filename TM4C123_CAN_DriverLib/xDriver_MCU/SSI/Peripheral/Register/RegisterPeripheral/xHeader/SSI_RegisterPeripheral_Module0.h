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
************************************ 1 SSICR0 *********************************************
******************************************************************************************/
#define SSI0_SSICR0    ((SSICR0_TypeDef*) (SSI0_BASE + SSI_SSICR0_OFFSET ))
#define SSI0_SSICR0_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_SSICR0_OFFSET)))

/******************************************************************************************
************************************ 2 SSICR1 *********************************************
******************************************************************************************/
#define SSI0_SSICR1    ((SSICR1_TypeDef*) (SSI0_BASE + SSI_SSICR1_OFFSET ))
#define SSI0_SSICR1_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_SSICR1_OFFSET)))

/******************************************************************************************
************************************ 3 SSIDR *********************************************
******************************************************************************************/
#define SSI0_SSIDR    ((SSIDR_TypeDef*) (SSI0_BASE + SSI_SSIDR_OFFSET ))
#define SSI0_SSIDR_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_SSIDR_OFFSET)))

/******************************************************************************************
************************************ 4 SSISR *********************************************
******************************************************************************************/
#define SSI0_SSISR    ((SSISR_TypeDef*) (SSI0_BASE + SSI_SSISR_OFFSET ))
#define SSI0_SSISR_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSISR_OFFSET)))

/******************************************************************************************
************************************ 5 SSICPSR *********************************************
******************************************************************************************/
#define SSI0_SSICPSR    ((SSICPSR_TypeDef*) (SSI0_BASE + SSI_SSICPSR_OFFSET ))
#define SSI0_SSICPSR_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_SSICPSR_OFFSET)))

/******************************************************************************************
************************************ 6 SSIIM *********************************************
******************************************************************************************/
#define SSI0_SSIIM    ((SSIIM_TypeDef*) (SSI0_BASE + SSI_SSIIM_OFFSET ))
#define SSI0_SSIIM_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_SSIIM_OFFSET)))

/******************************************************************************************
************************************ 7 SSIRIS *********************************************
******************************************************************************************/
#define SSI0_SSIRIS    ((SSIRIS_TypeDef*) (SSI0_BASE + SSI_SSIRIS_OFFSET ))
#define SSI0_SSIRIS_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSIRIS_OFFSET)))

/******************************************************************************************
************************************ 8 SSIMIS *********************************************
******************************************************************************************/
#define SSI0_SSIMIS    ((SSIMIS_TypeDef*) (SSI0_BASE + SSI_SSIMIS_OFFSET ))
#define SSI0_SSIMIS_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSIMIS_OFFSET)))

/******************************************************************************************
************************************ 9 SSIICR *********************************************
******************************************************************************************/
#define SSI0_SSIICR    ((SSIICR_TypeDef*) (SSI0_BASE + SSI_SSIICR_OFFSET ))
#define SSI0_SSIICR_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_SSIICR_OFFSET)))

/******************************************************************************************
************************************ 10 SSIDMACTL *********************************************
******************************************************************************************/
#define SSI0_SSIDMACTL    ((SSIDMACTL_TypeDef*) (SSI0_BASE + SSI_SSIDMACTL_OFFSET ))
#define SSI0_SSIDMACTL_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_SSIDMACTL_OFFSET)))

/******************************************************************************************
************************************ 11 SSICC *********************************************
******************************************************************************************/
#define SSI0_SSICC    ((SSICC_TypeDef*) (SSI0_BASE + SSI_SSICC_OFFSET ))
#define SSI0_SSICC_R    (*((volatile uint32_t*) (SSI0_BASE + SSI_SSICC_OFFSET)))

/******************************************************************************************
 ************************************ 12 SSIPeriphID4 *********************************************
 ******************************************************************************************/
/* SSI0 PID4*/
#define SSI0_SSIPeriphID4    ((SSIPeriphID4_TypeDef*) (SSI0_BASE + SSI_SSIPeriphID4_OFFSET))
#define SSI0_SSIPeriphID4_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSIPeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 13 SSIPeriphID5 *********************************************
 ******************************************************************************************/
/* SSI0 PID5*/
#define SSI0_SSIPeriphID5    ((SSIPeriphID5_TypeDef*) (SSI0_BASE + SSI_SSIPeriphID5_OFFSET))
#define SSI0_SSIPeriphID5_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSIPeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 14 SSIPeriphID6 *********************************************
 ******************************************************************************************/
/* SSI0 PID6*/
#define SSI0_SSIPeriphID6    ((SSIPeriphID6_TypeDef*) (SSI0_BASE + SSI_SSIPeriphID6_OFFSET))
#define SSI0_SSIPeriphID6_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSIPeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 15 SSIPeriphID7 *********************************************
 ******************************************************************************************/
/* SSI0 PID7*/
#define SSI0_SSIPeriphID7    ((SSIPeriphID7_TypeDef*) (SSI0_BASE + SSI_SSIPeriphID7_OFFSET))
#define SSI0_SSIPeriphID7_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSIPeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 16 SSIPeriphID0 *********************************************
 ******************************************************************************************/
/* SSI0 PID0*/
#define SSI0_SSIPeriphID0    ((SSIPeriphID0_TypeDef*) (SSI0_BASE + SSI_SSIPeriphID0_OFFSET))
#define SSI0_SSIPeriphID0_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSIPeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 17 SSIPeriphID1 *********************************************
 ******************************************************************************************/
/* SSI0 PID1*/
#define SSI0_SSIPeriphID1    ((SSIPeriphID1_TypeDef*) (SSI0_BASE + SSI_SSIPeriphID1_OFFSET))
#define SSI0_SSIPeriphID1_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSIPeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 18 SSIPeriphID2 *********************************************
 ******************************************************************************************/
/* SSI0 PID2*/
#define SSI0_SSIPeriphID2    ((SSIPeriphID2_TypeDef*) (SSI0_BASE + SSI_SSIPeriphID2_OFFSET))
#define SSI0_SSIPeriphID2_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSIPeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 19 SSIPeriphID3 *********************************************
 ******************************************************************************************/
/* SSI0 PID3*/
#define SSI0_SSIPeriphID3    ((SSIPeriphID3_TypeDef*) (SSI0_BASE + SSI_SSIPeriphID3_OFFSET))
#define SSI0_SSIPeriphID3_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSIPeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 20 SSICellID0 *********************************************
 ******************************************************************************************/
/* SSI0 CID0*/
#define SSI0_SSICellID0    ((SSICellID0_TypeDef*) (SSI0_BASE + SSI_SSICellID0_OFFSET))
#define SSI0_SSICellID0_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSICellID0_OFFSET)))

/******************************************************************************************
 ************************************ 21 SSICellID1 *********************************************
 ******************************************************************************************/
/* SSI0 CID1*/
#define SSI0_SSICellID1    ((SSICellID1_TypeDef*) (SSI0_BASE + SSI_SSICellID1_OFFSET))
#define SSI0_SSICellID1_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSICellID1_OFFSET)))

/******************************************************************************************
 ************************************ 22 SSICellID2 *********************************************
 ******************************************************************************************/
/* SSI0 CID2*/
#define SSI0_SSICellID2    ((SSICellID2_TypeDef*) (SSI0_BASE + SSI_SSICellID2_OFFSET))
#define SSI0_SSICellID2_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSICellID2_OFFSET)))

/******************************************************************************************
 ************************************ 23 SSICellID3 *********************************************
 ******************************************************************************************/
/* SSI0 CID3*/
#define SSI0_SSICellID3    ((SSICellID3_TypeDef*) (SSI0_BASE + SSI_SSICellID3_OFFSET))
#define SSI0_SSICellID3_R    (*((volatile const uint32_t*) (SSI0_BASE + SSI_SSICellID3_OFFSET)))

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE0_H_ */
