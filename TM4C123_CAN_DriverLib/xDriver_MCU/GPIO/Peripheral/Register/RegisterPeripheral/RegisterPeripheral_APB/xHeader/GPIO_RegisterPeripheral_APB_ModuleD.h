/**
 *
 * @file GPIO_RegisterPeripheral_APB_ModuleD.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULED_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULED_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOD    ((GPIO_TypeDef*) (GPIOD_BASE))
#define GPIOD_AUX    ((GPIO_AUX_TypeDef*) (GPIOD_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOC APB DATA*/
#define GPIOD_DATA_MASK    ((GPIODATA_MASK_TypeDef*) (GPIOD_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOD_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOD_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOD_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOD_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOD_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOD_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOD_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOD_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOD_DATA    ((GPIODATA_TypeDef*) (GPIOD_BASE + GPIO_DATA_OFFSET))
#define GPIOD_DATA_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOC APB DIR*/
#define GPIOD_DIR    ((GPIODIR_TypeDef*) (GPIOD_BASE + GPIO_DIR_OFFSET))
#define GPIOD_DIR_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOC APB IS*/
#define GPIOD_IS    ((GPIOIS_TypeDef*) (GPIOD_BASE + GPIO_IS_OFFSET))
#define GPIOD_IS_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOC APB IBE*/
#define GPIOD_IBE    ((GPIOIBE_TypeDef*) (GPIOD_BASE + GPIO_IBE_OFFSET))
#define GPIOD_IBE_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOC APB IEV*/
#define GPIOD_IEV    ((GPIOIEV_TypeDef*) (GPIOD_BASE + GPIO_IEV_OFFSET))
#define GPIOD_IEV_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOC APB IME*/
#define GPIOD_IM    ((GPIOIM_TypeDef*) (GPIOD_BASE + GPIO_IM_OFFSET))
#define GPIOD_IM_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOC APB RIS*/
#define GPIOD_RIS    ((GPIORIS_TypeDef*) (GPIOD_BASE + GPIO_RIS_OFFSET))
#define GPIOD_RIS_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOC APB MIS*/
#define GPIOD_MIS    ((GPIOMIS_TypeDef*) (GPIOD_BASE + GPIO_MIS_OFFSET))
#define GPIOD_MIS_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOC APB IC*/
#define GPIOD_ICR    ((GPIOICR_TypeDef*) (GPIOD_BASE + GPIO_ICR_OFFSET))
#define GPIOD_ICR_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOC APB AFSEL*/
#define GPIOD_AFSEL    ((GPIOAFSEL_TypeDef*) (GPIOD_BASE + GPIO_AFSEL_OFFSET))
#define GPIOD_AFSEL_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOC APB DRV2*/
#define GPIOD_DRR    ((GPIODRR_ARRAY_TypeDef*) (GPIOD_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOC APB DRV2*/
#define GPIOD_DR2R    ((GPIODR2R_TypeDef*) (GPIOD_BASE + GPIO_DR2R_OFFSET))
#define GPIOD_DR2R_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOC APB DRV4*/
#define GPIOD_DR4R    ((GPIODR4R_TypeDef*) (GPIOD_BASE + GPIO_DR4R_OFFSET))
#define GPIOD_DR4R_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOC APB DRV8*/
#define GPIOD_DR8R    ((GPIODR8R_TypeDef*) (GPIOD_BASE + GPIO_DR8R_OFFSET))
#define GPIOD_DR8R_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOC APB ODE*/
#define GPIOD_ODR    ((GPIOODR_TypeDef*) (GPIOD_BASE + GPIO_ODR_OFFSET))
#define GPIOD_ODR_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOC APB PUE*/
#define GPIOD_PUR    ((GPIOPUR_TypeDef*) (GPIOD_BASE + GPIO_PUR_OFFSET))
#define GPIOD_PUR_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOC APB PDE*/
#define GPIOD_PDR    ((GPIOPDR_TypeDef*) (GPIOD_BASE + GPIO_PDR_OFFSET))
#define GPIOD_PDR_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOC APB SLR*/
#define GPIOD_SLR    ((GPIOSLR_TypeDef*) (GPIOD_BASE + GPIO_SLR_OFFSET))
#define GPIOD_SLR_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOC APB DEN*/
#define GPIOD_DEN    ((GPIODEN_TypeDef*) (GPIOD_BASE + GPIO_DEN_OFFSET))
#define GPIOD_DEN_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOC APB LOCK*/
#define GPIOD_LOCK    ((GPIOLOCK_TypeDef*) (GPIOD_BASE + GPIO_LOCK_OFFSET))
#define GPIOD_LOCK_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOC APB CR*/
#define GPIOD_CR    ((GPIOCR_TypeDef*) (GPIOD_BASE + GPIO_CR_OFFSET))
#define GPIOD_CR_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOC APB AMSEL*/
#define GPIOD_AMSEL    ((GPIOAMSEL_TypeDef*) (GPIOD_BASE + GPIO_AMSEL_OFFSET))
#define GPIOD_AMSEL_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOC APB PCM*/
#define GPIOD_PCTL    ((GPIOPCTL_TypeDef*) (GPIOD_BASE + GPIO_PCTL_OFFSET))
#define GPIOD_PCTL_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOC APB ADCEN*/
#define GPIOD_ADCCTL    ((GPIOADCCTL_TypeDef*) (GPIOD_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOD_ADCCTL_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOC APB DMAEN*/
#define GPIOD_DMACTL    ((GPIODMACTL_TypeDef*) (GPIOD_BASE + GPIO_DMACTL_OFFSET))
#define GPIOD_DMACTL_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID4*/
#define GPIOD_PeriphID4    ((GPIOPeriphID4_TypeDef*) (GPIOD_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOD_PeriphID4_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 26 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID5*/
#define GPIOD_PeriphID5    ((GPIOPeriphID5_TypeDef*) (GPIOD_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOD_PeriphID5_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 27 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID6*/
#define GPIOD_PeriphID6    ((GPIOPeriphID6_TypeDef*) (GPIOD_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOD_PeriphID6_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 28 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID7*/
#define GPIOD_PeriphID7    ((GPIOPeriphID7_TypeDef*) (GPIOD_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOD_PeriphID7_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 29 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID0*/
#define GPIOD_PeriphID0    ((GPIOPeriphID0_TypeDef*) (GPIOD_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOD_PeriphID0_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 30 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID1*/
#define GPIOD_PeriphID1    ((GPIOPeriphID1_TypeDef*) (GPIOD_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOD_PeriphID1_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 31 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID2*/
#define GPIOD_PeriphID2    ((GPIOPeriphID2_TypeDef*) (GPIOD_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOD_PeriphID2_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID3*/
#define GPIOD_PeriphID3    ((GPIOPeriphID3_TypeDef*) (GPIOD_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOD_PeriphID3_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 33 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOC APB CID0*/
#define GPIOD_CellID0    ((GPIOCellID0_TypeDef*) (GPIOD_BASE + GPIO_CellID0_OFFSET))
#define GPIOD_CellID0_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 34 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOC APB CID1*/
#define GPIOD_CellID1    ((GPIOCellID1_TypeDef*) (GPIOD_BASE + GPIO_CellID1_OFFSET))
#define GPIOD_CellID1_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 35 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOC APB CID2*/
#define GPIOD_CellID2    ((GPIOCellID2_TypeDef*) (GPIOD_BASE + GPIO_CellID2_OFFSET))
#define GPIOD_CellID2_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 36 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOC APB CID3*/
#define GPIOD_CellID3    ((GPIOCellID3_TypeDef*) (GPIOD_BASE + GPIO_CellID3_OFFSET))
#define GPIOD_CellID3_R    (*((volatile uint32_t *) (GPIOD_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULED_H_ */
