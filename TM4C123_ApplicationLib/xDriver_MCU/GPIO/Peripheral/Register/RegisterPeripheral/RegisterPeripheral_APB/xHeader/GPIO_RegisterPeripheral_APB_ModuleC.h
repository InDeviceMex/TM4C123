/**
 *
 * @file GPIO_RegisterPeripheral_APB_ModuleC.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEC_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEC_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOC    ((GPIO_TypeDef*) (GPIOC_BASE))
#define GPIOC_AUX    ((GPIO_AUX_TypeDef*) (GPIOC_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOC APB DATA*/
#define GPIOC_DATA_MASK    ((GPIODATA_MASK_TypeDef*) (GPIOC_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOC_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOC_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOC_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOC_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOC_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOC_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOC_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOC_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOC_DATA    ((GPIODATA_TypeDef*) (GPIOC_BASE + GPIO_DATA_OFFSET))
#define GPIOC_DATA_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOC APB DIR*/
#define GPIOC_DIR    ((GPIODIR_TypeDef*) (GPIOC_BASE + GPIO_DIR_OFFSET))
#define GPIOC_DIR_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOC APB IS*/
#define GPIOC_IS    ((GPIOIS_TypeDef*) (GPIOC_BASE + GPIO_IS_OFFSET))
#define GPIOC_IS_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOC APB IBE*/
#define GPIOC_IBE    ((GPIOIBE_TypeDef*) (GPIOC_BASE + GPIO_IBE_OFFSET))
#define GPIOC_IBE_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOC APB IEV*/
#define GPIOC_IEV    ((GPIOIEV_TypeDef*) (GPIOC_BASE + GPIO_IEV_OFFSET))
#define GPIOC_IEV_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOC APB IME*/
#define GPIOC_IM    ((GPIOIM_TypeDef*) (GPIOC_BASE + GPIO_IM_OFFSET))
#define GPIOC_IM_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOC APB RIS*/
#define GPIOC_RIS    ((GPIORIS_TypeDef*) (GPIOC_BASE + GPIO_RIS_OFFSET))
#define GPIOC_RIS_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOC APB MIS*/
#define GPIOC_MIS    ((GPIOMIS_TypeDef*) (GPIOC_BASE + GPIO_MIS_OFFSET))
#define GPIOC_MIS_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOC APB IC*/
#define GPIOC_ICR    ((GPIOICR_TypeDef*) (GPIOC_BASE + GPIO_ICR_OFFSET))
#define GPIOC_ICR_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOC APB AFSEL*/
#define GPIOC_AFSEL    ((GPIOAFSEL_TypeDef*) (GPIOC_BASE + GPIO_AFSEL_OFFSET))
#define GPIOC_AFSEL_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOC APB DRV2*/
#define GPIOC_DRR    ((GPIODRR_ARRAY_TypeDef*) (GPIOC_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOC APB DRV2*/
#define GPIOC_DR2R    ((GPIODR2R_TypeDef*) (GPIOC_BASE + GPIO_DR2R_OFFSET))
#define GPIOC_DR2R_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOC APB DRV4*/
#define GPIOC_DR4R    ((GPIODR4R_TypeDef*) (GPIOC_BASE + GPIO_DR4R_OFFSET))
#define GPIOC_DR4R_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOC APB DRV8*/
#define GPIOC_DR8R    ((GPIODR8R_TypeDef*) (GPIOC_BASE + GPIO_DR8R_OFFSET))
#define GPIOC_DR8R_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOC APB ODE*/
#define GPIOC_ODR    ((GPIOODR_TypeDef*) (GPIOC_BASE + GPIO_ODR_OFFSET))
#define GPIOC_ODR_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOC APB PUE*/
#define GPIOC_PUR    ((GPIOPUR_TypeDef*) (GPIOC_BASE + GPIO_PUR_OFFSET))
#define GPIOC_PUR_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOC APB PDE*/
#define GPIOC_PDR    ((GPIOPDR_TypeDef*) (GPIOC_BASE + GPIO_PDR_OFFSET))
#define GPIOC_PDR_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOC APB SLR*/
#define GPIOC_SLR    ((GPIOSLR_TypeDef*) (GPIOC_BASE + GPIO_SLR_OFFSET))
#define GPIOC_SLR_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOC APB DEN*/
#define GPIOC_DEN    ((GPIODEN_TypeDef*) (GPIOC_BASE + GPIO_DEN_OFFSET))
#define GPIOC_DEN_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOC APB LOCK*/
#define GPIOC_LOCK    ((GPIOLOCK_TypeDef*) (GPIOC_BASE + GPIO_LOCK_OFFSET))
#define GPIOC_LOCK_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOC APB CR*/
#define GPIOC_CR    ((GPIOCR_TypeDef*) (GPIOC_BASE + GPIO_CR_OFFSET))
#define GPIOC_CR_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOC APB AMSEL*/
#define GPIOC_AMSEL    ((GPIOAMSEL_TypeDef*) (GPIOC_BASE + GPIO_AMSEL_OFFSET))
#define GPIOC_AMSEL_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOC APB PCM*/
#define GPIOC_PCTL    ((GPIOPCTL_TypeDef*) (GPIOC_BASE + GPIO_PCTL_OFFSET))
#define GPIOC_PCTL_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOC APB ADCEN*/
#define GPIOC_ADCCTL    ((GPIOADCCTL_TypeDef*) (GPIOC_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOC_ADCCTL_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOC APB DMAEN*/
#define GPIOC_DMACTL    ((GPIODMACTL_TypeDef*) (GPIOC_BASE + GPIO_DMACTL_OFFSET))
#define GPIOC_DMACTL_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID4*/
#define GPIOC_PeriphID4    ((GPIOPeriphID4_TypeDef*) (GPIOC_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOC_PeriphID4_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 26 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID5*/
#define GPIOC_PeriphID5    ((GPIOPeriphID5_TypeDef*) (GPIOC_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOC_PeriphID5_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 27 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID6*/
#define GPIOC_PeriphID6    ((GPIOPeriphID6_TypeDef*) (GPIOC_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOC_PeriphID6_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 28 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID7*/
#define GPIOC_PeriphID7    ((GPIOPeriphID7_TypeDef*) (GPIOC_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOC_PeriphID7_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 29 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID0*/
#define GPIOC_PeriphID0    ((GPIOPeriphID0_TypeDef*) (GPIOC_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOC_PeriphID0_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 30 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID1*/
#define GPIOC_PeriphID1    ((GPIOPeriphID1_TypeDef*) (GPIOC_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOC_PeriphID1_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 31 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID2*/
#define GPIOC_PeriphID2    ((GPIOPeriphID2_TypeDef*) (GPIOC_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOC_PeriphID2_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOC APB PID3*/
#define GPIOC_PeriphID3    ((GPIOPeriphID3_TypeDef*) (GPIOC_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOC_PeriphID3_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 33 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOC APB CID0*/
#define GPIOC_CellID0    ((GPIOCellID0_TypeDef*) (GPIOC_BASE + GPIO_CellID0_OFFSET))
#define GPIOC_CellID0_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 34 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOC APB CID1*/
#define GPIOC_CellID1    ((GPIOCellID1_TypeDef*) (GPIOC_BASE + GPIO_CellID1_OFFSET))
#define GPIOC_CellID1_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 35 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOC APB CID2*/
#define GPIOC_CellID2    ((GPIOCellID2_TypeDef*) (GPIOC_BASE + GPIO_CellID2_OFFSET))
#define GPIOC_CellID2_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 36 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOC APB CID3*/
#define GPIOC_CellID3    ((GPIOCellID3_TypeDef*) (GPIOC_BASE + GPIO_CellID3_OFFSET))
#define GPIOC_CellID3_R    (*((volatile uint32_t *) (GPIOC_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEC_H_ */
