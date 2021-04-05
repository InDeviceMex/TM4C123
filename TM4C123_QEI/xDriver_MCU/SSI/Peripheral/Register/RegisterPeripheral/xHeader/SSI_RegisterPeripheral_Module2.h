/**
 *
 * @file SSI_RegisterPeripheral_Module2.h
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
#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE2_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE2_H_

#include <xDriver_MCU/SSI/Peripheral/Register/xHeader/SSI_RegisterAddress.h>
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterDefines/SSI_RegisterDefines.h>
#include <xDriver_MCU/SSI/Peripheral/Struct/xHeader/SSI_StructPeripheral.h>

/******************************************************************************************
************************************ SSI2 *********************************************
******************************************************************************************/

#define SSI2    ((SSI_TypeDef*) (SSI2_BASE))

/******************************************************************************************
************************************ 1 SSICR0 *********************************************
******************************************************************************************/
#define SSI2_SSICR0    ((SSICR0_TypeDef*) (SSI2_BASE + SSI_SSICR0_OFFSET ))
#define SSI2_SSICR0_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_SSICR0_OFFSET)))

/******************************************************************************************
************************************ 2 SSICR1 *********************************************
******************************************************************************************/
#define SSI2_SSICR1    ((SSICR1_TypeDef*) (SSI2_BASE + SSI_SSICR1_OFFSET ))
#define SSI2_SSICR1_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_SSICR1_OFFSET)))

/******************************************************************************************
************************************ 3 SSIDR *********************************************
******************************************************************************************/
#define SSI2_SSIDR    ((SSIDR_TypeDef*) (SSI2_BASE + SSI_SSIDR_OFFSET ))
#define SSI2_SSIDR_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_SSIDR_OFFSET)))

/******************************************************************************************
************************************ 4 SSISR *********************************************
******************************************************************************************/
#define SSI2_SSISR    ((SSISR_TypeDef*) (SSI2_BASE + SSI_SSISR_OFFSET ))
#define SSI2_SSISR_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSISR_OFFSET)))

/******************************************************************************************
************************************ 5 SSICPSR *********************************************
******************************************************************************************/
#define SSI2_SSICPSR    ((SSICPSR_TypeDef*) (SSI2_BASE + SSI_SSICPSR_OFFSET ))
#define SSI2_SSICPSR_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_SSICPSR_OFFSET)))

/******************************************************************************************
************************************ 6 SSIIM *********************************************
******************************************************************************************/
#define SSI2_SSIIM    ((SSIIM_TypeDef*) (SSI2_BASE + SSI_SSIIM_OFFSET ))
#define SSI2_SSIIM_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_SSIIM_OFFSET)))

/******************************************************************************************
************************************ 7 SSIRIS *********************************************
******************************************************************************************/
#define SSI2_SSIRIS    ((SSIRIS_TypeDef*) (SSI2_BASE + SSI_SSIRIS_OFFSET ))
#define SSI2_SSIRIS_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSIRIS_OFFSET)))

/******************************************************************************************
************************************ 8 SSIMIS *********************************************
******************************************************************************************/
#define SSI2_SSIMIS    ((SSIMIS_TypeDef*) (SSI2_BASE + SSI_SSIMIS_OFFSET ))
#define SSI2_SSIMIS_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSIMIS_OFFSET)))

/******************************************************************************************
************************************ 9 SSIICR *********************************************
******************************************************************************************/
#define SSI2_SSIICR    ((SSIICR_TypeDef*) (SSI2_BASE + SSI_SSIICR_OFFSET ))
#define SSI2_SSIICR_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_SSIICR_OFFSET)))

/******************************************************************************************
************************************ 10 SSIDMACTL *********************************************
******************************************************************************************/
#define SSI2_SSIDMACTL    ((SSIDMACTL_TypeDef*) (SSI2_BASE + SSI_SSIDMACTL_OFFSET ))
#define SSI2_SSIDMACTL_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_SSIDMACTL_OFFSET)))

/******************************************************************************************
************************************ 11 SSICC *********************************************
******************************************************************************************/
#define SSI2_SSICC    ((SSICC_TypeDef*) (SSI2_BASE + SSI_SSICC_OFFSET ))
#define SSI2_SSICC_R    (*((volatile uint32_t*) (SSI2_BASE + SSI_SSICC_OFFSET)))

