/**
 *
 * @file GPIO_RegisterPeripheral_APB_Bitbanding_ModuleF.h
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
 * @verbatim 29 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description * 29 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_APB_BITBANDING_GPIO_REGISTERPERIPHERAL_APB_BITBANDING_MODULEF_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_APB_BITBANDING_GPIO_REGISTERPERIPHERAL_APB_BITBANDING_MODULEF_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterDefines/GPIO_RegisterDefines.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral_Bitbanding.h>

#define GPIOF_BITBANDING    ((GPIO_BITBANDING_TypeDef*) (GPIO_BITBANDING_BASE + (GPIOF_OFFSET * 32UL)))
#define GPIOF_AUX_BITBANDING    ((GPIO_AUX_BITBANDING_TypeDef*) (GPIO_BITBANDING_BASE + (GPIOF_OFFSET * 32UL)))

/******************************************************************************************
 *********************************** * 1 DATA *********************************************
 ******************************************************************************************/

/* GPIOF APB DATA*/
#define GPIOF_BITBANDING_DATA_MASK    ((BITBANDING_GPIODATA_MASK_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA_MASK_OFFSET) * 32UL)))
#define GPIOF_BITBANDING_DATA    ((BITBANDING_GPIODATA_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA_OFFSET) * 32UL)))

/* GPIOF APB DATA BITBANDING*/
#define GPIOF_BITBANDING_DATA0_MASK_DATA0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA0_MASK_OFFSET) * 32UL) + (GPIO_DATA_R_DATA0_BIT * 4UL))))
#define GPIOF_BITBANDING_DATA1_MASK_DATA1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA1_MASK_OFFSET) * 32UL) + (GPIO_DATA_R_DATA1_BIT * 4UL))))
#define GPIOF_BITBANDING_DATA2_MASK_DATA2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA2_MASK_OFFSET) * 32UL) + (GPIO_DATA_R_DATA2_BIT * 4UL))))
#define GPIOF_BITBANDING_DATA3_MASK_DATA3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA3_MASK_OFFSET) * 32UL) + (GPIO_DATA_R_DATA3_BIT * 4UL))))
#define GPIOF_BITBANDING_DATA4_MASK_DATA4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA4_MASK_OFFSET) * 32UL) + (GPIO_DATA_R_DATA4_BIT * 4UL))))
#define GPIOF_BITBANDING_DATA5_MASK_DATA5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA5_MASK_OFFSET) * 32UL) + (GPIO_DATA_R_DATA5_BIT * 4UL))))
#define GPIOF_BITBANDING_DATA6_MASK_DATA6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA6_MASK_OFFSET) * 32UL) + (GPIO_DATA_R_DATA6_BIT * 4UL))))
#define GPIOF_BITBANDING_DATA7_MASK_DATA7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA7_MASK_OFFSET) * 32UL) + (GPIO_DATA_R_DATA7_BIT * 4UL))))

#define GPIOF_BITBANDING_DATA_DATA0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA_OFFSET) * 32UL) + (GPIO_DATA_R_DATA0_BIT * 4UL))))
#define GPIOF_BITBANDING_DATA_DATA1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA_OFFSET) * 32UL) + (GPIO_DATA_R_DATA1_BIT * 4UL))))
#define GPIOF_BITBANDING_DATA_DATA2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA_OFFSET) * 32UL) + (GPIO_DATA_R_DATA2_BIT * 4UL))))
#define GPIOF_BITBANDING_DATA_DATA3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA_OFFSET) * 32UL) + (GPIO_DATA_R_DATA3_BIT * 4UL))))
#define GPIOF_BITBANDING_DATA_DATA4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA_OFFSET) * 32UL) + (GPIO_DATA_R_DATA4_BIT * 4UL))))
#define GPIOF_BITBANDING_DATA_DATA5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA_OFFSET) * 32UL) + (GPIO_DATA_R_DATA5_BIT * 4UL))))
#define GPIOF_BITBANDING_DATA_DATA6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA_OFFSET) * 32UL) + (GPIO_DATA_R_DATA6_BIT * 4UL))))
#define GPIOF_BITBANDING_DATA_DATA7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DATA_OFFSET) * 32UL) + (GPIO_DATA_R_DATA7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOF APB DIR*/
#define GPIOF_BITBANDING_DIR    ((BITBANDING_GPIODIR_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DIR_OFFSET) * 32UL)))

/* GPIOF APB DIR BITBANDING*/
#define GPIOF_BITBANDING_DIR_DIR0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DIR_OFFSET) * 32UL) + (GPIO_DIR_R_DIR0_BIT * 4UL))))
#define GPIOF_BITBANDING_DIR_DIR1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DIR_OFFSET) * 32UL) + (GPIO_DIR_R_DIR1_BIT * 4UL))))
#define GPIOF_BITBANDING_DIR_DIR2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DIR_OFFSET) * 32UL) + (GPIO_DIR_R_DIR2_BIT * 4UL))))
#define GPIOF_BITBANDING_DIR_DIR3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DIR_OFFSET) * 32UL) + (GPIO_DIR_R_DIR3_BIT * 4UL))))
#define GPIOF_BITBANDING_DIR_DIR4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DIR_OFFSET) * 32UL) + (GPIO_DIR_R_DIR4_BIT * 4UL))))
#define GPIOF_BITBANDING_DIR_DIR5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DIR_OFFSET) * 32UL) + (GPIO_DIR_R_DIR5_BIT * 4UL))))
#define GPIOF_BITBANDING_DIR_DIR6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DIR_OFFSET) * 32UL) + (GPIO_DIR_R_DIR6_BIT * 4UL))))
#define GPIOF_BITBANDING_DIR_DIR7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DIR_OFFSET) * 32UL) + (GPIO_DIR_R_DIR7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 3 IS *********************************************
 ******************************************************************************************/
