/**
 *
 * @file GPIO_RegisterPeripheral_APB_ModuleA.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEA_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEA_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOA    ((GPIO_TypeDef*) (GPIOA_BASE))
#define GPIOA_AUX    ((GPIO_AUX_TypeDef*) (GPIOA_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOA APB DATA*/
#define GPIOA_DATA_MASK    ((GPIODATA_MASK_TypeDef*) (GPIOA_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOA_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOA_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOA_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOA_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOA_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOA_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOA_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOA_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOA_DATA    ((GPIODATA_TypeDef*) (GPIOA_BASE + GPIO_DATA_OFFSET))
#define GPIOA_DATA_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOA APB DIR*/
#define GPIOA_DIR    ((GPIODIR_TypeDef*) (GPIOA_BASE + GPIO_DIR_OFFSET))
#define GPIOA_DIR_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOA APB IS*/
#define GPIOA_IS    ((GPIOIS_TypeDef*) (GPIOA_BASE + GPIO_IS_OFFSET))
#define GPIOA_IS_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOA APB IBE*/
#define GPIOA_IBE    ((GPIOIBE_TypeDef*) (GPIOA_BASE + GPIO_IBE_OFFSET))
#define GPIOA_IBE_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOA APB IEV*/
#define GPIOA_IEV    ((GPIOIEV_TypeDef*) (GPIOA_BASE + GPIO_IEV_OFFSET))
#define GPIOA_IEV_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOA APB IME*/
#define GPIOA_IM    ((GPIOIM_TypeDef*) (GPIOA_BASE + GPIO_IM_OFFSET))
#define GPIOA_IM_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOA APB RIS*/
#define GPIOA_RIS    ((GPIORIS_TypeDef*) (GPIOA_BASE + GPIO_RIS_OFFSET))
#define GPIOA_RIS_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOA APB MIS*/
#define GPIOA_MIS    ((GPIOMIS_TypeDef*) (GPIOA_BASE + GPIO_MIS_OFFSET))
#define GPIOA_MIS_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOA APB IC*/
#define GPIOA_ICR    ((GPIOICR_TypeDef*) (GPIOA_BASE + GPIO_ICR_OFFSET))
#define GPIOA_ICR_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOA APB AFSEL*/
#define GPIOA_AFSEL    ((GPIOAFSEL_TypeDef*) (GPIOA_BASE + GPIO_AFSEL_OFFSET))
#define GPIOA_AFSEL_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOA APB DRV2*/
#define GPIOA_DRR    ((GPIODRR_ARRAY_TypeDef*) (GPIOA_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOA APB DRV2*/
#define GPIOA_DR2R    ((GPIODR2R_TypeDef*) (GPIOA_BASE + GPIO_DR2R_OFFSET))
#define GPIOA_DR2R_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOA APB DRV4*/
#define GPIOA_DR4R    ((GPIODR4R_TypeDef*) (GPIOA_BASE + GPIO_DR4R_OFFSET))
#define GPIOA_DR4R_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOA APB DRV8*/
#define GPIOA_DR8R    ((GPIODR8R_TypeDef*) (GPIOA_BASE + GPIO_DR8R_OFFSET))
#define GPIOA_DR8R_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOA APB ODE*/
#define GPIOA_ODR    ((GPIOODR_TypeDef*) (GPIOA_BASE + GPIO_ODR_OFFSET))
#define GPIOA_ODR_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOA APB PUE*/
#define GPIOA_PUR    ((GPIOPUR_TypeDef*) (GPIOA_BASE + GPIO_PUR_OFFSET))
#define GPIOA_PUR_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOA APB PDE*/
#define GPIOA_PDR    ((GPIOPDR_TypeDef*) (GPIOA_BASE + GPIO_PDR_OFFSET))
#define GPIOA_PDR_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOA APB SLR*/
#define GPIOA_SLR    ((GPIOSLR_TypeDef*) (GPIOA_BASE + GPIO_SLR_OFFSET))
#define GPIOA_SLR_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOA APB DEN*/
#define GPIOA_DEN    ((GPIODEN_TypeDef*) (GPIOA_BASE + GPIO_DEN_OFFSET))
#define GPIOA_DEN_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOA APB LOCK*/
#define GPIOA_LOCK    ((GPIOLOCK_TypeDef*) (GPIOA_BASE + GPIO_LOCK_OFFSET))
#define GPIOA_LOCK_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOA APB CR*/
#define GPIOA_CR    ((GPIOCR_TypeDef*) (GPIOA_BASE + GPIO_CR_OFFSET))
#define GPIOA_CR_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOA APB AMSEL*/
#define GPIOA_AMSEL    ((GPIOAMSEL_TypeDef*) (GPIOA_BASE + GPIO_AMSEL_OFFSET))
#define GPIOA_AMSEL_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOA APB PCM*/
#define GPIOA_PCTL    ((GPIOPCTL_TypeDef*) (GPIOA_BASE + GPIO_PCTL_OFFSET))
#define GPIOA_PCTL_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOA APB ADCEN*/
#define GPIOA_ADCCTL    ((GPIOADCCTL_TypeDef*) (GPIOA_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOA_ADCCTL_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOA APB DMAEN*/
#define GPIOA_DMACTL    ((GPIODMACTL_TypeDef*) (GPIOA_BASE + GPIO_DMACTL_OFFSET))
#define GPIOA_DMACTL_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOA APB PID4*/
#define GPIOA_PeriphID4    ((GPIOPeriphID4_TypeDef*) (GPIOA_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOA_PeriphID4_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 26 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOA APB PID5*/
#define GPIOA_PeriphID5    ((GPIOPeriphID5_TypeDef*) (GPIOA_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOA_PeriphID5_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 27 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOA APB PID6*/
#define GPIOA_PeriphID6    ((GPIOPeriphID6_TypeDef*) (GPIOA_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOA_PeriphID6_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 28 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOA APB PID7*/
#define GPIOA_PeriphID7    ((GPIOPeriphID7_TypeDef*) (GPIOA_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOA_PeriphID7_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 29 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOA APB PID0*/
#define GPIOA_PeriphID0    ((GPIOPeriphID0_TypeDef*) (GPIOA_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOA_PeriphID0_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 30 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOA APB PID1*/
#define GPIOA_PeriphID1    ((GPIOPeriphID1_TypeDef*) (GPIOA_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOA_PeriphID1_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 31 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOA APB PID2*/
#define GPIOA_PeriphID2    ((GPIOPeriphID2_TypeDef*) (GPIOA_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOA_PeriphID2_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOA APB PID3*/
#define GPIOA_PeriphID3    ((GPIOPeriphID3_TypeDef*) (GPIOA_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOA_PeriphID3_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 33 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOA APB CID0*/
#define GPIOA_CellID0    ((GPIOCellID0_TypeDef*) (GPIOA_BASE + GPIO_CellID0_OFFSET))
#define GPIOA_CellID0_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 34 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOA APB CID1*/
#define GPIOA_CellID1    ((GPIOCellID1_TypeDef*) (GPIOA_BASE + GPIO_CellID1_OFFSET))
#define GPIOA_CellID1_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 35 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOA APB CID2*/
#define GPIOA_CellID2    ((GPIOCellID2_TypeDef*) (GPIOA_BASE + GPIO_CellID2_OFFSET))
#define GPIOA_CellID2_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 36 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOA APB CID3*/
#define GPIOA_CellID3    ((GPIOCellID3_TypeDef*) (GPIOA_BASE + GPIO_CellID3_OFFSET))
#define GPIOA_CellID3_R    (*((volatile uint32_t *) (GPIOA_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEA_H_ */
