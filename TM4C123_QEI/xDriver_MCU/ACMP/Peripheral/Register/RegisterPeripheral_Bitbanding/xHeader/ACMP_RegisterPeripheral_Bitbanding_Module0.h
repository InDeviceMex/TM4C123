/**
 *
 * @file ACMP_RegisterPeripheral_Bitbanding_Module0.h
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

#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_ACMP_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_ACMP_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_

#include <xDriver_MCU/ACMP/Peripheral/Register/xHeader/ACMP_RegisterAddress.h>
#include <xDriver_MCU/ACMP/Peripheral/Register/RegisterDefines/ACMP_RegisterDefines.h>
#include <xDriver_MCU/ACMP/Peripheral/Struct/xHeader/ACMP_StructPeripheral_Bitbanding.h>

/******************************************************************************************
************************************ ACMP *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING    (((ACMP_BITBANDING_TypeDef*) (ACMP_BITBANDING_BASE+(ACMP0_OFFSET*32U))))


/******************************************************************************************
************************************ 1 ACMIS *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING_ACMIS    (((BITBANDING_ACMIS_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACMIS_OFFSET)*32U))))

#define ACMP0_BITBANDING_ACMIS_IN0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACMIS_OFFSET)*32U)+(ACMP_ACMIS_R_IN0_BIT*4U))))
#define ACMP0_BITBANDING_ACMIS_IN1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACMIS_OFFSET)*32U)+(ACMP_ACMIS_R_IN1_BIT*4U))))

/******************************************************************************************
************************************ 2 ACRIS *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING_ACRIS    (((BITBANDING_ACRIS_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACRIS_OFFSET)*32U))))

#define ACMP0_BITBANDING_ACRIS_IN0    (*((volatile const uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACRIS_OFFSET)*32U)+(ACMP_ACRIS_R_IN0_BIT*4U))))
#define ACMP0_BITBANDING_ACRIS_IN1    (*((volatile const uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACRIS_OFFSET)*32U)+(ACMP_ACRIS_R_IN1_BIT*4U))))

/******************************************************************************************
************************************ 3 ACINTEN *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING_ACINTEN    (((BITBANDING_ACINTEN_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACINTEN_OFFSET)*32U))))

#define ACMP0_BITBANDING_ACINTEN_IN0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACINTEN_OFFSET)*32U)+(ACMP_ACINTEN_R_IN0_BIT*4U))))
#define ACMP0_BITBANDING_ACINTEN_IN1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACINTEN_OFFSET)*32U)+(ACMP_ACINTEN_R_IN1_BIT*4U))))

/******************************************************************************************
************************************ 4 ACREFCTL *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING_ACREFCTL    (((BITBANDING_ACREFCTL_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACREFCTL_OFFSET)*32U))))

#define ACMP0_BITBANDING_ACREFCTL_VREF_0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACREFCTL_OFFSET)*32U)+((ACMP_ACREFCTL_R_VREF_BIT+0)*4U))))
#define ACMP0_BITBANDING_ACREFCTL_VREF_1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACREFCTL_OFFSET)*32U)+((ACMP_ACREFCTL_R_VREF_BIT+1)*4U))))
#define ACMP0_BITBANDING_ACREFCTL_VREF_2    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACREFCTL_OFFSET)*32U)+((ACMP_ACREFCTL_R_VREF_BIT+2)*4U))))
#define ACMP0_BITBANDING_ACREFCTL_VREF_3    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACREFCTL_OFFSET)*32U)+((ACMP_ACREFCTL_R_VREF_BIT+3)*4U))))
#define ACMP0_BITBANDING_ACREFCTL_RNG    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACREFCTL_OFFSET)*32U)+(ACMP_ACREFCTL_R_RNG_BIT*4U))))
#define ACMP0_BITBANDING_ACREFCTL_EN    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACREFCTL_OFFSET)*32U)+(ACMP_ACREFCTL_R_EN_BIT*4U))))

/******************************************************************************************
************************************ 5 ACSTAT *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING_ACSTAT0    (((BITBANDING_ACSTAT_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACSTAT0_OFFSET)*32U))))
#define ACMP0_BITBANDING_ACSTAT1    (((BITBANDING_ACSTAT_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACSTAT1_OFFSET)*32U))))

#define ACMP0_BITBANDING_ACSTAT0_OVAL    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACSTAT0_OFFSET)*32U)+(ACMP_ACSTAT_R_OVAL_BIT*4U))))
#define ACMP0_BITBANDING_ACSTAT1_OVAL    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACSTAT1_OFFSET)*32U)+(ACMP_ACSTAT_R_OVAL_BIT*4U))))

/******************************************************************************************
************************************ 6 ACCTL *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING_ACCTL0    (((BITBANDING_ACCTL_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL0_OFFSET)*32U))))
#define ACMP0_BITBANDING_ACCTL1    (((BITBANDING_ACCTL_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL1_OFFSET)*32U))))

#define ACMP0_BITBANDING_ACCTL0_CINV    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL0_OFFSET)*32U)+(ACMP_ACCTL_R_CINV_BIT*4U))))
#define ACMP0_BITBANDING_ACCTL0_ISEN_0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL0_OFFSET)*32U)+((ACMP_ACCTL_R_ISEN_BIT+0U)*4U))))
#define ACMP0_BITBANDING_ACCTL0_ISEN_1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL0_OFFSET)*32U)+((ACMP_ACCTL_R_ISEN_BIT+1U)*4U))))
#define ACMP0_BITBANDING_ACCTL0_ISLVAL    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL0_OFFSET)*32U)+(ACMP_ACCTL_R_ISLVAL_BIT*4U))))
#define ACMP0_BITBANDING_ACCTL0_TSEN_0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL0_OFFSET)*32U)+((ACMP_ACCTL_R_TSEN_BIT+0U)*4U))))
#define ACMP0_BITBANDING_ACCTL0_TSEN_1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL0_OFFSET)*32U)+((ACMP_ACCTL_R_TSEN_BIT+1U)*4U))))
#define ACMP0_BITBANDING_ACCTL0_TSLVAL    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL0_OFFSET)*32U)+(ACMP_ACCTL_R_TSLVAL_BIT*4U))))
#define ACMP0_BITBANDING_ACCTL0_ASRCP_0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL0_OFFSET)*32U)+((ACMP_ACCTL_R_ASRCP_BIT+0U)*4U))))
#define ACMP0_BITBANDING_ACCTL0_ASRCP_1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL0_OFFSET)*32U)+((ACMP_ACCTL_R_ASRCP_BIT+1U)*4U))))
#define ACMP0_BITBANDING_ACCTL0_TOEN    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL0_OFFSET)*32U)+(ACMP_ACCTL_R_TOEN_BIT*4U))))

#define ACMP0_BITBANDING_ACCTL1_CINV    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL1_OFFSET)*32U)+(ACMP_ACCTL_R_CINV_BIT*4U))))
#define ACMP0_BITBANDING_ACCTL1_ISEN_0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL1_OFFSET)*32U)+((ACMP_ACCTL_R_ISEN_BIT+0U)*4U))))
#define ACMP0_BITBANDING_ACCTL1_ISEN_1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL1_OFFSET)*32U)+((ACMP_ACCTL_R_ISEN_BIT+1U)*4U))))
#define ACMP0_BITBANDING_ACCTL1_ISLVAL    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL1_OFFSET)*32U)+(ACMP_ACCTL_R_ISLVAL_BIT*4U))))
#define ACMP0_BITBANDING_ACCTL1_TSEN_0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL1_OFFSET)*32U)+((ACMP_ACCTL_R_TSEN_BIT+0U)*4U))))
#define ACMP0_BITBANDING_ACCTL1_TSEN_1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL1_OFFSET)*32U)+((ACMP_ACCTL_R_TSEN_BIT+1U)*4U))))
#define ACMP0_BITBANDING_ACCTL1_TSLVAL    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL1_OFFSET)*32U)+(ACMP_ACCTL_R_TSLVAL_BIT*4U))))
#define ACMP0_BITBANDING_ACCTL1_ASRCP_0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL1_OFFSET)*32U)+((ACMP_ACCTL_R_ASRCP_BIT+0U)*4U))))
#define ACMP0_BITBANDING_ACCTL1_ASRCP_1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL1_OFFSET)*32U)+((ACMP_ACCTL_R_ASRCP_BIT+1U)*4U))))
#define ACMP0_BITBANDING_ACCTL1_TOEN    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACCTL1_OFFSET)*32U)+(ACMP_ACCTL_R_TOEN_BIT*4U))))

/******************************************************************************************
************************************ 3 ACMPPP *********************************************
******************************************************************************************/
#define ACMP0_BITBANDING_ACMPPP    (((BITBANDING_ACMPPP_TypeDef*) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACMPPP_OFFSET)*32U))))

#define ACMP0_BITBANDING_ACMPPP_CMP0    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACMPPP_OFFSET)*32U)+(ACMP_ACMPPP_R_CMP0_BIT*4U))))
#define ACMP0_BITBANDING_ACMPPP_CMP1    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACMPPP_OFFSET)*32U)+(ACMP_ACMPPP_R_CMP1_BIT*4U))))
#define ACMP0_BITBANDING_ACMPPP_C0O    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACMPPP_OFFSET)*32U)+(ACMP_ACMPPP_R_C0O_BIT*4U))))
#define ACMP0_BITBANDING_ACMPPP_C1O    (*((volatile uint32_t *) (ACMP_BITBANDING_BASE+((ACMP0_OFFSET+ACMP_ACMPPP_OFFSET)*32U)+(ACMP_ACMPPP_R_C1O_BIT*4U))))

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_XHEADER_ACMP_REGISTERPERIPHERAL_BITBANDING_MODULE0_H_ */