/* GPIOF APB IS*/
#define GPIOF_BITBANDING_IS    ((BITBANDING_GPIOIS_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IS_OFFSET) * 32UL)))

/* GPIOF APB IS BITBANDING*/
#define GPIOF_BITBANDING_IS_IS0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IS_OFFSET) * 32UL) + (GPIO_IS_R_IS0_BIT * 4UL))))
#define GPIOF_BITBANDING_IS_IS1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IS_OFFSET) * 32UL) + (GPIO_IS_R_IS1_BIT * 4UL))))
#define GPIOF_BITBANDING_IS_IS2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IS_OFFSET) * 32UL) + (GPIO_IS_R_IS2_BIT * 4UL))))
#define GPIOF_BITBANDING_IS_IS3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IS_OFFSET) * 32UL) + (GPIO_IS_R_IS3_BIT * 4UL))))
#define GPIOF_BITBANDING_IS_IS4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IS_OFFSET) * 32UL) + (GPIO_IS_R_IS4_BIT * 4UL))))
#define GPIOF_BITBANDING_IS_IS5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IS_OFFSET) * 32UL) + (GPIO_IS_R_IS5_BIT * 4UL))))
#define GPIOF_BITBANDING_IS_IS6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IS_OFFSET) * 32UL) + (GPIO_IS_R_IS6_BIT * 4UL))))
#define GPIOF_BITBANDING_IS_IS7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IS_OFFSET) * 32UL) + (GPIO_IS_R_IS7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOF APB IBE*/
#define GPIOF_BITBANDING_IBE    ((BITBANDING_GPIOIBE_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IBE_OFFSET) * 32UL)))

/* GPIOF APB IBE BITBANDING*/
#define GPIOF_BITBANDING_IBE_IBE0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IBE_OFFSET) * 32UL) + (GPIO_IBE_R_IBE0_BIT * 4UL))))
#define GPIOF_BITBANDING_IBE_IBE1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IBE_OFFSET) * 32UL) + (GPIO_IBE_R_IBE1_BIT * 4UL))))
#define GPIOF_BITBANDING_IBE_IBE2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IBE_OFFSET) * 32UL) + (GPIO_IBE_R_IBE2_BIT * 4UL))))
#define GPIOF_BITBANDING_IBE_IBE3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IBE_OFFSET) * 32UL) + (GPIO_IBE_R_IBE3_BIT * 4UL))))
#define GPIOF_BITBANDING_IBE_IBE4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IBE_OFFSET) * 32UL) + (GPIO_IBE_R_IBE4_BIT * 4UL))))
#define GPIOF_BITBANDING_IBE_IBE5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IBE_OFFSET) * 32UL) + (GPIO_IBE_R_IBE5_BIT * 4UL))))
#define GPIOF_BITBANDING_IBE_IBE6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IBE_OFFSET) * 32UL) + (GPIO_IBE_R_IBE6_BIT * 4UL))))
#define GPIOF_BITBANDING_IBE_IBE7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IBE_OFFSET) * 32UL) + (GPIO_IBE_R_IBE7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOF APB IEV*/
#define GPIOF_BITBANDING_IEV    ((BITBANDING_GPIOIEV_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IEV_OFFSET) * 32UL)))

/* GPIOF APB IEV BITBANDING*/
#define GPIOF_BITBANDING_IEV_IEV0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IEV_OFFSET) * 32UL) + (GPIO_IEV_R_IEV0_BIT * 4UL))))
#define GPIOF_BITBANDING_IEV_IEV1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IEV_OFFSET) * 32UL) + (GPIO_IEV_R_IEV1_BIT * 4UL))))
#define GPIOF_BITBANDING_IEV_IEV2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IEV_OFFSET) * 32UL) + (GPIO_IEV_R_IEV2_BIT * 4UL))))
#define GPIOF_BITBANDING_IEV_IEV3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IEV_OFFSET) * 32UL) + (GPIO_IEV_R_IEV3_BIT * 4UL))))
#define GPIOF_BITBANDING_IEV_IEV4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IEV_OFFSET) * 32UL) + (GPIO_IEV_R_IEV4_BIT * 4UL))))
#define GPIOF_BITBANDING_IEV_IEV5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IEV_OFFSET) * 32UL) + (GPIO_IEV_R_IEV5_BIT * 4UL))))
#define GPIOF_BITBANDING_IEV_IEV6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IEV_OFFSET) * 32UL) + (GPIO_IEV_R_IEV6_BIT * 4UL))))
#define GPIOF_BITBANDING_IEV_IEV7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IEV_OFFSET) * 32UL) + (GPIO_IEV_R_IEV7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 6 IM *********************************************
 ******************************************************************************************/
