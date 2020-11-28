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

#define ACMP              (((ACMP_TypeDef*)(ACMP_BASE)))

/******************************************************************************************
************************************ 1 ACMPACTSS *********************************************
******************************************************************************************/
#define ACMP_ACMIS            (((ACMIS_TypeDef*)(ACMP_BASE + ACMP_ACMIS_OFFSET )))
#define ACMP_ACMIS_R          (*((volatile uint32_t*)(ACMP_BASE +ACMP_ACMIS_OFFSET)))





#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_XHEADER_ACMP_REGISTERPERIPHERAL_H_ */
