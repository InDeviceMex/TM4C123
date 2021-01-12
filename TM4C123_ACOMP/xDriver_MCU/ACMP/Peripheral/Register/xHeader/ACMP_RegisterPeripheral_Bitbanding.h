/**
 *
 * @file ACMP_RegisterPeripheral_Bitbanding.h
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
 * @verbatim 29 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_XHEADER_ACMP_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_XHEADER_ACMP_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/ACMP/Peripheral/Register/xHeader/ACMP_RegisterAddress.h>
#include <xDriver_MCU/ACMP/Peripheral/Register/RegisterDefines/ACMP_RegisterDefines.h>
#include <xDriver_MCU/ACMP/Peripheral/Struct/xHeader/ACMP_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ ACMP *********************************************
******************************************************************************************/
#define ACMP_BITBANDING        (((ACMP_BITBANDING_TypeDef*)(ACMP_BITBANDING_BASE+(ACMP_OFFSET*32u))))


/******************************************************************************************
************************************ 1 ACMIS *********************************************
******************************************************************************************/
#define ACMP_BITBANDING_ACMIS       (((BITBANDING_ACMIS_TypeDef*)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACMIS_OFFSET)*32u))))

#define ACMP_BITBANDING_ACMIS_IN0        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACMIS_OFFSET)*32u)+(ACMP_ACMIS_R_IN0_BIT*4u))))
#define ACMP_BITBANDING_ACMIS_IN1        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACMIS_OFFSET)*32u)+(ACMP_ACMIS_R_IN1_BIT*4u))))

/******************************************************************************************
************************************ 2 ACRIS *********************************************
******************************************************************************************/
#define ACMP_BITBANDING_ACRIS       (((BITBANDING_ACRIS_TypeDef*)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACRIS_OFFSET)*32u))))

#define ACMP_BITBANDING_ACRIS_IN0        (*((volatile const uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACRIS_OFFSET)*32u)+(ACMP_ACRIS_R_IN0_BIT*4u))))
#define ACMP_BITBANDING_ACRIS_IN1        (*((volatile const uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACRIS_OFFSET)*32u)+(ACMP_ACRIS_R_IN1_BIT*4u))))

/******************************************************************************************
************************************ 3 ACINTEN *********************************************
******************************************************************************************/
#define ACMP_BITBANDING_ACINTEN       (((BITBANDING_ACINTEN_TypeDef*)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACINTEN_OFFSET)*32u))))

#define ACMP_BITBANDING_ACINTEN_IN0        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACINTEN_OFFSET)*32u)+(ACMP_ACINTEN_R_IN0_BIT*4u))))
#define ACMP_BITBANDING_ACINTEN_IN1        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACINTEN_OFFSET)*32u)+(ACMP_ACINTEN_R_IN1_BIT*4u))))

/******************************************************************************************
************************************ 4 ACREFCTL *********************************************
******************************************************************************************/
#define ACMP_BITBANDING_ACREFCTL       (((BITBANDING_ACREFCTL_TypeDef*)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACREFCTL_OFFSET)*32u))))

#define ACMP_BITBANDING_ACREFCTL_VREF_0        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACREFCTL_OFFSET)*32u)+((ACMP_ACREFCTL_R_VREF_BIT+0)*4u))))
#define ACMP_BITBANDING_ACREFCTL_VREF_1        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACREFCTL_OFFSET)*32u)+((ACMP_ACREFCTL_R_VREF_BIT+1)*4u))))
#define ACMP_BITBANDING_ACREFCTL_VREF_2        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACREFCTL_OFFSET)*32u)+((ACMP_ACREFCTL_R_VREF_BIT+2)*4u))))
#define ACMP_BITBANDING_ACREFCTL_VREF_3        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACREFCTL_OFFSET)*32u)+((ACMP_ACREFCTL_R_VREF_BIT+3)*4u))))
#define ACMP_BITBANDING_ACREFCTL_RNG            (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACREFCTL_OFFSET)*32u)+(ACMP_ACREFCTL_R_RNG_BIT*4u))))
#define ACMP_BITBANDING_ACREFCTL_EN            (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACREFCTL_OFFSET)*32u)+(ACMP_ACREFCTL_R_EN_BIT*4u))))

/******************************************************************************************
************************************ 5 ACSTAT *********************************************
******************************************************************************************/
#define ACMP_BITBANDING_ACSTAT0       (((BITBANDING_ACSTAT_TypeDef*)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACSTAT0_OFFSET)*32u))))
#define ACMP_BITBANDING_ACSTAT1       (((BITBANDING_ACSTAT_TypeDef*)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACSTAT1_OFFSET)*32u))))

#define ACMP_BITBANDING_ACSTAT0_OVAL        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACSTAT0_OFFSET)*32u)+(ACMP_ACSTAT_R_OVAL_BIT*4u))))
#define ACMP_BITBANDING_ACSTAT1_OVAL        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACSTAT1_OFFSET)*32u)+(ACMP_ACSTAT_R_OVAL_BIT*4u))))