/* GPIOF APB IME*/
#define GPIOF_BITBANDING_IM    ((BITBANDING_GPIOIM_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IM_OFFSET) * 32UL)))

/* GPIOF APB IME BITBANDING*/
#define GPIOF_BITBANDING_IM_IME0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IM_OFFSET) * 32UL) + (GPIO_IM_R_IME0_BIT * 4UL))))
#define GPIOF_BITBANDING_IM_IME1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IM_OFFSET) * 32UL) + (GPIO_IM_R_IME1_BIT * 4UL))))
#define GPIOF_BITBANDING_IM_IME2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IM_OFFSET) * 32UL) + (GPIO_IM_R_IME2_BIT * 4UL))))
#define GPIOF_BITBANDING_IM_IME3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IM_OFFSET) * 32UL) + (GPIO_IM_R_IME3_BIT * 4UL))))
#define GPIOF_BITBANDING_IM_IME4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IM_OFFSET) * 32UL) + (GPIO_IM_R_IME4_BIT * 4UL))))
#define GPIOF_BITBANDING_IM_IME5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IM_OFFSET) * 32UL) + (GPIO_IM_R_IME5_BIT * 4UL))))
#define GPIOF_BITBANDING_IM_IME6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IM_OFFSET) * 32UL) + (GPIO_IM_R_IME6_BIT * 4UL))))
#define GPIOF_BITBANDING_IM_IME7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_IM_OFFSET) * 32UL) + (GPIO_IM_R_IME7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOF APB RIS*/
#define GPIOF_BITBANDING_RIS    ((BITBANDING_GPIORIS_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_RIS_OFFSET) * 32UL)))

/* GPIOF APB RIS BITBANDING*/
#define GPIOF_BITBANDING_RIS_RIS0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_RIS_OFFSET) * 32UL) + (GPIO_RIS_R_RIS0_BIT * 4UL))))
#define GPIOF_BITBANDING_RIS_RIS1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_RIS_OFFSET) * 32UL) + (GPIO_RIS_R_RIS1_BIT * 4UL))))
#define GPIOF_BITBANDING_RIS_RIS2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_RIS_OFFSET) * 32UL) + (GPIO_RIS_R_RIS2_BIT * 4UL))))
#define GPIOF_BITBANDING_RIS_RIS3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_RIS_OFFSET) * 32UL) + (GPIO_RIS_R_RIS3_BIT * 4UL))))
#define GPIOF_BITBANDING_RIS_RIS4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_RIS_OFFSET) * 32UL) + (GPIO_RIS_R_RIS4_BIT * 4UL))))
#define GPIOF_BITBANDING_RIS_RIS5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_RIS_OFFSET) * 32UL) + (GPIO_RIS_R_RIS5_BIT * 4UL))))
#define GPIOF_BITBANDING_RIS_RIS6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_RIS_OFFSET) * 32UL) + (GPIO_RIS_R_RIS6_BIT * 4UL))))
#define GPIOF_BITBANDING_RIS_RIS7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_RIS_OFFSET) * 32UL) + (GPIO_RIS_R_RIS7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOF APB MIS*/
#define GPIOF_BITBANDING_MIS    ((BITBANDING_GPIOMIS_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_MIS_OFFSET) * 32UL)))

/* GPIOF APB MIS BITBANDING*/
#define GPIOF_BITBANDING_MIS_MIS0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_MIS_OFFSET) * 32UL) + (GPIO_MIS_R_MIS0_BIT * 4UL))))
#define GPIOF_BITBANDING_MIS_MIS1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_MIS_OFFSET) * 32UL) + (GPIO_MIS_R_MIS1_BIT * 4UL))))
#define GPIOF_BITBANDING_MIS_MIS2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_MIS_OFFSET) * 32UL) + (GPIO_MIS_R_MIS2_BIT * 4UL))))
#define GPIOF_BITBANDING_MIS_MIS3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_MIS_OFFSET) * 32UL) + (GPIO_MIS_R_MIS3_BIT * 4UL))))
#define GPIOF_BITBANDING_MIS_MIS4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_MIS_OFFSET) * 32UL) + (GPIO_MIS_R_MIS4_BIT * 4UL))))
#define GPIOF_BITBANDING_MIS_MIS5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_MIS_OFFSET) * 32UL) + (GPIO_MIS_R_MIS5_BIT * 4UL))))
#define GPIOF_BITBANDING_MIS_MIS6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_MIS_OFFSET) * 32UL) + (GPIO_MIS_R_MIS6_BIT * 4UL))))
#define GPIOF_BITBANDING_MIS_MIS7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_MIS_OFFSET) * 32UL) + (GPIO_MIS_R_MIS7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOF APB IC*/
#define GPIOF_BITBANDING_ICR    ((BITBANDING_GPIOICR_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ICR_OFFSET) * 32UL)))