/******************************************************************************************
 ************************************ 12 SSIPeriphID4 *********************************************
 ******************************************************************************************/
/* SSI2 PID4*/
#define SSI2_SSIPeriphID4    ((SSIPeriphID4_TypeDef*) (SSI2_BASE + SSI_SSIPeriphID4_OFFSET))
#define SSI2_SSIPeriphID4_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSIPeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 13 SSIPeriphID5 *********************************************
 ******************************************************************************************/
/* SSI2 PID5*/
#define SSI2_SSIPeriphID5    ((SSIPeriphID5_TypeDef*) (SSI2_BASE + SSI_SSIPeriphID5_OFFSET))
#define SSI2_SSIPeriphID5_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSIPeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 14 SSIPeriphID6 *********************************************
 ******************************************************************************************/
/* SSI2 PID6*/
#define SSI2_SSIPeriphID6    ((SSIPeriphID6_TypeDef*) (SSI2_BASE + SSI_SSIPeriphID6_OFFSET))
#define SSI2_SSIPeriphID6_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSIPeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 15 SSIPeriphID7 *********************************************
 ******************************************************************************************/
/* SSI2 PID7*/
#define SSI2_SSIPeriphID7    ((SSIPeriphID7_TypeDef*) (SSI2_BASE + SSI_SSIPeriphID7_OFFSET))
#define SSI2_SSIPeriphID7_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSIPeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 16 SSIPeriphID0 *********************************************
 ******************************************************************************************/
/* SSI2 PID0*/
#define SSI2_SSIPeriphID0    ((SSIPeriphID0_TypeDef*) (SSI2_BASE + SSI_SSIPeriphID0_OFFSET))
#define SSI2_SSIPeriphID0_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSIPeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 17 SSIPeriphID1 *********************************************
 ******************************************************************************************/
/* SSI2 PID1*/
#define SSI2_SSIPeriphID1    ((SSIPeriphID1_TypeDef*) (SSI2_BASE + SSI_SSIPeriphID1_OFFSET))
#define SSI2_SSIPeriphID1_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSIPeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 18 SSIPeriphID2 *********************************************
 ******************************************************************************************/
/* SSI2 PID2*/
#define SSI2_SSIPeriphID2    ((SSIPeriphID2_TypeDef*) (SSI2_BASE + SSI_SSIPeriphID2_OFFSET))
#define SSI2_SSIPeriphID2_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSIPeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 19 SSIPeriphID3 *********************************************
 ******************************************************************************************/
/* SSI2 PID3*/
#define SSI2_SSIPeriphID3    ((SSIPeriphID3_TypeDef*) (SSI2_BASE + SSI_SSIPeriphID3_OFFSET))
#define SSI2_SSIPeriphID3_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSIPeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 20 SSICellID0 *********************************************
 ******************************************************************************************/
/* SSI2 CID0*/
#define SSI2_SSICellID0    ((SSICellID0_TypeDef*) (SSI2_BASE + SSI_SSICellID0_OFFSET))
#define SSI2_SSICellID0_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSICellID0_OFFSET)))

/******************************************************************************************
 ************************************ 21 SSICellID1 *********************************************
 ******************************************************************************************/
/* SSI2 CID1*/
#define SSI2_SSICellID1    ((SSICellID1_TypeDef*) (SSI2_BASE + SSI_SSICellID1_OFFSET))
#define SSI2_SSICellID1_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSICellID1_OFFSET)))

/******************************************************************************************
 ************************************ 22 SSICellID2 *********************************************
 ******************************************************************************************/
/* SSI2 CID2*/
#define SSI2_SSICellID2    ((SSICellID2_TypeDef*) (SSI2_BASE + SSI_SSICellID2_OFFSET))
#define SSI2_SSICellID2_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSICellID2_OFFSET)))

/******************************************************************************************
 ************************************ 23 SSICellID3 *********************************************
 ******************************************************************************************/
/* SSI2 CID3*/
#define SSI2_SSICellID3    ((SSICellID3_TypeDef*) (SSI2_BASE + SSI_SSICellID3_OFFSET))
#define SSI2_SSICellID3_R    (*((volatile const uint32_t*) (SSI2_BASE + SSI_SSICellID3_OFFSET)))

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_SSI_REGISTERPERIPHERAL_MODULE2_H_ */