/******************************************************************************************
************************************ 6 ACCTL *********************************************
******************************************************************************************/
#define ACMP_BITBANDING_ACCTL0       (((BITBANDING_ACCTL_TypeDef*)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL0_OFFSET)*32u))))
#define ACMP_BITBANDING_ACCTL1       (((BITBANDING_ACCTL_TypeDef*)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL1_OFFSET)*32u))))

#define ACMP_BITBANDING_ACCTL0_CINV        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL0_OFFSET)*32u)+(ACMP_ACCTL_R_CINV_BIT*4u))))
#define ACMP_BITBANDING_ACCTL0_ISEN_0        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL0_OFFSET)*32u)+((ACMP_ACCTL_R_ISEN_BIT+0u)*4u))))
#define ACMP_BITBANDING_ACCTL0_ISEN_1        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL0_OFFSET)*32u)+((ACMP_ACCTL_R_ISEN_BIT+1u)*4u))))
#define ACMP_BITBANDING_ACCTL0_ISLVAL        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL0_OFFSET)*32u)+(ACMP_ACCTL_R_ISLVAL_BIT*4u))))
#define ACMP_BITBANDING_ACCTL0_TSEN_0        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL0_OFFSET)*32u)+((ACMP_ACCTL_R_TSEN_BIT+0u)*4u))))
#define ACMP_BITBANDING_ACCTL0_TSEN_1        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL0_OFFSET)*32u)+((ACMP_ACCTL_R_TSEN_BIT+1u)*4u))))
#define ACMP_BITBANDING_ACCTL0_TSLVAL        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL0_OFFSET)*32u)+(ACMP_ACCTL_R_TSLVAL_BIT*4u))))
#define ACMP_BITBANDING_ACCTL0_ASRCP_0        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL0_OFFSET)*32u)+((ACMP_ACCTL_R_ASRCP_BIT+0u)*4u))))
#define ACMP_BITBANDING_ACCTL0_ASRCP_1        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL0_OFFSET)*32u)+((ACMP_ACCTL_R_ASRCP_BIT+1u)*4u))))
#define ACMP_BITBANDING_ACCTL0_TOEN        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL0_OFFSET)*32u)+(ACMP_ACCTL_R_TOEN_BIT*4u))))

#define ACMP_BITBANDING_ACCTL1_CINV        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL1_OFFSET)*32u)+(ACMP_ACCTL_R_CINV_BIT*4u))))
#define ACMP_BITBANDING_ACCTL1_ISEN_0        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL1_OFFSET)*32u)+((ACMP_ACCTL_R_ISEN_BIT+0u)*4u))))
#define ACMP_BITBANDING_ACCTL1_ISEN_1        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL1_OFFSET)*32u)+((ACMP_ACCTL_R_ISEN_BIT+1u)*4u))))
#define ACMP_BITBANDING_ACCTL1_ISLVAL        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL1_OFFSET)*32u)+(ACMP_ACCTL_R_ISLVAL_BIT*4u))))
#define ACMP_BITBANDING_ACCTL1_TSEN_0        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL1_OFFSET)*32u)+((ACMP_ACCTL_R_TSEN_BIT+0u)*4u))))
#define ACMP_BITBANDING_ACCTL1_TSEN_1        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL1_OFFSET)*32u)+((ACMP_ACCTL_R_TSEN_BIT+1u)*4u))))
#define ACMP_BITBANDING_ACCTL1_TSLVAL        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL1_OFFSET)*32u)+(ACMP_ACCTL_R_TSLVAL_BIT*4u))))
#define ACMP_BITBANDING_ACCTL1_ASRCP_0        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL1_OFFSET)*32u)+((ACMP_ACCTL_R_ASRCP_BIT+0u)*4u))))
#define ACMP_BITBANDING_ACCTL1_ASRCP_1        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL1_OFFSET)*32u)+((ACMP_ACCTL_R_ASRCP_BIT+1u)*4u))))
#define ACMP_BITBANDING_ACCTL1_TOEN        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACCTL1_OFFSET)*32u)+(ACMP_ACCTL_R_TOEN_BIT*4u))))

/******************************************************************************************
************************************ 3 ACMPPP *********************************************
******************************************************************************************/
#define ACMP_BITBANDING_ACMPPP       (((BITBANDING_ACMPPP_TypeDef*)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACMPPP_OFFSET)*32u))))

#define ACMP_BITBANDING_ACMPPP_CMP0        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACMPPP_OFFSET)*32u)+(ACMP_ACMPPP_R_CMP0_BIT*4u))))
#define ACMP_BITBANDING_ACMPPP_CMP1        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACMPPP_OFFSET)*32u)+(ACMP_ACMPPP_R_CMP1_BIT*4u))))
#define ACMP_BITBANDING_ACMPPP_C0O        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACMPPP_OFFSET)*32u)+(ACMP_ACMPPP_R_C0O_BIT*4u))))
#define ACMP_BITBANDING_ACMPPP_C1O        (*((volatile uint32_t *)(ACMP_BITBANDING_BASE+((ACMP_OFFSET+ACMP_ACMPPP_OFFSET)*32u)+(ACMP_ACMPPP_R_C1O_BIT*4u))))


#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_XHEADER_ACMP_REGISTERPERIPHERAL_BITBANDING_H_ */