/* GPIOF APB IC BITBANDING*/
#define GPIOF_BITBANDING_ICR_IC0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ICR_OFFSET) * 32UL) + (GPIO_ICR_R_IC0_BIT * 4UL))))
#define GPIOF_BITBANDING_ICR_IC1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ICR_OFFSET) * 32UL) + (GPIO_ICR_R_IC1_BIT * 4UL))))
#define GPIOF_BITBANDING_ICR_IC2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ICR_OFFSET) * 32UL) + (GPIO_ICR_R_IC2_BIT * 4UL))))
#define GPIOF_BITBANDING_ICR_IC3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ICR_OFFSET) * 32UL) + (GPIO_ICR_R_IC3_BIT * 4UL))))
#define GPIOF_BITBANDING_ICR_IC4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ICR_OFFSET) * 32UL) + (GPIO_ICR_R_IC4_BIT * 4UL))))
#define GPIOF_BITBANDING_ICR_IC5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ICR_OFFSET) * 32UL) + (GPIO_ICR_R_IC5_BIT * 4UL))))
#define GPIOF_BITBANDING_ICR_IC6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ICR_OFFSET) * 32UL) + (GPIO_ICR_R_IC6_BIT * 4UL))))
#define GPIOF_BITBANDING_ICR_IC7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ICR_OFFSET) * 32UL) + (GPIO_ICR_R_IC7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 10 FFSEL *********************************************
 ******************************************************************************************/
/* GPIOF APB AFSEL*/
#define GPIOF_BITBANDING_FFSEL    ((BITBANDING_GPIOFFSEL_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FFSEL_OFFSET) * 32UL)))

/* GPIOF APB AFSEL BITBANDING*/
#define GPIOF_BITBANDING_FFSEL_AFSEL0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FFSEL_OFFSET) * 32UL) + (GPIO_FFSEL_R_AFSEL0_BIT * 4UL))))
#define GPIOF_BITBANDING_FFSEL_AFSEL1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FFSEL_OFFSET) * 32UL) + (GPIO_FFSEL_R_AFSEL1_BIT * 4UL))))
#define GPIOF_BITBANDING_FFSEL_AFSEL2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FFSEL_OFFSET) * 32UL) + (GPIO_FFSEL_R_AFSEL2_BIT * 4UL))))
#define GPIOF_BITBANDING_FFSEL_AFSEL3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FFSEL_OFFSET) * 32UL) + (GPIO_FFSEL_R_AFSEL3_BIT * 4UL))))
#define GPIOF_BITBANDING_FFSEL_AFSEL4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FFSEL_OFFSET) * 32UL) + (GPIO_FFSEL_R_AFSEL4_BIT * 4UL))))
#define GPIOF_BITBANDING_FFSEL_AFSEL5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FFSEL_OFFSET) * 32UL) + (GPIO_FFSEL_R_AFSEL5_BIT * 4UL))))
#define GPIOF_BITBANDING_FFSEL_AFSEL6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FFSEL_OFFSET) * 32UL) + (GPIO_FFSEL_R_AFSEL6_BIT * 4UL))))
#define GPIOF_BITBANDING_FFSEL_AFSEL7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FFSEL_OFFSET) * 32UL) + (GPIO_FFSEL_R_AFSEL7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOF APB DRV2*/
#define GPIOF_BITBANDING_DRR    ((BITBANDING_GPIODRR_ARRAY_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR2R_OFFSET) * 32UL)))

/******************************************************************************************
 *********************************** * 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOF APB DRV2*/
#define GPIOF_BITBANDING_DR2R    ((BITBANDING_GPIODR2R_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR2R_OFFSET) * 32UL)))

/* GPIOF APB DRV2 BITBANDING*/
#define GPIOF_BITBANDING_DR2R_DRV20    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR2R_OFFSET) * 32UL) + (GPIO_DR2R_R_DRV20_BIT * 4UL))))
#define GPIOF_BITBANDING_DR2R_DRV21    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR2R_OFFSET) * 32UL) + (GPIO_DR2R_R_DRV21_BIT * 4UL))))
#define GPIOF_BITBANDING_DR2R_DRV22    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR2R_OFFSET) * 32UL) + (GPIO_DR2R_R_DRV22_BIT * 4UL))))
#define GPIOF_BITBANDING_DR2R_DRV23    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR2R_OFFSET) * 32UL) + (GPIO_DR2R_R_DRV23_BIT * 4UL))))
#define GPIOF_BITBANDING_DR2R_DRV24    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR2R_OFFSET) * 32UL) + (GPIO_DR2R_R_DRV24_BIT * 4UL))))
#define GPIOF_BITBANDING_DR2R_DRV25    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR2R_OFFSET) * 32UL) + (GPIO_DR2R_R_DRV25_BIT * 4UL))))
#define GPIOF_BITBANDING_DR2R_DRV26    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR2R_OFFSET) * 32UL) + (GPIO_DR2R_R_DRV26_BIT * 4UL))))
#define GPIOF_BITBANDING_DR2R_DRV27    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR2R_OFFSET) * 32UL) + (GPIO_DR2R_R_DRV27_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOF APB DRV4*/
#define GPIOF_BITBANDING_DR4R    ((BITBANDING_GPIODR4R_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR4R_OFFSET) * 32UL)))

