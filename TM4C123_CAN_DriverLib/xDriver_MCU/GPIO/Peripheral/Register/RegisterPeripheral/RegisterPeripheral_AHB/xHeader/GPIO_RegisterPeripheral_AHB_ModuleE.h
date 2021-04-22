/**
 *
 * @file GPIO_RegisterPeripheral_AHB_ModuleE.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEE_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOE_AHB    ((GPIO_TypeDef*) (GPIOE_AHB_BASE))
#define GPIOE_AHB_AUX    ((GPIO_AUX_TypeDef*) (GPIOE_AHB_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOC AHB DATA*/
#define GPIOE_AHB_DATA_MASK    ((GPIODATA_MASK_TypeDef*) (GPIOE_AHB_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOE_AHB_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOE_AHB_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOE_AHB_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOE_AHB_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOE_AHB_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOE_AHB_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOE_AHB_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOE_AHB_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOE_AHB_DATA    ((GPIODATA_TypeDef*) (GPIOE_AHB_BASE + GPIO_DATA_OFFSET))
#define GPIOE_AHB_DATA_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOC AHB DIR*/
#define GPIOE_AHB_DIR    ((GPIODIR_TypeDef*) (GPIOE_AHB_BASE + GPIO_DIR_OFFSET))
#define GPIOE_AHB_DIR_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOC AHB IS*/
#define GPIOE_AHB_IS    ((GPIOIS_TypeDef*) (GPIOE_AHB_BASE + GPIO_IS_OFFSET))
#define GPIOE_AHB_IS_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOC AHB IBE*/
#define GPIOE_AHB_IBE    ((GPIOIBE_TypeDef*) (GPIOE_AHB_BASE + GPIO_IBE_OFFSET))
#define GPIOE_AHB_IBE_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOC AHB IEV*/
#define GPIOE_AHB_IEV    ((GPIOIEV_TypeDef*) (GPIOE_AHB_BASE + GPIO_IEV_OFFSET))
#define GPIOE_AHB_IEV_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOC AHB IME*/
#define GPIOE_AHB_IM    ((GPIOIM_TypeDef*) (GPIOE_AHB_BASE + GPIO_IM_OFFSET))
#define GPIOE_AHB_IM_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOC AHB RIS*/
#define GPIOE_AHB_RIS    ((GPIORIS_TypeDef*) (GPIOE_AHB_BASE + GPIO_RIS_OFFSET))
#define GPIOE_AHB_RIS_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOC AHB MIS*/
#define GPIOE_AHB_MIS    ((GPIOMIS_TypeDef*) (GPIOE_AHB_BASE + GPIO_MIS_OFFSET))
#define GPIOE_AHB_MIS_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOC AHB IC*/
#define GPIOE_AHB_ICR    ((GPIOICR_TypeDef*) (GPIOE_AHB_BASE + GPIO_ICR_OFFSET))
#define GPIOE_AHB_ICR_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOC AHB AFSEL*/
#define GPIOE_AHB_AFSEL    ((GPIOAFSEL_TypeDef*) (GPIOE_AHB_BASE + GPIO_AFSEL_OFFSET))
#define GPIOE_AHB_AFSEL_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOC AHB DRV2*/
#define GPIOE_AHB_DRR    ((GPIODRR_ARRAY_TypeDef*) (GPIOE_AHB_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOC AHB DRV2*/
#define GPIOE_AHB_DR2R    ((GPIODR2R_TypeDef*) (GPIOE_AHB_BASE + GPIO_DR2R_OFFSET))
#define GPIOE_AHB_DR2R_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOC AHB DRV4*/
#define GPIOE_AHB_DR4R    ((GPIODR4R_TypeDef*) (GPIOE_AHB_BASE + GPIO_DR4R_OFFSET))
#define GPIOE_AHB_DR4R_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOC AHB DRV8*/
#define GPIOE_AHB_DR8R    ((GPIODR8R_TypeDef*) (GPIOE_AHB_BASE + GPIO_DR8R_OFFSET))
#define GPIOE_AHB_DR8R_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOC AHB ODE*/
#define GPIOE_AHB_ODR    ((GPIOODR_TypeDef*) (GPIOE_AHB_BASE + GPIO_ODR_OFFSET))
#define GPIOE_AHB_ODR_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOC AHB PUE*/
#define GPIOE_AHB_PUR    ((GPIOPUR_TypeDef*) (GPIOE_AHB_BASE + GPIO_PUR_OFFSET))
#define GPIOE_AHB_PUR_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOC AHB PDE*/
#define GPIOE_AHB_PDR    ((GPIOPDR_TypeDef*) (GPIOE_AHB_BASE + GPIO_PDR_OFFSET))
#define GPIOE_AHB_PDR_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOC AHB SLR*/
#define GPIOE_AHB_SLR    ((GPIOSLR_TypeDef*) (GPIOE_AHB_BASE + GPIO_SLR_OFFSET))
#define GPIOE_AHB_SLR_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOC AHB DEN*/
#define GPIOE_AHB_DEN    ((GPIODEN_TypeDef*) (GPIOE_AHB_BASE + GPIO_DEN_OFFSET))
#define GPIOE_AHB_DEN_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOC AHB LOCK*/
#define GPIOE_AHB_LOCK    ((GPIOLOCK_TypeDef*) (GPIOE_AHB_BASE + GPIO_LOCK_OFFSET))
#define GPIOE_AHB_LOCK_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOC AHB CR*/
#define GPIOE_AHB_CR    ((GPIOCR_TypeDef*) (GPIOE_AHB_BASE + GPIO_CR_OFFSET))
#define GPIOE_AHB_CR_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOC AHB AMSEL*/
#define GPIOE_AHB_AMSEL    ((GPIOAMSEL_TypeDef*) (GPIOE_AHB_BASE + GPIO_AMSEL_OFFSET))
#define GPIOE_AHB_AMSEL_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOC AHB PCM*/
#define GPIOE_AHB_PCTL    ((GPIOPCTL_TypeDef*) (GPIOE_AHB_BASE + GPIO_PCTL_OFFSET))
#define GPIOE_AHB_PCTL_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOC AHB ADCEN*/
#define GPIOE_AHB_ADCCTL    ((GPIOADCCTL_TypeDef*) (GPIOE_AHB_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOE_AHB_ADCCTL_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOC AHB DMAEN*/
#define GPIOE_AHB_DMACTL    ((GPIODMACTL_TypeDef*) (GPIOE_AHB_BASE + GPIO_DMACTL_OFFSET))
#define GPIOE_AHB_DMACTL_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOC AHB PID4*/
#define GPIOE_AHB_PeriphID4    ((GPIOPeriphID4_TypeDef*) (GPIOE_AHB_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOE_AHB_PeriphID4_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 26 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOC AHB PID5*/
#define GPIOE_AHB_PeriphID5    ((GPIOPeriphID5_TypeDef*) (GPIOE_AHB_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOE_AHB_PeriphID5_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 27 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOC AHB PID6*/
#define GPIOE_AHB_PeriphID6    ((GPIOPeriphID6_TypeDef*) (GPIOE_AHB_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOE_AHB_PeriphID6_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 28 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOC AHB PID7*/
#define GPIOE_AHB_PeriphID7    ((GPIOPeriphID7_TypeDef*) (GPIOE_AHB_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOE_AHB_PeriphID7_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 29 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOC AHB PID0*/
#define GPIOE_AHB_PeriphID0    ((GPIOPeriphID0_TypeDef*) (GPIOE_AHB_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOE_AHB_PeriphID0_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 30 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOC AHB PID1*/
#define GPIOE_AHB_PeriphID1    ((GPIOPeriphID1_TypeDef*) (GPIOE_AHB_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOE_AHB_PeriphID1_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 31 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOC AHB PID2*/
#define GPIOE_AHB_PeriphID2    ((GPIOPeriphID2_TypeDef*) (GPIOE_AHB_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOE_AHB_PeriphID2_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOC AHB PID3*/
#define GPIOE_AHB_PeriphID3    ((GPIOPeriphID3_TypeDef*) (GPIOE_AHB_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOE_AHB_PeriphID3_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 33 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOC AHB CID0*/
#define GPIOE_AHB_CellID0    ((GPIOCellID0_TypeDef*) (GPIOE_AHB_BASE + GPIO_CellID0_OFFSET))
#define GPIOE_AHB_CellID0_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 34 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOC AHB CID1*/
#define GPIOE_AHB_CellID1    ((GPIOCellID1_TypeDef*) (GPIOE_AHB_BASE + GPIO_CellID1_OFFSET))
#define GPIOE_AHB_CellID1_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 35 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOC AHB CID2*/
#define GPIOE_AHB_CellID2    ((GPIOCellID2_TypeDef*) (GPIOE_AHB_BASE + GPIO_CellID2_OFFSET))
#define GPIOE_AHB_CellID2_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 36 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOC AHB CID3*/
#define GPIOE_AHB_CellID3    ((GPIOCellID3_TypeDef*) (GPIOE_AHB_BASE + GPIO_CellID3_OFFSET))
#define GPIOE_AHB_CellID3_R    (*((volatile uint32_t *) (GPIOE_AHB_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEE_H_ */
