/**
 *
 * @file ACMP_RegisterPeripheral_Module0.h
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
 * @verbatim Mar 31, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 31, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ACMP_REGISTERPERIPHERAL_MODULE0_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ACMP_REGISTERPERIPHERAL_MODULE0_H_

#include <xDriver_MCU/ACMP/Peripheral/Register/xHeader/ACMP_RegisterAddress.h>
#include <xDriver_MCU/ACMP/Peripheral/Register/RegisterDefines/ACMP_RegisterDefines.h>
#include <xDriver_MCU/ACMP/Peripheral/Struct/xHeader/ACMP_StructPeripheral.h>

/******************************************************************************************
************************************ ACMP *********************************************
******************************************************************************************/

#define ACMP0    (((ACMP_TypeDef*) (ACMP0_BASE)))

/******************************************************************************************
************************************ 1 ACMIS *********************************************
******************************************************************************************/
#define ACMP0_ACMIS    (((ACMIS_TypeDef*) (ACMP0_BASE + ACMP_ACMIS_OFFSET )))
#define ACMP0_ACMIS_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_ACMIS_OFFSET)))

/******************************************************************************************
************************************ 2 ACRIS *********************************************
******************************************************************************************/
#define ACMP0_ACRIS    (((ACRIS_TypeDef*) (ACMP0_BASE + ACMP_ACRIS_OFFSET )))
#define ACMP0_ACRIS_R    (*((volatile const uint32_t*) (ACMP0_BASE +ACMP_ACRIS_OFFSET)))

/******************************************************************************************
************************************ 3 ACINTEN *********************************************
******************************************************************************************/
#define ACMP0_ACINTEN    (((ACINTEN_TypeDef*) (ACMP0_BASE + ACMP_ACINTEN_OFFSET )))
#define ACMP0_ACINTEN_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_ACINTEN_OFFSET)))

/******************************************************************************************
************************************ 4 ACREFCTL *********************************************
******************************************************************************************/
#define ACMP0_ACREFCTL    (((ACREFCTL_TypeDef*) (ACMP0_BASE + ACMP_ACREFCTL_OFFSET )))
#define ACMP0_ACREFCTL_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_ACREFCTL_OFFSET)))

/******************************************************************************************
************************************ 5 ACSTAT *********************************************
******************************************************************************************/
#define ACMP0_ACSTAT0    (((ACSTAT_TypeDef*) (ACMP0_BASE + ACMP_ACSTAT0_OFFSET )))
#define ACMP0_ACSTAT0_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_ACSTAT0_OFFSET)))
#define ACMP0_ACSTAT1    (((ACSTAT_TypeDef*) (ACMP0_BASE + ACMP_ACSTAT1_OFFSET )))
#define ACMP0_ACSTAT1_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_ACSTAT1_OFFSET)))

/******************************************************************************************
************************************ 6 ACCTL *********************************************
******************************************************************************************/
#define ACMP0_ACCTL0    (((ACCTL_TypeDef*) (ACMP0_BASE + ACMP_ACCTL0_OFFSET )))
#define ACMP0_ACCTL0_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_ACCTL0_OFFSET)))
#define ACMP0_ACCTL1    (((ACCTL_TypeDef*) (ACMP0_BASE + ACMP_ACCTL1_OFFSET )))
#define ACMP0_ACCTL1_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_ACCTL1_OFFSET)))

/******************************************************************************************
************************************ 7 ACMPPP *********************************************
******************************************************************************************/
#define ACMP0_ACMPPP    (((ACMPPP_TypeDef*) (ACMP0_BASE + ACMP_ACMPPP_OFFSET )))
#define ACMP0_ACMPPP_R    (*((volatile uint32_t*) (ACMP0_BASE +ACMP_ACMPPP_OFFSET)))


#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_ACMP_REGISTERPERIPHERAL_MODULE0_H_ */
