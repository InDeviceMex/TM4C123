/**
 *
 * @file GPIO_RegisterPeripheral_APB_ModuleF.h
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
 * @verbatim 25 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEF_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEF_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOF    ((GPIO_TypeDef*) (GPIOF_BASE))
#define GPIOF_AUX    ((GPIO_AUX_TypeDef*) (GPIOF_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOF APB DATA*/
#define GPIOF_DATA_MASK    (((GPIODATA_MASK_TypeDef*) (GPIOF_BASE + GPIO_DATA_MASK_OFFSET)))
#define GPIOF_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOF_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOF_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOF_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOF_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOF_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOF_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOF_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOF_DATA    (((GPIODATA_TypeDef*) (GPIOF_BASE + GPIO_DATA_OFFSET)))
#define GPIOF_DATA_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOF APB DIR*/
#define GPIOF_DIR    (((GPIODIR_TypeDef*) (GPIOF_BASE + GPIO_DIR_OFFSET)))
#define GPIOF_DIR_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOF APB IS*/
#define GPIOF_IS    (((GPIOIS_TypeDef*) (GPIOF_BASE + GPIO_IS_OFFSET)))
#define GPIOF_IS_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOF APB IBE*/
#define GPIOF_IBE    (((GPIOIBE_TypeDef*) (GPIOF_BASE + GPIO_IBE_OFFSET)))
#define GPIOF_IBE_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOF APB IEV*/
#define GPIOF_IEV    (((GPIOIEV_TypeDef*) (GPIOF_BASE + GPIO_IEV_OFFSET)))
#define GPIOF_IEV_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOF APB IME*/
#define GPIOF_IM    (((GPIOIM_TypeDef*) (GPIOF_BASE + GPIO_IM_OFFSET)))
#define GPIOF_IM_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOF APB RIS*/
#define GPIOF_RIS    (((GPIORIS_TypeDef*) (GPIOF_BASE + GPIO_RIS_OFFSET)))
#define GPIOF_RIS_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOF APB MIS*/
#define GPIOF_MIS    (((GPIOMIS_TypeDef*) (GPIOF_BASE + GPIO_MIS_OFFSET)))
#define GPIOF_MIS_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOF APB IC*/
#define GPIOF_ICR    (((GPIOICR_TypeDef*) (GPIOF_BASE + GPIO_ICR_OFFSET)))
#define GPIOF_ICR_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 FFSEL *********************************************
 ******************************************************************************************/
/* GPIOF APB AFSEL*/
#define GPIOF_FFSEL    (((GPIOFFSEL_TypeDef*) (GPIOF_BASE + GPIO_FFSEL_OFFSET)))
#define GPIOF_FFSEL_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_FFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOF APB DRV2*/
#define GPIOF_DRR    (((GPIODRR_ARRAY_TypeDef*) (GPIOF_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOF APB DRV2*/
#define GPIOF_DR2R    (((GPIODR2R_TypeDef*) (GPIOF_BASE + GPIO_DR2R_OFFSET)))
#define GPIOF_DR2R_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOF APB DRV4*/
#define GPIOF_DR4R    (((GPIODR4R_TypeDef*) (GPIOF_BASE + GPIO_DR4R_OFFSET)))
#define GPIOF_DR4R_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOF APB DRV8*/
#define GPIOF_DR8R    (((GPIODR8R_TypeDef*) (GPIOF_BASE + GPIO_DR8R_OFFSET)))
#define GPIOF_DR8R_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOF APB ODE*/
#define GPIOF_ODR    (((GPIOODR_TypeDef*) (GPIOF_BASE + GPIO_ODR_OFFSET)))
#define GPIOF_ODR_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOF APB PUE*/
#define GPIOF_PUR    (((GPIOPUR_TypeDef*) (GPIOF_BASE + GPIO_PUR_OFFSET)))
#define GPIOF_PUR_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOF APB PDE*/
#define GPIOF_PDR    (((GPIOPDR_TypeDef*) (GPIOF_BASE + GPIO_PDR_OFFSET)))
#define GPIOF_PDR_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOF APB SLR*/
#define GPIOF_SLR    (((GPIOSLR_TypeDef*) (GPIOF_BASE + GPIO_SLR_OFFSET)))
#define GPIOF_SLR_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOF APB DEN*/
#define GPIOF_DEN    (((GPIODEN_TypeDef*) (GPIOF_BASE + GPIO_DEN_OFFSET)))
#define GPIOF_DEN_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOF APB LOCK*/
#define GPIOF_LOCK    (((GPIOLOCK_TypeDef*) (GPIOF_BASE + GPIO_LOCK_OFFSET)))
#define GPIOF_LOCK_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOF APB CR*/
#define GPIOF_CR    (((GPIOCR_TypeDef*) (GPIOF_BASE + GPIO_CR_OFFSET)))
#define GPIOF_CR_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOF APB AMSEL*/
#define GPIOF_AFSEL    (((GPIOAFSEL_TypeDef*) (GPIOF_BASE + GPIO_AFSEL_OFFSET)))
#define GPIOF_AFSEL_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOF APB PCM*/
#define GPIOF_PCTL    (((GPIOPCTL_TypeDef*) (GPIOF_BASE + GPIO_PCTL_OFFSET)))
#define GPIOF_PCTL_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 FDCCTL *********************************************
 ******************************************************************************************/
