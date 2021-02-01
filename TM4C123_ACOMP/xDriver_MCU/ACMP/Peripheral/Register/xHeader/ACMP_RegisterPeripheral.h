/**
 *
 * @file ACMP_RegisterPeripheral.h
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
 * @verbatim 28 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_XHEADER_ACMP_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_XHEADER_ACMP_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/ACMP/Peripheral/Register/xHeader/ACMP_RegisterAddress.h>
#include <xDriver_MCU/ACMP/Peripheral/Register/RegisterDefines/ACMP_RegisterDefines.h>
#include <xDriver_MCU/ACMP/Peripheral/Struct/xHeader/ACMP_StructPeripheral.h>

/******************************************************************************************
************************************ ACMP *********************************************
******************************************************************************************/

#define ACMP    (((ACMP_TypeDef*) (ACMP_BASE)))

/******************************************************************************************
************************************ 1 ACMIS *********************************************
******************************************************************************************/
#define ACMP_ACMIS    (((ACMIS_TypeDef*) (ACMP_BASE + ACMP_ACMIS_OFFSET )))
#define ACMP_ACMIS_R    (*((volatile uint32_t*) (ACMP_BASE +ACMP_ACMIS_OFFSET)))

/******************************************************************************************
************************************ 2 ACRIS *********************************************
******************************************************************************************/
#define ACMP_ACRIS    (((ACRIS_TypeDef*) (ACMP_BASE + ACMP_ACRIS_OFFSET )))
#define ACMP_ACRIS_R    (*((volatile const uint32_t*) (ACMP_BASE +ACMP_ACRIS_OFFSET)))

/******************************************************************************************
************************************ 3 ACINTEN *********************************************
******************************************************************************************/
#define ACMP_ACINTEN    (((ACINTEN_TypeDef*) (ACMP_BASE + ACMP_ACINTEN_OFFSET )))
#define ACMP_ACINTEN_R    (*((volatile uint32_t*) (ACMP_BASE +ACMP_ACINTEN_OFFSET)))

/******************************************************************************************
************************************ 4 ACREFCTL *********************************************
******************************************************************************************/
#define ACMP_ACREFCTL    (((ACREFCTL_TypeDef*) (ACMP_BASE + ACMP_ACREFCTL_OFFSET )))
#define ACMP_ACREFCTL_R    (*((volatile uint32_t*) (ACMP_BASE +ACMP_ACREFCTL_OFFSET)))

/******************************************************************************************
************************************ 5 ACSTAT *********************************************
******************************************************************************************/
#define ACMP_ACSTAT0    (((ACSTAT_TypeDef*) (ACMP_BASE + ACMP_ACSTAT0_OFFSET )))
#define ACMP_ACSTAT0_R    (*((volatile uint32_t*) (ACMP_BASE +ACMP_ACSTAT0_OFFSET)))
#define ACMP_ACSTAT1    (((ACSTAT_TypeDef*) (ACMP_BASE + ACMP_ACSTAT1_OFFSET )))
#define ACMP_ACSTAT1_R    (*((volatile uint32_t*) (ACMP_BASE +ACMP_ACSTAT1_OFFSET)))

/******************************************************************************************
************************************ 6 ACCTL *********************************************
******************************************************************************************/
#define ACMP_ACCTL0    (((ACCTL_TypeDef*) (ACMP_BASE + ACMP_ACCTL0_OFFSET )))
#define ACMP_ACCTL0_R    (*((volatile uint32_t*) (ACMP_BASE +ACMP_ACCTL0_OFFSET)))
#define ACMP_ACCTL1    (((ACCTL_TypeDef*) (ACMP_BASE + ACMP_ACCTL1_OFFSET )))
#define ACMP_ACCTL1_R    (*((volatile uint32_t*) (ACMP_BASE +ACMP_ACCTL1_OFFSET)))

/******************************************************************************************
************************************ 7 ACMPPP *********************************************
******************************************************************************************/
#define ACMP_ACMPPP    (((ACMPPP_TypeDef*) (ACMP_BASE + ACMP_ACMPPP_OFFSET )))
#define ACMP_ACMPPP_R    (*((volatile uint32_t*) (ACMP_BASE +ACMP_ACMPPP_OFFSET)))




#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_XHEADER_ACMP_REGISTERPERIPHERAL_H_ */
