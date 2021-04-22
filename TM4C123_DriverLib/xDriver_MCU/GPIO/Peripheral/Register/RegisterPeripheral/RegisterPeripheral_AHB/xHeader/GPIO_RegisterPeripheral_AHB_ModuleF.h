/**
 *
 * @file GPIO_RegisterPeripheral_AHB_ModuleF.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEF_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEF_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOF_AHB    ((GPIO_TypeDef*) (GPIOF_AHB_BASE))
#define GPIOF_AHB_AUX    ((GPIO_AUX_TypeDef*) (GPIOF_AHB_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOF AHB DATA*/
#define GPIOF_AHB_DATA_MASK    ((GPIODATA_MASK_TypeDef*) (GPIOF_AHB_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOF_AHB_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOF_AHB_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOF_AHB_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOF_AHB_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOF_AHB_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOF_AHB_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOF_AHB_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOF_AHB_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOF_AHB_DATA    ((GPIODATA_TypeDef*) (GPIOF_AHB_BASE + GPIO_DATA_OFFSET))
#define GPIOF_AHB_DATA_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOF AHB DIR*/
#define GPIOF_AHB_DIR    ((GPIODIR_TypeDef*) (GPIOF_AHB_BASE + GPIO_DIR_OFFSET))
#define GPIOF_AHB_DIR_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOF AHB IS*/
#define GPIOF_AHB_IS    ((GPIOIS_TypeDef*) (GPIOF_AHB_BASE + GPIO_IS_OFFSET))
#define GPIOF_AHB_IS_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOF AHB IBE*/
#define GPIOF_AHB_IBE    ((GPIOIBE_TypeDef*) (GPIOF_AHB_BASE + GPIO_IBE_OFFSET))
#define GPIOF_AHB_IBE_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOF AHB IEV*/
#define GPIOF_AHB_IEV    ((GPIOIEV_TypeDef*) (GPIOF_AHB_BASE + GPIO_IEV_OFFSET))
#define GPIOF_AHB_IEV_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOF AHB IME*/
#define GPIOF_AHB_IM    ((GPIOIM_TypeDef*) (GPIOF_AHB_BASE + GPIO_IM_OFFSET))
#define GPIOF_AHB_IM_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOF AHB RIS*/
#define GPIOF_AHB_RIS    ((GPIORIS_TypeDef*) (GPIOF_AHB_BASE + GPIO_RIS_OFFSET))
#define GPIOF_AHB_RIS_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOF AHB MIS*/
#define GPIOF_AHB_MIS    ((GPIOMIS_TypeDef*) (GPIOF_AHB_BASE + GPIO_MIS_OFFSET))
#define GPIOF_AHB_MIS_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOF AHB IC*/
#define GPIOF_AHB_ICR    ((GPIOICR_TypeDef*) (GPIOF_AHB_BASE + GPIO_ICR_OFFSET))
#define GPIOF_AHB_ICR_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 FFSEL *********************************************
 ******************************************************************************************/
/* GPIOF AHB AFSEL*/
#define GPIOF_AHB_FFSEL    ((GPIOFFSEL_TypeDef*) (GPIOF_AHB_BASE + GPIO_FFSEL_OFFSET))
#define GPIOF_AHB_FFSEL_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_FFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOF AHB DRV2*/
#define GPIOF_AHB_DRR    ((GPIODRR_ARRAY_TypeDef*) (GPIOF_AHB_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOF AHB DRV2*/
#define GPIOF_AHB_DR2R    ((GPIODR2R_TypeDef*) (GPIOF_AHB_BASE + GPIO_DR2R_OFFSET))
#define GPIOF_AHB_DR2R_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOF AHB DRV4*/
#define GPIOF_AHB_DR4R    ((GPIODR4R_TypeDef*) (GPIOF_AHB_BASE + GPIO_DR4R_OFFSET))
#define GPIOF_AHB_DR4R_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOF AHB DRV8*/
#define GPIOF_AHB_DR8R    ((GPIODR8R_TypeDef*) (GPIOF_AHB_BASE + GPIO_DR8R_OFFSET))
#define GPIOF_AHB_DR8R_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOF AHB ODE*/
#define GPIOF_AHB_ODR    ((GPIOODR_TypeDef*) (GPIOF_AHB_BASE + GPIO_ODR_OFFSET))
#define GPIOF_AHB_ODR_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOF AHB PUE*/
#define GPIOF_AHB_PUR    ((GPIOPUR_TypeDef*) (GPIOF_AHB_BASE + GPIO_PUR_OFFSET))
#define GPIOF_AHB_PUR_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOF AHB PDE*/
#define GPIOF_AHB_PDR    ((GPIOPDR_TypeDef*) (GPIOF_AHB_BASE + GPIO_PDR_OFFSET))
#define GPIOF_AHB_PDR_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOF AHB SLR*/
#define GPIOF_AHB_SLR    ((GPIOSLR_TypeDef*) (GPIOF_AHB_BASE + GPIO_SLR_OFFSET))
#define GPIOF_AHB_SLR_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOF AHB DEN*/
#define GPIOF_AHB_DEN    ((GPIODEN_TypeDef*) (GPIOF_AHB_BASE + GPIO_DEN_OFFSET))
#define GPIOF_AHB_DEN_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOF AHB LOCK*/
#define GPIOF_AHB_LOCK    ((GPIOLOCK_TypeDef*) (GPIOF_AHB_BASE + GPIO_LOCK_OFFSET))
#define GPIOF_AHB_LOCK_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOF AHB CR*/
#define GPIOF_AHB_CR    ((GPIOCR_TypeDef*) (GPIOF_AHB_BASE + GPIO_CR_OFFSET))
#define GPIOF_AHB_CR_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOF AHB AMSEL*/
#define GPIOF_AHB_AFSEL    ((GPIOAFSEL_TypeDef*) (GPIOF_AHB_BASE + GPIO_AFSEL_OFFSET))
#define GPIOF_AHB_AFSEL_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOF AHB PCM*/
#define GPIOF_AHB_PCTL    ((GPIOPCTL_TypeDef*) (GPIOF_AHB_BASE + GPIO_PCTL_OFFSET))
#define GPIOF_AHB_PCTL_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 FDCCTL *********************************************
 ******************************************************************************************/