/* GPIOF APB ADCEN*/
#define GPIOF_FDCCTL    (((GPIOFDCCTL_TypeDef*) (GPIOF_BASE + GPIO_FDCCTL_OFFSET)))
#define GPIOF_FDCCTL_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_FDCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOF APB DMAEN*/
#define GPIOF_DMACTL    (((GPIODMACTL_TypeDef*) (GPIOF_BASE + GPIO_DMACTL_OFFSET)))
#define GPIOF_DMACTL_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID4*/
#define GPIOF_PeriphID4    (((GPIOPeriphID4_TypeDef*) (GPIOF_BASE + GPIO_PeriphID4_OFFSET)))
#define GPIOF_PeriphID4_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 26 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID5*/
#define GPIOF_PeriphID5    (((GPIOPeriphID5_TypeDef*) (GPIOF_BASE + GPIO_PeriphID5_OFFSET)))
#define GPIOF_PeriphID5_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 27 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID6*/
#define GPIOF_PeriphID6    (((GPIOPeriphID6_TypeDef*) (GPIOF_BASE + GPIO_PeriphID6_OFFSET)))
#define GPIOF_PeriphID6_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 28 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID7*/
#define GPIOF_PeriphID7    (((GPIOPeriphID7_TypeDef*) (GPIOF_BASE + GPIO_PeriphID7_OFFSET)))
#define GPIOF_PeriphID7_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 29 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID0*/
#define GPIOF_PeriphID0    (((GPIOPeriphID0_TypeDef*) (GPIOF_BASE + GPIO_PeriphID0_OFFSET)))
#define GPIOF_PeriphID0_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 30 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID1*/
#define GPIOF_PeriphID1    (((GPIOPeriphID1_TypeDef*) (GPIOF_BASE + GPIO_PeriphID1_OFFSET)))
#define GPIOF_PeriphID1_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 31 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID2*/
#define GPIOF_PeriphID2    (((GPIOPeriphID2_TypeDef*) (GPIOF_BASE + GPIO_PeriphID2_OFFSET)))
#define GPIOF_PeriphID2_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID3*/
#define GPIOF_PeriphID3    (((GPIOPeriphID3_TypeDef*) (GPIOF_BASE + GPIO_PeriphID3_OFFSET)))
#define GPIOF_PeriphID3_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 33 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOF APB CID0*/
#define GPIOF_CellID0    (((GPIOCellID0_TypeDef*) (GPIOF_BASE + GPIO_CellID0_OFFSET)))
#define GPIOF_CellID0_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 34 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOF APB CID1*/
#define GPIOF_CellID1    (((GPIOCellID1_TypeDef*) (GPIOF_BASE + GPIO_CellID1_OFFSET)))
#define GPIOF_CellID1_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 35 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOF APB CID2*/
#define GPIOF_CellID2    (((GPIOCellID2_TypeDef*) (GPIOF_BASE + GPIO_CellID2_OFFSET)))
#define GPIOF_CellID2_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 36 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOF APB CID3*/
#define GPIOF_CellID3    (((GPIOCellID3_TypeDef*) (GPIOF_BASE + GPIO_CellID3_OFFSET)))
#define GPIOF_CellID3_R    (*((volatile uint32_t *) (GPIOF_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEF_H_ */
