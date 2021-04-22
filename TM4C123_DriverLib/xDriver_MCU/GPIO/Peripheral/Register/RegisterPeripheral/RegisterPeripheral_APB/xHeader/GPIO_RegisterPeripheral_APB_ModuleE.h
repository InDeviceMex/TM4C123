/**
 *
 * @file GPIO_RegisterPeripheral_APB_ModuleE.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEE_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOE    ((GPIO_TypeDef*) (GPIOE_BASE))
#define GPIOE_AUX    ((GPIO_AUX_TypeDef*) (GPIOE_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOE APB DATA*/
#define GPIOE_DATA_MASK    ((GPIODATA_MASK_TypeDef*) (GPIOE_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOE_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOE_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOE_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOE_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOE_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOE_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOE_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOE_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOE_DATA    ((GPIODATA_TypeDef*) (GPIOE_BASE + GPIO_DATA_OFFSET))
#define GPIOE_DATA_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOE APB DIR*/
#define GPIOE_DIR    ((GPIODIR_TypeDef*) (GPIOE_BASE + GPIO_DIR_OFFSET))
#define GPIOE_DIR_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOE APB IS*/
#define GPIOE_IS    ((GPIOIS_TypeDef*) (GPIOE_BASE + GPIO_IS_OFFSET))
#define GPIOE_IS_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOE APB IBE*/
#define GPIOE_IBE    ((GPIOIBE_TypeDef*) (GPIOE_BASE + GPIO_IBE_OFFSET))
#define GPIOE_IBE_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOE APB IEV*/
#define GPIOE_IEV    ((GPIOIEV_TypeDef*) (GPIOE_BASE + GPIO_IEV_OFFSET))
#define GPIOE_IEV_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOE APB IME*/
#define GPIOE_IM    ((GPIOIM_TypeDef*) (GPIOE_BASE + GPIO_IM_OFFSET))
#define GPIOE_IM_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOE APB RIS*/
#define GPIOE_RIS    ((GPIORIS_TypeDef*) (GPIOE_BASE + GPIO_RIS_OFFSET))
#define GPIOE_RIS_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOE APB MIS*/
#define GPIOE_MIS    ((GPIOMIS_TypeDef*) (GPIOE_BASE + GPIO_MIS_OFFSET))
#define GPIOE_MIS_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOE APB IC*/
#define GPIOE_ICR    ((GPIOICR_TypeDef*) (GPIOE_BASE + GPIO_ICR_OFFSET))
#define GPIOE_ICR_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 EFSEL *********************************************
 ******************************************************************************************/
/* GPIOE APB AFSEL*/
#define GPIOE_EFSEL    ((GPIOEFSEL_TypeDef*) (GPIOE_BASE + GPIO_EFSEL_OFFSET))
#define GPIOE_EFSEL_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_EFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOE APB DRV2*/
#define GPIOE_DRR    ((GPIODRR_ARRAY_TypeDef*) (GPIOE_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOE APB DRV2*/
#define GPIOE_DR2R    ((GPIODR2R_TypeDef*) (GPIOE_BASE + GPIO_DR2R_OFFSET))
#define GPIOE_DR2R_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOE APB DRV4*/
#define GPIOE_DR4R    ((GPIODR4R_TypeDef*) (GPIOE_BASE + GPIO_DR4R_OFFSET))
#define GPIOE_DR4R_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOE APB DRV8*/
#define GPIOE_DR8R    ((GPIODR8R_TypeDef*) (GPIOE_BASE + GPIO_DR8R_OFFSET))
#define GPIOE_DR8R_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOE APB ODE*/
#define GPIOE_ODR    ((GPIOODR_TypeDef*) (GPIOE_BASE + GPIO_ODR_OFFSET))
#define GPIOE_ODR_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOE APB PUE*/
#define GPIOE_PUR    ((GPIOPUR_TypeDef*) (GPIOE_BASE + GPIO_PUR_OFFSET))
#define GPIOE_PUR_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOE APB PDE*/
#define GPIOE_PDR    ((GPIOPDR_TypeDef*) (GPIOE_BASE + GPIO_PDR_OFFSET))
#define GPIOE_PDR_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOE APB SLR*/
#define GPIOE_SLR    ((GPIOSLR_TypeDef*) (GPIOE_BASE + GPIO_SLR_OFFSET))
#define GPIOE_SLR_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOE APB DEN*/
#define GPIOE_DEN    ((GPIODEN_TypeDef*) (GPIOE_BASE + GPIO_DEN_OFFSET))
#define GPIOE_DEN_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOE APB LOCK*/
#define GPIOE_LOCK    ((GPIOLOCK_TypeDef*) (GPIOE_BASE + GPIO_LOCK_OFFSET))
#define GPIOE_LOCK_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOE APB CR*/
#define GPIOE_CR    ((GPIOCR_TypeDef*) (GPIOE_BASE + GPIO_CR_OFFSET))
#define GPIOE_CR_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 EMSEL *********************************************
 ******************************************************************************************/