/* GPIOF APB DRV4 BITBANDING*/
#define GPIOF_BITBANDING_DR4R_DRV40    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR4R_OFFSET) * 32UL) + (GPIO_DR4R_R_DRV40_BIT * 4UL))))
#define GPIOF_BITBANDING_DR4R_DRV41    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR4R_OFFSET) * 32UL) + (GPIO_DR4R_R_DRV41_BIT * 4UL))))
#define GPIOF_BITBANDING_DR4R_DRV42    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR4R_OFFSET) * 32UL) + (GPIO_DR4R_R_DRV42_BIT * 4UL))))
#define GPIOF_BITBANDING_DR4R_DRV43    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR4R_OFFSET) * 32UL) + (GPIO_DR4R_R_DRV43_BIT * 4UL))))
#define GPIOF_BITBANDING_DR4R_DRV44    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR4R_OFFSET) * 32UL) + (GPIO_DR4R_R_DRV44_BIT * 4UL))))
#define GPIOF_BITBANDING_DR4R_DRV45    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR4R_OFFSET) * 32UL) + (GPIO_DR4R_R_DRV45_BIT * 4UL))))
#define GPIOF_BITBANDING_DR4R_DRV46    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR4R_OFFSET) * 32UL) + (GPIO_DR4R_R_DRV46_BIT * 4UL))))
#define GPIOF_BITBANDING_DR4R_DRV47    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR4R_OFFSET) * 32UL) + (GPIO_DR4R_R_DRV47_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOF APB DRV8*/
#define GPIOF_BITBANDING_DR8R    ((BITBANDING_GPIODR8R_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR8R_OFFSET) * 32UL)))

/* GPIOF APB DRV8 BITBANDING*/
#define GPIOF_BITBANDING_DR8R_DRV80    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR8R_OFFSET) * 32UL) + (GPIO_DR8R_R_DRV80_BIT * 4UL))))
#define GPIOF_BITBANDING_DR8R_DRV81    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR8R_OFFSET) * 32UL) + (GPIO_DR8R_R_DRV81_BIT * 4UL))))
#define GPIOF_BITBANDING_DR8R_DRV82    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR8R_OFFSET) * 32UL) + (GPIO_DR8R_R_DRV82_BIT * 4UL))))
#define GPIOF_BITBANDING_DR8R_DRV83    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR8R_OFFSET) * 32UL) + (GPIO_DR8R_R_DRV83_BIT * 4UL))))
#define GPIOF_BITBANDING_DR8R_DRV84    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR8R_OFFSET) * 32UL) + (GPIO_DR8R_R_DRV84_BIT * 4UL))))
#define GPIOF_BITBANDING_DR8R_DRV85    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR8R_OFFSET) * 32UL) + (GPIO_DR8R_R_DRV85_BIT * 4UL))))
#define GPIOF_BITBANDING_DR8R_DRV86    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR8R_OFFSET) * 32UL) + (GPIO_DR8R_R_DRV86_BIT * 4UL))))
#define GPIOF_BITBANDING_DR8R_DRV87    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DR8R_OFFSET) * 32UL) + (GPIO_DR8R_R_DRV87_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOF APB ODE*/
#define GPIOF_BITBANDING_ODR    ((BITBANDING_GPIOODR_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ODR_OFFSET) * 32UL)))

/* GPIOF APB ODE BITBANDING*/
#define GPIOF_BITBANDING_ODR_ODE0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ODR_OFFSET) * 32UL) + (GPIO_ODR_R_ODE0_BIT * 4UL))))
#define GPIOF_BITBANDING_ODR_ODE1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ODR_OFFSET) * 32UL) + (GPIO_ODR_R_ODE1_BIT * 4UL))))
#define GPIOF_BITBANDING_ODR_ODE2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ODR_OFFSET) * 32UL) + (GPIO_ODR_R_ODE2_BIT * 4UL))))
#define GPIOF_BITBANDING_ODR_ODE3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ODR_OFFSET) * 32UL) + (GPIO_ODR_R_ODE3_BIT * 4UL))))
#define GPIOF_BITBANDING_ODR_ODE4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ODR_OFFSET) * 32UL) + (GPIO_ODR_R_ODE4_BIT * 4UL))))
#define GPIOF_BITBANDING_ODR_ODE5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ODR_OFFSET) * 32UL) + (GPIO_ODR_R_ODE5_BIT * 4UL))))
#define GPIOF_BITBANDING_ODR_ODE6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ODR_OFFSET) * 32UL) + (GPIO_ODR_R_ODE6_BIT * 4UL))))
#define GPIOF_BITBANDING_ODR_ODE7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_ODR_OFFSET) * 32UL) + (GPIO_ODR_R_ODE7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOF APB PUE*/
#define GPIOF_BITBANDING_PUR    ((BITBANDING_GPIOPUR_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PUR_OFFSET) * 32UL)))

/* GPIOF APB PUE BITBANDING*/
#define GPIOF_BITBANDING_PUR_PUE0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PUR_OFFSET) * 32UL) + (GPIO_PUR_R_PUE0_BIT * 4UL))))
#define GPIOF_BITBANDING_PUR_PUE1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PUR_OFFSET) * 32UL) + (GPIO_PUR_R_PUE1_BIT * 4UL))))
#define GPIOF_BITBANDING_PUR_PUE2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PUR_OFFSET) * 32UL) + (GPIO_PUR_R_PUE2_BIT * 4UL))))
#define GPIOF_BITBANDING_PUR_PUE3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PUR_OFFSET) * 32UL) + (GPIO_PUR_R_PUE3_BIT * 4UL))))
#define GPIOF_BITBANDING_PUR_PUE4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PUR_OFFSET) * 32UL) + (GPIO_PUR_R_PUE4_BIT * 4UL))))
#define GPIOF_BITBANDING_PUR_PUE5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PUR_OFFSET) * 32UL) + (GPIO_PUR_R_PUE5_BIT * 4UL))))
#define GPIOF_BITBANDING_PUR_PUE6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PUR_OFFSET) * 32UL) + (GPIO_PUR_R_PUE6_BIT * 4UL))))
#define GPIOF_BITBANDING_PUR_PUE7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PUR_OFFSET) * 32UL) + (GPIO_PUR_R_PUE7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOF APB PDE*/
#define GPIOF_BITBANDING_PDR    ((BITBANDING_GPIOPDR_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PDR_OFFSET) * 32UL)))

