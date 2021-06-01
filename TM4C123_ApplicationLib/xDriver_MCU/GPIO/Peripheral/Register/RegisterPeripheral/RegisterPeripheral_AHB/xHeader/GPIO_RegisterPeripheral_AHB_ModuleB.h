/**
 *
 * @file GPIO_RegisterPeripheral_AHB_ModuleB.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEB_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEB_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOB_AHB    ((GPIO_TypeDef*) (GPIOB_AHB_BASE))
#define GPIOB_AHB_AUX    ((GPIO_AUX_TypeDef*) (GPIOB_AHB_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOB AHB DATA*/
#define GPIOB_AHB_DATA_MASK    ((GPIODATA_MASK_TypeDef*) (GPIOB_AHB_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOB_AHB_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOB_AHB_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOB_AHB_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOB_AHB_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOB_AHB_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOB_AHB_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOB_AHB_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOB_AHB_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOB_AHB_DATA    ((GPIODATA_TypeDef*) (GPIOB_AHB_BASE + GPIO_DATA_OFFSET))
#define GPIOB_AHB_DATA_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOB AHB DIR*/
#define GPIOB_AHB_DIR    ((GPIODIR_TypeDef*) (GPIOB_AHB_BASE + GPIO_DIR_OFFSET))
#define GPIOB_AHB_DIR_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOB AHB IS*/
#define GPIOB_AHB_IS    ((GPIOIS_TypeDef*) (GPIOB_AHB_BASE + GPIO_IS_OFFSET))
#define GPIOB_AHB_IS_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOB AHB IBE*/
#define GPIOB_AHB_IBE    ((GPIOIBE_TypeDef*) (GPIOB_AHB_BASE + GPIO_IBE_OFFSET))
#define GPIOB_AHB_IBE_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOB AHB IEV*/
#define GPIOB_AHB_IEV    ((GPIOIEV_TypeDef*) (GPIOB_AHB_BASE + GPIO_IEV_OFFSET))
#define GPIOB_AHB_IEV_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOB AHB IME*/
#define GPIOB_AHB_IM    ((GPIOIM_TypeDef*) (GPIOB_AHB_BASE + GPIO_IM_OFFSET))
#define GPIOB_AHB_IM_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOB AHB RIS*/
#define GPIOB_AHB_RIS    ((GPIORIS_TypeDef*) (GPIOB_AHB_BASE + GPIO_RIS_OFFSET))
#define GPIOB_AHB_RIS_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOB AHB MIS*/
#define GPIOB_AHB_MIS    ((GPIOMIS_TypeDef*) (GPIOB_AHB_BASE + GPIO_MIS_OFFSET))
#define GPIOB_AHB_MIS_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOB AHB IC*/
#define GPIOB_AHB_ICR    ((GPIOICR_TypeDef*) (GPIOB_AHB_BASE + GPIO_ICR_OFFSET))
#define GPIOB_AHB_ICR_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOB AHB AFSEL*/
#define GPIOB_AHB_AFSEL    ((GPIOAFSEL_TypeDef*) (GPIOB_AHB_BASE + GPIO_AFSEL_OFFSET))
#define GPIOB_AHB_AFSEL_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOB AHB DRV2*/
#define GPIOB_AHB_DRR    ((GPIODRR_ARRAY_TypeDef*) (GPIOB_AHB_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOB AHB DRV2*/
#define GPIOB_AHB_DR2R    ((GPIODR2R_TypeDef*) (GPIOB_AHB_BASE + GPIO_DR2R_OFFSET))
#define GPIOB_AHB_DR2R_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOB AHB DRV4*/
#define GPIOB_AHB_DR4R    ((GPIODR4R_TypeDef*) (GPIOB_AHB_BASE + GPIO_DR4R_OFFSET))
#define GPIOB_AHB_DR4R_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOB AHB DRV8*/
#define GPIOB_AHB_DR8R    ((GPIODR8R_TypeDef*) (GPIOB_AHB_BASE + GPIO_DR8R_OFFSET))
#define GPIOB_AHB_DR8R_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOB AHB ODE*/
#define GPIOB_AHB_ODR    ((GPIOODR_TypeDef*) (GPIOB_AHB_BASE + GPIO_ODR_OFFSET))
#define GPIOB_AHB_ODR_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOB AHB PUE*/
#define GPIOB_AHB_PUR    ((GPIOPUR_TypeDef*) (GPIOB_AHB_BASE + GPIO_PUR_OFFSET))
#define GPIOB_AHB_PUR_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOB AHB PDE*/
#define GPIOB_AHB_PDR    ((GPIOPDR_TypeDef*) (GPIOB_AHB_BASE + GPIO_PDR_OFFSET))
#define GPIOB_AHB_PDR_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOB AHB SLR*/
#define GPIOB_AHB_SLR    ((GPIOSLR_TypeDef*) (GPIOB_AHB_BASE + GPIO_SLR_OFFSET))
#define GPIOB_AHB_SLR_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOB AHB DEN*/
#define GPIOB_AHB_DEN    ((GPIODEN_TypeDef*) (GPIOB_AHB_BASE + GPIO_DEN_OFFSET))
#define GPIOB_AHB_DEN_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOB AHB LOCK*/
#define GPIOB_AHB_LOCK    ((GPIOLOCK_TypeDef*) (GPIOB_AHB_BASE + GPIO_LOCK_OFFSET))
#define GPIOB_AHB_LOCK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOB AHB CR*/
#define GPIOB_AHB_CR    ((GPIOCR_TypeDef*) (GPIOB_AHB_BASE + GPIO_CR_OFFSET))
#define GPIOB_AHB_CR_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOB AHB AMSEL*/
#define GPIOB_AHB_AMSEL    ((GPIOAMSEL_TypeDef*) (GPIOB_AHB_BASE + GPIO_AMSEL_OFFSET))
#define GPIOB_AHB_AMSEL_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOB AHB PCM*/
#define GPIOB_AHB_PCTL    ((GPIOPCTL_TypeDef*) (GPIOB_AHB_BASE + GPIO_PCTL_OFFSET))
#define GPIOB_AHB_PCTL_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOB AHB ADCEN*/
#define GPIOB_AHB_ADCCTL    ((GPIOADCCTL_TypeDef*) (GPIOB_AHB_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOB_AHB_ADCCTL_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOB AHB DMAEN*/
#define GPIOB_AHB_DMACTL    ((GPIODMACTL_TypeDef*) (GPIOB_AHB_BASE + GPIO_DMACTL_OFFSET))
#define GPIOB_AHB_DMACTL_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID4*/
#define GPIOB_AHB_PeriphID4    ((GPIOPeriphID4_TypeDef*) (GPIOB_AHB_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOB_AHB_PeriphID4_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 26 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID5*/
#define GPIOB_AHB_PeriphID5    ((GPIOPeriphID5_TypeDef*) (GPIOB_AHB_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOB_AHB_PeriphID5_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 27 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID6*/
#define GPIOB_AHB_PeriphID6    ((GPIOPeriphID6_TypeDef*) (GPIOB_AHB_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOB_AHB_PeriphID6_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 28 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID7*/
#define GPIOB_AHB_PeriphID7    ((GPIOPeriphID7_TypeDef*) (GPIOB_AHB_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOB_AHB_PeriphID7_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 29 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID0*/
#define GPIOB_AHB_PeriphID0    ((GPIOPeriphID0_TypeDef*) (GPIOB_AHB_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOB_AHB_PeriphID0_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 30 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID1*/
#define GPIOB_AHB_PeriphID1    ((GPIOPeriphID1_TypeDef*) (GPIOB_AHB_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOB_AHB_PeriphID1_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 31 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID2*/
#define GPIOB_AHB_PeriphID2    ((GPIOPeriphID2_TypeDef*) (GPIOB_AHB_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOB_AHB_PeriphID2_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID3*/
#define GPIOB_AHB_PeriphID3    ((GPIOPeriphID3_TypeDef*) (GPIOB_AHB_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOB_AHB_PeriphID3_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 33 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOB AHB CID0*/
#define GPIOB_AHB_CellID0    ((GPIOCellID0_TypeDef*) (GPIOB_AHB_BASE + GPIO_CellID0_OFFSET))
#define GPIOB_AHB_CellID0_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 34 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOB AHB CID1*/
#define GPIOB_AHB_CellID1    ((GPIOCellID1_TypeDef*) (GPIOB_AHB_BASE + GPIO_CellID1_OFFSET))
#define GPIOB_AHB_CellID1_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 35 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOB AHB CID2*/
#define GPIOB_AHB_CellID2    ((GPIOCellID2_TypeDef*) (GPIOB_AHB_BASE + GPIO_CellID2_OFFSET))
#define GPIOB_AHB_CellID2_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 36 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOB AHB CID3*/
#define GPIOB_AHB_CellID3    ((GPIOCellID3_TypeDef*) (GPIOB_AHB_BASE + GPIO_CellID3_OFFSET))
#define GPIOB_AHB_CellID3_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEB_H_ */
