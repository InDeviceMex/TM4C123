/**
 *
 * @file ADC_RegisterDefines_ADCDCCTL.h
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
 * @verbatim 15 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCDCCTL_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCDCCTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 22 ADCDCCTL *********************************************
******************************************************************************************/

/*--------*/
#define ADC_ADCDCCTL_R_CIM_MASK    ((uint32_t) 0x00000003UL)
#define ADC_ADCDCCTL_R_CIM_BIT    ((uint32_t) 0UL)
#define ADC_ADCDCCTL_R_CIM_ALWAYS    ((uint32_t) 0x00000000UL)
#define ADC_ADCDCCTL_R_CIM_ONCE    ((uint32_t) 0x00000001UL)
#define ADC_ADCDCCTL_R_CIM_HYSALWAYS    ((uint32_t) 0x00000002UL)
#define ADC_ADCDCCTL_R_CIM_HYSONCE    ((uint32_t) 0x00000003UL)

#define ADC_ADCDCCTL_CIM_MASK    ((uint32_t) 0x00000003UL)
#define ADC_ADCDCCTL_CIM_ALWAYS    ((uint32_t) 0x00000000UL)
#define ADC_ADCDCCTL_CIM_ONCE    ((uint32_t) 0x00000001UL)
#define ADC_ADCDCCTL_CIM_HYSALWAYS    ((uint32_t) 0x00000002UL)
#define ADC_ADCDCCTL_CIM_HYSONCE    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define ADC_ADCDCCTL_R_CIC_MASK    ((uint32_t) 0x0000000CUL)
#define ADC_ADCDCCTL_R_CIC_BIT    ((uint32_t) 2UL)
#define ADC_ADCDCCTL_R_CIC_LOW    ((uint32_t) 0x00000000UL)
#define ADC_ADCDCCTL_R_CIC_MID    ((uint32_t) 0x00000004UL)
#define ADC_ADCDCCTL_R_CIC_HIGH    ((uint32_t) 0x0000000CUL)

#define ADC_ADCDCCTL_CIC_MASK    ((uint32_t) 0x00000003UL)
#define ADC_ADCDCCTL_CIC_LOW    ((uint32_t) 0x00000000UL)
#define ADC_ADCDCCTL_CIC_MID    ((uint32_t) 0x00000001UL)
#define ADC_ADCDCCTL_CIC_HIGH    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define ADC_ADCDCCTL_R_CIE_MASK    ((uint32_t) 0x00000010UL)
#define ADC_ADCDCCTL_R_CIE_BIT    ((uint32_t) 4UL)
#define ADC_ADCDCCTL_R_CIE_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ADCDCCTL_R_CIE_EN    ((uint32_t) 0x00000010UL)

#define ADC_ADCDCCTL_CIE_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ADCDCCTL_CIE_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ADCDCCTL_CIE_EN    ((uint32_t) 0x00000001UL)
/*--------*/


/*--------*/
#define ADC_ADCDCCTL_R_CTM_MASK    ((uint32_t) 0x00000300UL)
#define ADC_ADCDCCTL_R_CTM_BIT    ((uint32_t) 8UL)
#define ADC_ADCDCCTL_R_CTM_ALWAYS    ((uint32_t) 0x00000000UL)
#define ADC_ADCDCCTL_R_CTM_ONCE    ((uint32_t) 0x00000100UL)
#define ADC_ADCDCCTL_R_CTM_HYSALWAYS    ((uint32_t) 0x00000200UL)
#define ADC_ADCDCCTL_R_CTM_HYSONCE    ((uint32_t) 0x00000300UL)

#define ADC_ADCDCCTL_CTM_MASK    ((uint32_t) 0x00000003UL)
#define ADC_ADCDCCTL_CTM_ALWAYS    ((uint32_t) 0x00000000UL)
#define ADC_ADCDCCTL_CTM_ONCE    ((uint32_t) 0x00000001UL)
#define ADC_ADCDCCTL_CTM_HYSALWAYS    ((uint32_t) 0x00000002UL)
#define ADC_ADCDCCTL_CTM_HYSONCE    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define ADC_ADCDCCTL_R_CTC_MASK    ((uint32_t) 0x00000C00UL)
#define ADC_ADCDCCTL_R_CTC_BIT    ((uint32_t) 10UL)
#define ADC_ADCDCCTL_R_CTC_LOW    ((uint32_t) 0x00000000UL)
#define ADC_ADCDCCTL_R_CTC_MID    ((uint32_t) 0x00000400UL)
#define ADC_ADCDCCTL_R_CTC_HIGH    ((uint32_t) 0x00000C00UL)

#define ADC_ADCDCCTL_CTC_MASK    ((uint32_t) 0x00000003UL)
#define ADC_ADCDCCTL_CTC_LOW    ((uint32_t) 0x00000000UL)
#define ADC_ADCDCCTL_CTC_MID    ((uint32_t) 0x00000001UL)
#define ADC_ADCDCCTL_CTC_HIGH    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define ADC_ADCDCCTL_R_CTE_MASK    ((uint32_t) 0x00001000UL)
#define ADC_ADCDCCTL_R_CTE_BIT    ((uint32_t) 12UL)
#define ADC_ADCDCCTL_R_CTE_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ADCDCCTL_R_CTE_EN    ((uint32_t) 0x00001000UL)

#define ADC_ADCDCCTL_CTE_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ADCDCCTL_CTE_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ADCDCCTL_CTE_EN    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCDCCTL_H_ */