/* GPIOF APB PDE BITBANDING*/
#define GPIOF_BITBANDING_PDR_PDE0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PDR_OFFSET) * 32UL) + (GPIO_PDR_R_PDE0_BIT * 4UL))))
#define GPIOF_BITBANDING_PDR_PDE1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PDR_OFFSET) * 32UL) + (GPIO_PDR_R_PDE1_BIT * 4UL))))
#define GPIOF_BITBANDING_PDR_PDE2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PDR_OFFSET) * 32UL) + (GPIO_PDR_R_PDE2_BIT * 4UL))))
#define GPIOF_BITBANDING_PDR_PDE3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PDR_OFFSET) * 32UL) + (GPIO_PDR_R_PDE3_BIT * 4UL))))
#define GPIOF_BITBANDING_PDR_PDE4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PDR_OFFSET) * 32UL) + (GPIO_PDR_R_PDE4_BIT * 4UL))))
#define GPIOF_BITBANDING_PDR_PDE5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PDR_OFFSET) * 32UL) + (GPIO_PDR_R_PDE5_BIT * 4UL))))
#define GPIOF_BITBANDING_PDR_PDE6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PDR_OFFSET) * 32UL) + (GPIO_PDR_R_PDE6_BIT * 4UL))))
#define GPIOF_BITBANDING_PDR_PDE7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PDR_OFFSET) * 32UL) + (GPIO_PDR_R_PDE7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOF APB SLR*/
#define GPIOF_BITBANDING_SLR    ((BITBANDING_GPIOSLR_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_SLR_OFFSET) * 32UL)))

/* GPIOF APB SLR BITBANDING*/
#define GPIOF_BITBANDING_SLR_SLR0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_SLR_OFFSET) * 32UL) + (GPIO_SLR_R_SLR0_BIT * 4UL))))
#define GPIOF_BITBANDING_SLR_SLR1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_SLR_OFFSET) * 32UL) + (GPIO_SLR_R_SLR1_BIT * 4UL))))
#define GPIOF_BITBANDING_SLR_SLR2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_SLR_OFFSET) * 32UL) + (GPIO_SLR_R_SLR2_BIT * 4UL))))
#define GPIOF_BITBANDING_SLR_SLR3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_SLR_OFFSET) * 32UL) + (GPIO_SLR_R_SLR3_BIT * 4UL))))
#define GPIOF_BITBANDING_SLR_SLR4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_SLR_OFFSET) * 32UL) + (GPIO_SLR_R_SLR4_BIT * 4UL))))
#define GPIOF_BITBANDING_SLR_SLR5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_SLR_OFFSET) * 32UL) + (GPIO_SLR_R_SLR5_BIT * 4UL))))
#define GPIOF_BITBANDING_SLR_SLR6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_SLR_OFFSET) * 32UL) + (GPIO_SLR_R_SLR6_BIT * 4UL))))
#define GPIOF_BITBANDING_SLR_SLR7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_SLR_OFFSET) * 32UL) + (GPIO_SLR_R_SLR7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOF APB DEN*/
#define GPIOF_BITBANDING_DEN    ((BITBANDING_GPIODEN_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DEN_OFFSET) * 32UL)))

/* GPIOF APB DEN BITBANDING*/
#define GPIOF_BITBANDING_DEN_DEN0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DEN_OFFSET) * 32UL) + (GPIO_DEN_R_DEN0_BIT * 4UL))))
#define GPIOF_BITBANDING_DEN_DEN1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DEN_OFFSET) * 32UL) + (GPIO_DEN_R_DEN1_BIT * 4UL))))
#define GPIOF_BITBANDING_DEN_DEN2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DEN_OFFSET) * 32UL) + (GPIO_DEN_R_DEN2_BIT * 4UL))))
#define GPIOF_BITBANDING_DEN_DEN3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DEN_OFFSET) * 32UL) + (GPIO_DEN_R_DEN3_BIT * 4UL))))
#define GPIOF_BITBANDING_DEN_DEN4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DEN_OFFSET) * 32UL) + (GPIO_DEN_R_DEN4_BIT * 4UL))))
#define GPIOF_BITBANDING_DEN_DEN5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DEN_OFFSET) * 32UL) + (GPIO_DEN_R_DEN5_BIT * 4UL))))
#define GPIOF_BITBANDING_DEN_DEN6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DEN_OFFSET) * 32UL) + (GPIO_DEN_R_DEN6_BIT * 4UL))))
#define GPIOF_BITBANDING_DEN_DEN7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DEN_OFFSET) * 32UL) + (GPIO_DEN_R_DEN7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOF APB LOCK*/
#define GPIOF_BITBANDING_LOCK    ((BITBANDING_GPIOLOCK_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_LOCK_OFFSET) * 32UL)))