/* GPIOF AHB ADCEN*/
#define GPIOF_AHB_FDCCTL    ((GPIOFDCCTL_TypeDef*) (GPIOF_AHB_BASE + GPIO_FDCCTL_OFFSET))
#define GPIOF_AHB_FDCCTL_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_FDCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOF AHB DMAEN*/
#define GPIOF_AHB_DMACTL    ((GPIODMACTL_TypeDef*) (GPIOF_AHB_BASE + GPIO_DMACTL_OFFSET))
#define GPIOF_AHB_DMACTL_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOF AHB PID4*/
#define GPIOF_AHB_PeriphID4    ((GPIOPeriphID4_TypeDef*) (GPIOF_AHB_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOF_AHB_PeriphID4_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 26 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOF AHB PID5*/
#define GPIOF_AHB_PeriphID5    ((GPIOPeriphID5_TypeDef*) (GPIOF_AHB_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOF_AHB_PeriphID5_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 27 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOF AHB PID6*/
#define GPIOF_AHB_PeriphID6    ((GPIOPeriphID6_TypeDef*) (GPIOF_AHB_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOF_AHB_PeriphID6_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 28 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOF AHB PID7*/
#define GPIOF_AHB_PeriphID7    ((GPIOPeriphID7_TypeDef*) (GPIOF_AHB_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOF_AHB_PeriphID7_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 29 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOF AHB PID0*/
#define GPIOF_AHB_PeriphID0    ((GPIOPeriphID0_TypeDef*) (GPIOF_AHB_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOF_AHB_PeriphID0_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 30 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOF AHB PID1*/
#define GPIOF_AHB_PeriphID1    ((GPIOPeriphID1_TypeDef*) (GPIOF_AHB_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOF_AHB_PeriphID1_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 31 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOF AHB PID2*/
#define GPIOF_AHB_PeriphID2    ((GPIOPeriphID2_TypeDef*) (GPIOF_AHB_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOF_AHB_PeriphID2_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOF AHB PID3*/
#define GPIOF_AHB_PeriphID3    ((GPIOPeriphID3_TypeDef*) (GPIOF_AHB_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOF_AHB_PeriphID3_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 33 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOF AHB CID0*/
#define GPIOF_AHB_CellID0    ((GPIOCellID0_TypeDef*) (GPIOF_AHB_BASE + GPIO_CellID0_OFFSET))
#define GPIOF_AHB_CellID0_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 34 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOF AHB CID1*/
#define GPIOF_AHB_CellID1    ((GPIOCellID1_TypeDef*) (GPIOF_AHB_BASE + GPIO_CellID1_OFFSET))
#define GPIOF_AHB_CellID1_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 35 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOF AHB CID2*/
#define GPIOF_AHB_CellID2    ((GPIOCellID2_TypeDef*) (GPIOF_AHB_BASE + GPIO_CellID2_OFFSET))
#define GPIOF_AHB_CellID2_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 36 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOF AHB CID3*/
#define GPIOF_AHB_CellID3    ((GPIOCellID3_TypeDef*) (GPIOF_AHB_BASE + GPIO_CellID3_OFFSET))
#define GPIOF_AHB_CellID3_R    (*((volatile uint32_t *) (GPIOF_AHB_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEF_H_ */