/* GPIOE APB AMSEL*/
#define GPIOE_EMSEL    ((GPIOEMSEL_TypeDef*) (GPIOE_BASE + GPIO_EMSEL_OFFSET))
#define GPIOE_EMSEL_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_EMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOE APB PCM*/
#define GPIOE_PCTL    ((GPIOPCTL_TypeDef*) (GPIOE_BASE + GPIO_PCTL_OFFSET))
#define GPIOE_PCTL_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 EDCCTL *********************************************
 ******************************************************************************************/
/* GPIOE APB ADCEN*/
#define GPIOE_EDCCTL    ((GPIOEDCCTL_TypeDef*) (GPIOE_BASE + GPIO_EDCCTL_OFFSET))
#define GPIOE_EDCCTL_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_EDCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOE APB DMAEN*/
#define GPIOE_DMACTL    ((GPIODMACTL_TypeDef*) (GPIOE_BASE + GPIO_DMACTL_OFFSET))
#define GPIOE_DMACTL_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID4*/
#define GPIOE_PeriphID4    ((GPIOPeriphID4_TypeDef*) (GPIOE_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOE_PeriphID4_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 26 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID5*/
#define GPIOE_PeriphID5    ((GPIOPeriphID5_TypeDef*) (GPIOE_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOE_PeriphID5_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 27 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID6*/
#define GPIOE_PeriphID6    ((GPIOPeriphID6_TypeDef*) (GPIOE_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOE_PeriphID6_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 28 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID7*/
#define GPIOE_PeriphID7    ((GPIOPeriphID7_TypeDef*) (GPIOE_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOE_PeriphID7_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 29 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID0*/
#define GPIOE_PeriphID0    ((GPIOPeriphID0_TypeDef*) (GPIOE_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOE_PeriphID0_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 30 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID1*/
#define GPIOE_PeriphID1    ((GPIOPeriphID1_TypeDef*) (GPIOE_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOE_PeriphID1_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 31 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID2*/
#define GPIOE_PeriphID2    ((GPIOPeriphID2_TypeDef*) (GPIOE_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOE_PeriphID2_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID3*/
#define GPIOE_PeriphID3    ((GPIOPeriphID3_TypeDef*) (GPIOE_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOE_PeriphID3_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 33 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOE APB CID0*/
#define GPIOE_CellID0    ((GPIOCellID0_TypeDef*) (GPIOE_BASE + GPIO_CellID0_OFFSET))
#define GPIOE_CellID0_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 34 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOE APB CID1*/
#define GPIOE_CellID1    ((GPIOCellID1_TypeDef*) (GPIOE_BASE + GPIO_CellID1_OFFSET))
#define GPIOE_CellID1_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 35 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOE APB CID2*/
#define GPIOE_CellID2    ((GPIOCellID2_TypeDef*) (GPIOE_BASE + GPIO_CellID2_OFFSET))
#define GPIOE_CellID2_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 36 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOE APB CID3*/
#define GPIOE_CellID3    ((GPIOCellID3_TypeDef*) (GPIOE_BASE + GPIO_CellID3_OFFSET))
#define GPIOE_CellID3_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEE_H_ */
