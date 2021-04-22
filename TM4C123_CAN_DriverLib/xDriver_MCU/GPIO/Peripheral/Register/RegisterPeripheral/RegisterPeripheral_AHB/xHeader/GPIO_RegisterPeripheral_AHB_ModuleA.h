/**
 *
 * @file GPIO_RegisterPeripheral_AHB_ModuleA.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEA_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEA_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOA_AHB    ((GPIO_TypeDef*) (GPIOA_AHB_BASE))
#define GPIOA_AHB_AUX    ((GPIO_AUX_TypeDef*) (GPIOA_AHB_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOA AHB DATA*/
#define GPIOA_AHB_DATA_MASK    ((GPIODATA_MASK_TypeDef*) (GPIOA_AHB_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOA_AHB_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOA_AHB_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOA_AHB_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOA_AHB_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOA_AHB_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOA_AHB_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOA_AHB_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOA_AHB_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOA_AHB_DATA    ((GPIODATA_TypeDef*) (GPIOA_AHB_BASE + GPIO_DATA_OFFSET))
#define GPIOA_AHB_DATA_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOA AHB DIR*/
#define GPIOA_AHB_DIR    ((GPIODIR_TypeDef*) (GPIOA_AHB_BASE + GPIO_DIR_OFFSET))
#define GPIOA_AHB_DIR_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOA AHB IS*/
#define GPIOA_AHB_IS    ((GPIOIS_TypeDef*) (GPIOA_AHB_BASE + GPIO_IS_OFFSET))
#define GPIOA_AHB_IS_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOA AHB IBE*/
#define GPIOA_AHB_IBE    ((GPIOIBE_TypeDef*) (GPIOA_AHB_BASE + GPIO_IBE_OFFSET))
#define GPIOA_AHB_IBE_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOA AHB IEV*/
#define GPIOA_AHB_IEV    ((GPIOIEV_TypeDef*) (GPIOA_AHB_BASE + GPIO_IEV_OFFSET))
#define GPIOA_AHB_IEV_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOA AHB IME*/
#define GPIOA_AHB_IM    ((GPIOIM_TypeDef*) (GPIOA_AHB_BASE + GPIO_IM_OFFSET))
#define GPIOA_AHB_IM_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOA AHB RIS*/
#define GPIOA_AHB_RIS    ((GPIORIS_TypeDef*) (GPIOA_AHB_BASE + GPIO_RIS_OFFSET))
#define GPIOA_AHB_RIS_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOA AHB MIS*/
#define GPIOA_AHB_MIS    ((GPIOMIS_TypeDef*) (GPIOA_AHB_BASE + GPIO_MIS_OFFSET))
#define GPIOA_AHB_MIS_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOA AHB IC*/
#define GPIOA_AHB_ICR    ((GPIOICR_TypeDef*) (GPIOA_AHB_BASE + GPIO_ICR_OFFSET))
#define GPIOA_AHB_ICR_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOA AHB AFSEL*/
#define GPIOA_AHB_AFSEL    ((GPIOAFSEL_TypeDef*) (GPIOA_AHB_BASE + GPIO_AFSEL_OFFSET))
#define GPIOA_AHB_AFSEL_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOA AHB DRV2*/
#define GPIOA_AHB_DRR    ((GPIODRR_ARRAY_TypeDef*) (GPIOA_AHB_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOA AHB DRV2*/
#define GPIOA_AHB_DR2R    ((GPIODR2R_TypeDef*) (GPIOA_AHB_BASE + GPIO_DR2R_OFFSET))
#define GPIOA_AHB_DR2R_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOA AHB DRV4*/
#define GPIOA_AHB_DR4R    ((GPIODR4R_TypeDef*) (GPIOA_AHB_BASE + GPIO_DR4R_OFFSET))
#define GPIOA_AHB_DR4R_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOA AHB DRV8*/
#define GPIOA_AHB_DR8R    ((GPIODR8R_TypeDef*) (GPIOA_AHB_BASE + GPIO_DR8R_OFFSET))
#define GPIOA_AHB_DR8R_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOA AHB ODE*/
#define GPIOA_AHB_ODR    ((GPIOODR_TypeDef*) (GPIOA_AHB_BASE + GPIO_ODR_OFFSET))
#define GPIOA_AHB_ODR_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOA AHB PUE*/
#define GPIOA_AHB_PUR    ((GPIOPUR_TypeDef*) (GPIOA_AHB_BASE + GPIO_PUR_OFFSET))
#define GPIOA_AHB_PUR_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOA AHB PDE*/
#define GPIOA_AHB_PDR    ((GPIOPDR_TypeDef*) (GPIOA_AHB_BASE + GPIO_PDR_OFFSET))
#define GPIOA_AHB_PDR_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOA AHB SLR*/
#define GPIOA_AHB_SLR    ((GPIOSLR_TypeDef*) (GPIOA_AHB_BASE + GPIO_SLR_OFFSET))
#define GPIOA_AHB_SLR_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOA AHB DEN*/
#define GPIOA_AHB_DEN    ((GPIODEN_TypeDef*) (GPIOA_AHB_BASE + GPIO_DEN_OFFSET))
#define GPIOA_AHB_DEN_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOA AHB LOCK*/
#define GPIOA_AHB_LOCK    ((GPIOLOCK_TypeDef*) (GPIOA_AHB_BASE + GPIO_LOCK_OFFSET))
#define GPIOA_AHB_LOCK_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOA AHB CR*/
#define GPIOA_AHB_CR    ((GPIOCR_TypeDef*) (GPIOA_AHB_BASE + GPIO_CR_OFFSET))
#define GPIOA_AHB_CR_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOA AHB AMSEL*/
#define GPIOA_AHB_AMSEL    ((GPIOAMSEL_TypeDef*) (GPIOA_AHB_BASE + GPIO_AMSEL_OFFSET))
#define GPIOA_AHB_AMSEL_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOA AHB PCM*/
#define GPIOA_AHB_PCTL    ((GPIOPCTL_TypeDef*) (GPIOA_AHB_BASE + GPIO_PCTL_OFFSET))
#define GPIOA_AHB_PCTL_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOA AHB ADCEN*/
#define GPIOA_AHB_ADCCTL    ((GPIOADCCTL_TypeDef*) (GPIOA_AHB_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOA_AHB_ADCCTL_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOA AHB DMAEN*/
#define GPIOA_AHB_DMACTL    ((GPIODMACTL_TypeDef*) (GPIOA_AHB_BASE + GPIO_DMACTL_OFFSET))
#define GPIOA_AHB_DMACTL_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOA AHB PID4*/
#define GPIOA_AHB_PeriphID4    ((GPIOPeriphID4_TypeDef*) (GPIOA_AHB_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOA_AHB_PeriphID4_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 26 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOA AHB PID5*/
#define GPIOA_AHB_PeriphID5    ((GPIOPeriphID5_TypeDef*) (GPIOA_AHB_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOA_AHB_PeriphID5_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 27 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOA AHB PID6*/
#define GPIOA_AHB_PeriphID6    ((GPIOPeriphID6_TypeDef*) (GPIOA_AHB_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOA_AHB_PeriphID6_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 28 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOA AHB PID7*/
#define GPIOA_AHB_PeriphID7    ((GPIOPeriphID7_TypeDef*) (GPIOA_AHB_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOA_AHB_PeriphID7_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 29 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOA AHB PID0*/
#define GPIOA_AHB_PeriphID0    ((GPIOPeriphID0_TypeDef*) (GPIOA_AHB_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOA_AHB_PeriphID0_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 30 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOA AHB PID1*/
#define GPIOA_AHB_PeriphID1    ((GPIOPeriphID1_TypeDef*) (GPIOA_AHB_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOA_AHB_PeriphID1_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 31 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOA AHB PID2*/
#define GPIOA_AHB_PeriphID2    ((GPIOPeriphID2_TypeDef*) (GPIOA_AHB_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOA_AHB_PeriphID2_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOA AHB PID3*/
#define GPIOA_AHB_PeriphID3    ((GPIOPeriphID3_TypeDef*) (GPIOA_AHB_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOA_AHB_PeriphID3_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 33 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOA AHB CID0*/
#define GPIOA_AHB_CellID0    ((GPIOCellID0_TypeDef*) (GPIOA_AHB_BASE + GPIO_CellID0_OFFSET))
#define GPIOA_AHB_CellID0_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 34 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOA AHB CID1*/
#define GPIOA_AHB_CellID1    ((GPIOCellID1_TypeDef*) (GPIOA_AHB_BASE + GPIO_CellID1_OFFSET))
#define GPIOA_AHB_CellID1_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 35 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOA AHB CID2*/
#define GPIOA_AHB_CellID2    ((GPIOCellID2_TypeDef*) (GPIOA_AHB_BASE + GPIO_CellID2_OFFSET))
#define GPIOA_AHB_CellID2_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 36 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOA AHB CID3*/
#define GPIOA_AHB_CellID3    ((GPIOCellID3_TypeDef*) (GPIOA_AHB_BASE + GPIO_CellID3_OFFSET))
#define GPIOA_AHB_CellID3_R    (*((volatile uint32_t *) (GPIOA_AHB_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEA_H_ */
