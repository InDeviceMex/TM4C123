/**
 *
 * @file SYSEXC_RegisterPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERPERIPHERAL_H_

#include <xUtils/Standard/Standard.h>

#define SYSEXC    ((SYSEXC_TypeDef*) (SYSEXC_BASE))

/******************************************************************************************
************************************ 1 SYSEXCRIS *********************************************
******************************************************************************************/
#define SYSEXC_SYSEXCRIS    ((SYSEXCRIS_TypeDef*) (SYSEXC_BASE + SYSEXC_SYSEXCRIS_OFFSET))
#define SYSEXC_SYSEXCRIS_R    (*((volatile const uint32_t*) (SYSEXC_BASE + SYSEXC_SYSEXCRIS_OFFSET)))

/******************************************************************************************
************************************ 2 SYSEXCIM *********************************************
******************************************************************************************/
#define SYSEXC_SYSEXCIM    ((SYSEXCIM_TypeDef*) (SYSEXC_BASE + SYSEXC_SYSEXCIM_OFFSET))
#define SYSEXC_SYSEXCIM_R    (*((volatile uint32_t*) (SYSEXC_BASE + SYSEXC_SYSEXCIM_OFFSET)))

/******************************************************************************************
************************************ 3 SYSEXCMIS *********************************************
******************************************************************************************/
#define SYSEXC_SYSEXCMIS    ((SYSEXCMIS_TypeDef*) (SYSEXC_BASE + SYSEXC_SYSEXCMIS_OFFSET))
#define SYSEXC_SYSEXCMIS_R    (*((volatile const uint32_t*) (SYSEXC_BASE + SYSEXC_SYSEXCMIS_OFFSET)))

/******************************************************************************************
************************************ 4 SYSEXCIC *********************************************
******************************************************************************************/
#define SYSEXC_SYSEXCIC    ((SYSEXCIC_TypeDef*) (SYSEXC_BASE + SYSEXC_SYSEXCIC_OFFSET))
#define SYSEXC_SYSEXCIC_R    (*((volatile uint32_t*) (SYSEXC_BASE + SYSEXC_SYSEXCIC_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERPERIPHERAL_H_ */
