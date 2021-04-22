/**
 *
 * @file GPIO_RegisterPeripheral_APB_ModuleB.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEB_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEB_H_

#define GPIOB_APB    ((GPIO_TypeDef*) (GPIOB_APB_BASE))
#define GPIOB_APB_AUX    ((GPIO_AUX_TypeDef*) (GPIOB_APB_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOB APB DATA*/
#define GPIOB_APB_DATA_MASK    ((GPIODATA_MASK_TypeDef*) (GPIOB_APB_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOB_APB_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOB_APB_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOB_APB_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOB_APB_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOB_APB_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOB_APB_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOB_APB_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOB_APB_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOB_APB_DATA    ((GPIODATA_TypeDef*) (GPIOB_APB_BASE + GPIO_DATA_OFFSET))
#define GPIOB_APB_DATA_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOB APB DIR*/
#define GPIOB_APB_DIR    ((GPIODIR_TypeDef*) (GPIOB_APB_BASE + GPIO_DIR_OFFSET))
#define GPIOB_APB_DIR_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOB APB IS*/
#define GPIOB_APB_IS    ((GPIOIS_TypeDef*) (GPIOB_APB_BASE + GPIO_IS_OFFSET))
#define GPIOB_APB_IS_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOB APB IBE*/
#define GPIOB_APB_IBE    ((GPIOIBE_TypeDef*) (GPIOB_APB_BASE + GPIO_IBE_OFFSET))
#define GPIOB_APB_IBE_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOB APB IEV*/
#define GPIOB_APB_IEV    ((GPIOIEV_TypeDef*) (GPIOB_APB_BASE + GPIO_IEV_OFFSET))
#define GPIOB_APB_IEV_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOB APB IME*/
#define GPIOB_APB_IM    ((GPIOIM_TypeDef*) (GPIOB_APB_BASE + GPIO_IM_OFFSET))
#define GPIOB_APB_IM_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOB APB RIS*/
#define GPIOB_APB_RIS    ((GPIORIS_TypeDef*) (GPIOB_APB_BASE + GPIO_RIS_OFFSET))
#define GPIOB_APB_RIS_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOB APB MIS*/
#define GPIOB_APB_MIS    ((GPIOMIS_TypeDef*) (GPIOB_APB_BASE + GPIO_MIS_OFFSET))
#define GPIOB_APB_MIS_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOB APB IC*/
#define GPIOB_APB_ICR    ((GPIOICR_TypeDef*) (GPIOB_APB_BASE + GPIO_ICR_OFFSET))
#define GPIOB_APB_ICR_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOB APB AFSEL*/
#define GPIOB_APB_AFSEL    ((GPIOAFSEL_TypeDef*) (GPIOB_APB_BASE + GPIO_AFSEL_OFFSET))
#define GPIOB_APB_AFSEL_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOB APB DRV2*/
#define GPIOB_APB_DRR    ((GPIODRR_ARRAY_TypeDef*) (GPIOB_APB_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOB APB DRV2*/
#define GPIOB_APB_DR2R    ((GPIODR2R_TypeDef*) (GPIOB_APB_BASE + GPIO_DR2R_OFFSET))
#define GPIOB_APB_DR2R_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOB APB DRV4*/
#define GPIOB_APB_DR4R    ((GPIODR4R_TypeDef*) (GPIOB_APB_BASE + GPIO_DR4R_OFFSET))
#define GPIOB_APB_DR4R_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOB APB DRV8*/
#define GPIOB_APB_DR8R    ((GPIODR8R_TypeDef*) (GPIOB_APB_BASE + GPIO_DR8R_OFFSET))
#define GPIOB_APB_DR8R_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOB APB ODE*/
#define GPIOB_APB_ODR    ((GPIOODR_TypeDef*) (GPIOB_APB_BASE + GPIO_ODR_OFFSET))
#define GPIOB_APB_ODR_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOB APB PUE*/
#define GPIOB_APB_PUR    ((GPIOPUR_TypeDef*) (GPIOB_APB_BASE + GPIO_PUR_OFFSET))
#define GPIOB_APB_PUR_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOB APB PDE*/
#define GPIOB_APB_PDR    ((GPIOPDR_TypeDef*) (GPIOB_APB_BASE + GPIO_PDR_OFFSET))
#define GPIOB_APB_PDR_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOB APB SLR*/
#define GPIOB_APB_SLR    ((GPIOSLR_TypeDef*) (GPIOB_APB_BASE + GPIO_SLR_OFFSET))
#define GPIOB_APB_SLR_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOB APB DEN*/
#define GPIOB_APB_DEN    ((GPIODEN_TypeDef*) (GPIOB_APB_BASE + GPIO_DEN_OFFSET))
#define GPIOB_APB_DEN_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOB APB LOCK*/
#define GPIOB_APB_LOCK    ((GPIOLOCK_TypeDef*) (GPIOB_APB_BASE + GPIO_LOCK_OFFSET))
#define GPIOB_APB_LOCK_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOB APB CR*/
#define GPIOB_APB_CR    ((GPIOCR_TypeDef*) (GPIOB_APB_BASE + GPIO_CR_OFFSET))
#define GPIOB_APB_CR_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOB APB AMSEL*/
#define GPIOB_APB_AMSEL    ((GPIOAMSEL_TypeDef*) (GPIOB_APB_BASE + GPIO_AMSEL_OFFSET))
#define GPIOB_APB_AMSEL_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOB APB PCM*/
#define GPIOB_APB_PCTL    ((GPIOPCTL_TypeDef*) (GPIOB_APB_BASE + GPIO_PCTL_OFFSET))
#define GPIOB_APB_PCTL_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOB APB ADCEN*/
#define GPIOB_APB_ADCCTL    ((GPIOADCCTL_TypeDef*) (GPIOB_APB_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOB_APB_ADCCTL_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOB APB DMAEN*/
#define GPIOB_APB_DMACTL    ((GPIODMACTL_TypeDef*) (GPIOB_APB_BASE + GPIO_DMACTL_OFFSET))
#define GPIOB_APB_DMACTL_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID4*/
#define GPIOB_APB_PeriphID4    ((GPIOPeriphID4_TypeDef*) (GPIOB_APB_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOB_APB_PeriphID4_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 26 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID5*/
#define GPIOB_APB_PeriphID5    ((GPIOPeriphID5_TypeDef*) (GPIOB_APB_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOB_APB_PeriphID5_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 27 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID6*/
#define GPIOB_APB_PeriphID6    ((GPIOPeriphID6_TypeDef*) (GPIOB_APB_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOB_APB_PeriphID6_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 28 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID7*/
#define GPIOB_APB_PeriphID7    ((GPIOPeriphID7_TypeDef*) (GPIOB_APB_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOB_APB_PeriphID7_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 29 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID0*/
#define GPIOB_APB_PeriphID0    ((GPIOPeriphID0_TypeDef*) (GPIOB_APB_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOB_APB_PeriphID0_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 30 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID1*/
#define GPIOB_APB_PeriphID1    ((GPIOPeriphID1_TypeDef*) (GPIOB_APB_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOB_APB_PeriphID1_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 31 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID2*/
#define GPIOB_APB_PeriphID2    ((GPIOPeriphID2_TypeDef*) (GPIOB_APB_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOB_APB_PeriphID2_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID3*/
#define GPIOB_APB_PeriphID3    ((GPIOPeriphID3_TypeDef*) (GPIOB_APB_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOB_APB_PeriphID3_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 33 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOB APB CID0*/
#define GPIOB_APB_CellID0    ((GPIOCellID0_TypeDef*) (GPIOB_APB_BASE + GPIO_CellID0_OFFSET))
#define GPIOB_APB_CellID0_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 34 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOB APB CID1*/
#define GPIOB_APB_CellID1    ((GPIOCellID1_TypeDef*) (GPIOB_APB_BASE + GPIO_CellID1_OFFSET))
#define GPIOB_APB_CellID1_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 35 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOB APB CID2*/
#define GPIOB_APB_CellID2    ((GPIOCellID2_TypeDef*) (GPIOB_APB_BASE + GPIO_CellID2_OFFSET))
#define GPIOB_APB_CellID2_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 36 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOB APB CID3*/
#define GPIOB_APB_CellID3    ((GPIOCellID3_TypeDef*) (GPIOB_APB_BASE + GPIO_CellID3_OFFSET))
#define GPIOB_APB_CellID3_R    (*((volatile uint32_t *) (GPIOB_APB_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEB_H_ */