/******************************************************************************************
 *********************************** * 20 CR *********************************************
 ******************************************************************************************/
/* GPIOF APB CR*/
#define GPIOF_BITBANDING_CR    ((BITBANDING_GPIOCR_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_CR_OFFSET) * 32UL)))

/* GPIOF APB CR BITBANDING*/
#define GPIOF_BITBANDING_CR_CR0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_CR_OFFSET) * 32UL) + (GPIO_CR_R_CR0_BIT * 4UL))))
#define GPIOF_BITBANDING_CR_CR1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_CR_OFFSET) * 32UL) + (GPIO_CR_R_CR1_BIT * 4UL))))
#define GPIOF_BITBANDING_CR_CR2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_CR_OFFSET) * 32UL) + (GPIO_CR_R_CR2_BIT * 4UL))))
#define GPIOF_BITBANDING_CR_CR3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_CR_OFFSET) * 32UL) + (GPIO_CR_R_CR3_BIT * 4UL))))
#define GPIOF_BITBANDING_CR_CR4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_CR_OFFSET) * 32UL) + (GPIO_CR_R_CR4_BIT * 4UL))))
#define GPIOF_BITBANDING_CR_CR5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_CR_OFFSET) * 32UL) + (GPIO_CR_R_CR5_BIT * 4UL))))
#define GPIOF_BITBANDING_CR_CR6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_CR_OFFSET) * 32UL) + (GPIO_CR_R_CR6_BIT * 4UL))))
#define GPIOF_BITBANDING_CR_CR7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_CR_OFFSET) * 32UL) + (GPIO_CR_R_CR7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 21 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOF APB AMSEL*/
#define GPIOF_BITBANDING_AFSEL    ((BITBANDING_GPIOAFSEL_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_AFSEL_OFFSET) * 32UL)))

/* GPIOF APB AMSEL BITBANDING*/
#define GPIOF_BITBANDING_AFSEL_AMSEL0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_AFSEL_OFFSET) * 32UL) + (GPIO_AFSEL_R_AMSEL0_BIT * 4UL))))
#define GPIOF_BITBANDING_AFSEL_AMSEL1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_AFSEL_OFFSET) * 32UL) + (GPIO_AFSEL_R_AMSEL1_BIT * 4UL))))
#define GPIOF_BITBANDING_AFSEL_AMSEL2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_AFSEL_OFFSET) * 32UL) + (GPIO_AFSEL_R_AMSEL2_BIT * 4UL))))
#define GPIOF_BITBANDING_AFSEL_AMSEL3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_AFSEL_OFFSET) * 32UL) + (GPIO_AFSEL_R_AMSEL3_BIT * 4UL))))
#define GPIOF_BITBANDING_AFSEL_AMSEL4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_AFSEL_OFFSET) * 32UL) + (GPIO_AFSEL_R_AMSEL4_BIT * 4UL))))
#define GPIOF_BITBANDING_AFSEL_AMSEL5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_AFSEL_OFFSET) * 32UL) + (GPIO_AFSEL_R_AMSEL5_BIT * 4UL))))
#define GPIOF_BITBANDING_AFSEL_AMSEL6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_AFSEL_OFFSET) * 32UL) + (GPIO_AFSEL_R_AMSEL6_BIT * 4UL))))
#define GPIOF_BITBANDING_AFSEL_AMSEL7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_AFSEL_OFFSET) * 32UL) + (GPIO_AFSEL_R_AMSEL7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOF APB PCM*/
#define GPIOF_BITBANDING_PCTL    ((BITBANDING_GPIOPCTL_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PCTL_OFFSET) * 32UL)))

/******************************************************************************************
 *********************************** * 23 FDCCTL *********************************************
 ******************************************************************************************/
/* GPIOF APB ADCEN*/
#define GPIOF_BITBANDING_FDCCTL    ((BITBANDING_GPIOFDCCTL_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FDCCTL_OFFSET) * 32UL)))

/* GPIOF APB ADCEN BITBANDING*/
#define GPIOF_BITBANDING_FDCCTL_ADCEN0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FDCCTL_OFFSET) * 32UL) + (GPIO_FDCCTL_R_ADCEN0_BIT * 4UL))))
#define GPIOF_BITBANDING_FDCCTL_ADCEN1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FDCCTL_OFFSET) * 32UL) + (GPIO_FDCCTL_R_ADCEN1_BIT * 4UL))))
#define GPIOF_BITBANDING_FDCCTL_ADCEN2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FDCCTL_OFFSET) * 32UL) + (GPIO_FDCCTL_R_ADCEN2_BIT * 4UL))))
#define GPIOF_BITBANDING_FDCCTL_ADCEN3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FDCCTL_OFFSET) * 32UL) + (GPIO_FDCCTL_R_ADCEN3_BIT * 4UL))))
#define GPIOF_BITBANDING_FDCCTL_ADCEN4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FDCCTL_OFFSET) * 32UL) + (GPIO_FDCCTL_R_ADCEN4_BIT * 4UL))))
#define GPIOF_BITBANDING_FDCCTL_ADCEN5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FDCCTL_OFFSET) * 32UL) + (GPIO_FDCCTL_R_ADCEN5_BIT * 4UL))))
#define GPIOF_BITBANDING_FDCCTL_ADCEN6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FDCCTL_OFFSET) * 32UL) + (GPIO_FDCCTL_R_ADCEN6_BIT * 4UL))))
#define GPIOF_BITBANDING_FDCCTL_ADCEN7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_FDCCTL_OFFSET) * 32UL) + (GPIO_FDCCTL_R_ADCEN7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOF APB DMAEN*/
#define GPIOF_BITBANDING_DMACTL    ((BITBANDING_GPIODMACTL_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DMACTL_OFFSET) * 32UL)))

/* GPIOF APB DMAEN BITBANDING*/
#define GPIOF_BITBANDING_DMACTL_DMAEN0    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DMACTL_OFFSET) * 32UL) + (GPIO_DMACTL_R_DMAEN0_BIT * 4UL))))
#define GPIOF_BITBANDING_DMACTL_DMAEN1    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DMACTL_OFFSET) * 32UL) + (GPIO_DMACTL_R_DMAEN1_BIT * 4UL))))
#define GPIOF_BITBANDING_DMACTL_DMAEN2    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DMACTL_OFFSET) * 32UL) + (GPIO_DMACTL_R_DMAEN2_BIT * 4UL))))
#define GPIOF_BITBANDING_DMACTL_DMAEN3    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DMACTL_OFFSET) * 32UL) + (GPIO_DMACTL_R_DMAEN3_BIT * 4UL))))
#define GPIOF_BITBANDING_DMACTL_DMAEN4    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DMACTL_OFFSET) * 32UL) + (GPIO_DMACTL_R_DMAEN4_BIT * 4UL))))
#define GPIOF_BITBANDING_DMACTL_DMAEN5    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DMACTL_OFFSET) * 32UL) + (GPIO_DMACTL_R_DMAEN5_BIT * 4UL))))
#define GPIOF_BITBANDING_DMACTL_DMAEN6    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DMACTL_OFFSET) * 32UL) + (GPIO_DMACTL_R_DMAEN6_BIT * 4UL))))
#define GPIOF_BITBANDING_DMACTL_DMAEN7    (*((volatile uint32_t *) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_DMACTL_OFFSET) * 32UL) + (GPIO_DMACTL_R_DMAEN7_BIT * 4UL))))

/******************************************************************************************
 *********************************** * 25 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID4*/
#define GPIOF_BITBANDING_PeriphID4    ((BITBANDING_GPIOPeriphID4_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PeriphID4_OFFSET) * 32UL)))

/******************************************************************************************
 *********************************** * 26 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID5*/
#define GPIOF_BITBANDING_PeriphID5    ((BITBANDING_GPIOPeriphID5_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PeriphID5_OFFSET) * 32UL)))

/******************************************************************************************
 *********************************** * 27 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID6*/
#define GPIOF_BITBANDING_PeriphID6    ((BITBANDING_GPIOPeriphID6_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PeriphID6_OFFSET) * 32UL)))

/******************************************************************************************
 *********************************** * 28 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID7*/
#define GPIOF_BITBANDING_PeriphID7    ((BITBANDING_GPIOPeriphID7_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PeriphID7_OFFSET) * 32UL)))

/******************************************************************************************
 *********************************** * 29 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID0*/
#define GPIOF_BITBANDING_PeriphID0    ((BITBANDING_GPIOPeriphID0_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PeriphID0_OFFSET) * 32UL)))

/******************************************************************************************
 *********************************** * 30 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID1*/
#define GPIOF_BITBANDING_PeriphID1    ((BITBANDING_GPIOPeriphID1_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PeriphID1_OFFSET) * 32UL)))

/******************************************************************************************
 *********************************** * 31 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID2*/
#define GPIOF_BITBANDING_PeriphID2    ((BITBANDING_GPIOPeriphID2_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PeriphID2_OFFSET) * 32UL)))

/******************************************************************************************
 *********************************** * 32 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID3*/
#define GPIOF_BITBANDING_PeriphID3    ((BITBANDING_GPIOPeriphID3_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_PeriphID3_OFFSET) * 32UL)))

/******************************************************************************************
 *********************************** * 33 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOF APB CID0*/
#define GPIOF_BITBANDING_CellID0    ((BITBANDING_GPIOCellID0_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_CellID0_OFFSET) * 32UL)))

/******************************************************************************************
 *********************************** * 34 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOF APB CID1*/
#define GPIOF_BITBANDING_CellID1    ((BITBANDING_GPIOCellID1_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_CellID1_OFFSET) * 32UL)))

/******************************************************************************************
 *********************************** * 35 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOF APB CID2*/
#define GPIOF_BITBANDING_CellID2    ((BITBANDING_GPIOCellID2_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_CellID2_OFFSET) * 32UL)))

/******************************************************************************************
 *********************************** * 36 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOF APB CID3*/
#define GPIOF_BITBANDING_CellID3    ((BITBANDING_GPIOCellID3_TypeDef*) (GPIO_BITBANDING_BASE + ((GPIOF_OFFSET + GPIO_CellID3_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_APB_BITBANDING_GPIO_REGISTERPERIPHERAL_APB_BITBANDING_MODULEF_H_ */
