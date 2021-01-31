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
 ************************************ 1 GPIODATA *********************************************
 ******************************************************************************************/
/* GPIOB AHB DATA*/
#define GPIOB_AHB_GPIODATA_MASK    ((GPIODATA_MASK_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIODATA_MASK_OFFSET))
#define GPIOB_AHB_GPIODATA0_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA1_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA2_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA3_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA4_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA5_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA6_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA7_MASK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOB_AHB_GPIODATA    ((GPIODATA_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIODATA_OFFSET))
#define GPIOB_AHB_GPIODATA_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 GPIODIR *********************************************
 ******************************************************************************************/
/* GPIOB AHB DIR*/
#define GPIOB_AHB_GPIODIR    ((GPIODIR_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIODIR_OFFSET))
#define GPIOB_AHB_GPIODIR_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 GPIOIS *********************************************
 ******************************************************************************************/
/* GPIOB AHB IS*/
#define GPIOB_AHB_GPIOIS    ((GPIOIS_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOIS_OFFSET))
#define GPIOB_AHB_GPIOIS_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOIS_OFFSET)))

/******************************************************************************************
 ************************************ 4 GPIOIBE *********************************************
 ******************************************************************************************/
/* GPIOB AHB IBE*/
#define GPIOB_AHB_GPIOIBE    ((GPIOIBE_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOIBE_OFFSET))
#define GPIOB_AHB_GPIOIBE_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOIBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 GPIOIEV *********************************************
 ******************************************************************************************/
/* GPIOB AHB IEV*/
#define GPIOB_AHB_GPIOIEV    ((GPIOIEV_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOIEV_OFFSET))
#define GPIOB_AHB_GPIOIEV_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOIEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 GPIOIM *********************************************
 ******************************************************************************************/
/* GPIOB AHB IME*/
#define GPIOB_AHB_GPIOIM    ((GPIOIM_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOIM_OFFSET))
#define GPIOB_AHB_GPIOIM_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOIM_OFFSET)))

/******************************************************************************************
 ************************************ 7 GPIORIS *********************************************
 ******************************************************************************************/
/* GPIOB AHB RIS*/
#define GPIOB_AHB_GPIORIS    ((GPIORIS_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIORIS_OFFSET))
#define GPIOB_AHB_GPIORIS_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIORIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 GPIOMIS *********************************************
 ******************************************************************************************/
/* GPIOB AHB MIS*/
#define GPIOB_AHB_GPIOMIS    ((GPIOMIS_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOMIS_OFFSET))
#define GPIOB_AHB_GPIOMIS_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOMIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 GPIOICR *********************************************
 ******************************************************************************************/
/* GPIOB AHB IC*/
#define GPIOB_AHB_GPIOICR    ((GPIOICR_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOICR_OFFSET))
#define GPIOB_AHB_GPIOICR_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 GPIOAFSEL *********************************************
 ******************************************************************************************/
/* GPIOB AHB AFSEL*/
#define GPIOB_AHB_GPIOAFSEL    ((GPIOAFSEL_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOAFSEL_OFFSET))
#define GPIOB_AHB_GPIOAFSEL_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOAFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 GPIODRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOB AHB DRV2*/
#define GPIOB_AHB_GPIODRR    ((GPIODRR_ARRAY_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIODR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 GPIODR2R *********************************************
 ******************************************************************************************/
/* GPIOB AHB DRV2*/
#define GPIOB_AHB_GPIODR2R    ((GPIODR2R_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIODR2R_OFFSET))
#define GPIOB_AHB_GPIODR2R_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 GPIODR4R *********************************************
 ******************************************************************************************/
/* GPIOB AHB DRV4*/
#define GPIOB_AHB_GPIODR4R    ((GPIODR4R_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIODR4R_OFFSET))
#define GPIOB_AHB_GPIODR4R_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 GPIODR8R *********************************************
 ******************************************************************************************/
/* GPIOB AHB DRV8*/
#define GPIOB_AHB_GPIODR8R    ((GPIODR8R_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIODR8R_OFFSET))
#define GPIOB_AHB_GPIODR8R_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 GPIOODR *********************************************
 ******************************************************************************************/
/* GPIOB AHB ODE*/
#define GPIOB_AHB_GPIOODR    ((GPIOODR_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOODR_OFFSET))
#define GPIOB_AHB_GPIOODR_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 GPIOPUR *********************************************
 ******************************************************************************************/
/* GPIOB AHB PUE*/
#define GPIOB_AHB_GPIOPUR    ((GPIOPUR_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOPUR_OFFSET))
#define GPIOB_AHB_GPIOPUR_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOPUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 GPIOPDR *********************************************
 ******************************************************************************************/
/* GPIOB AHB PDE*/
#define GPIOB_AHB_GPIOPDR    ((GPIOPDR_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOPDR_OFFSET))
#define GPIOB_AHB_GPIOPDR_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOPDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 GPIOSLR *********************************************
 ******************************************************************************************/
/* GPIOB AHB SLR*/
#define GPIOB_AHB_GPIOSLR    ((GPIOSLR_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOSLR_OFFSET))
#define GPIOB_AHB_GPIOSLR_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOSLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 GPIODEN *********************************************
 ******************************************************************************************/
/* GPIOB AHB DEN*/
#define GPIOB_AHB_GPIODEN    ((GPIODEN_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIODEN_OFFSET))
#define GPIOB_AHB_GPIODEN_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 GPIOLOCK *********************************************
 ******************************************************************************************/
/* GPIOB AHB LOCK*/
#define GPIOB_AHB_GPIOLOCK    ((GPIOLOCK_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOLOCK_OFFSET))
#define GPIOB_AHB_GPIOLOCK_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOLOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 GPIOCR *********************************************
 ******************************************************************************************/
/* GPIOB AHB CR*/
#define GPIOB_AHB_GPIOCR    ((GPIOCR_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOCR_OFFSET))
#define GPIOB_AHB_GPIOCR_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOCR_OFFSET)))

/******************************************************************************************
 ************************************ 21 GPIOAMSEL *********************************************
 ******************************************************************************************/
/* GPIOB AHB AMSEL*/
#define GPIOB_AHB_GPIOAMSEL    ((GPIOAMSEL_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOAMSEL_OFFSET))
#define GPIOB_AHB_GPIOAMSEL_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOAMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 GPIOPCTL *********************************************
 ******************************************************************************************/
/* GPIOB AHB PCM*/
#define GPIOB_AHB_GPIOPCTL    ((GPIOPCTL_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOPCTL_OFFSET))
#define GPIOB_AHB_GPIOPCTL_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOPCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 GPIOADCCTL *********************************************
 ******************************************************************************************/
/* GPIOB AHB ADCEN*/
#define GPIOB_AHB_GPIOADCCTL    ((GPIOADCCTL_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOADCCTL_OFFSET))
#define GPIOB_AHB_GPIOADCCTL_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 GPIODMACTL *********************************************
 ******************************************************************************************/
/* GPIOB AHB DMAEN*/
#define GPIOB_AHB_GPIODMACTL    ((GPIODMACTL_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIODMACTL_OFFSET))
#define GPIOB_AHB_GPIODMACTL_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIODMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 GPIOPeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID4*/
#define GPIOB_AHB_GPIOPeriphID4    ((GPIOPeriphID4_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID4_OFFSET))
#define GPIOB_AHB_GPIOPeriphID4_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 26 GPIOPeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID5*/
#define GPIOB_AHB_GPIOPeriphID5    ((GPIOPeriphID5_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID5_OFFSET))
#define GPIOB_AHB_GPIOPeriphID5_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 27 GPIOPeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID6*/
#define GPIOB_AHB_GPIOPeriphID6    ((GPIOPeriphID6_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID6_OFFSET))
#define GPIOB_AHB_GPIOPeriphID6_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 28 GPIOPeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID7*/
#define GPIOB_AHB_GPIOPeriphID7    ((GPIOPeriphID7_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID7_OFFSET))
#define GPIOB_AHB_GPIOPeriphID7_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 29 GPIOPeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID0*/
#define GPIOB_AHB_GPIOPeriphID0    ((GPIOPeriphID0_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID0_OFFSET))
#define GPIOB_AHB_GPIOPeriphID0_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 30 GPIOPeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID1*/
#define GPIOB_AHB_GPIOPeriphID1    ((GPIOPeriphID1_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID1_OFFSET))
#define GPIOB_AHB_GPIOPeriphID1_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 31 GPIOPeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID2*/
#define GPIOB_AHB_GPIOPeriphID2    ((GPIOPeriphID2_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID2_OFFSET))
#define GPIOB_AHB_GPIOPeriphID2_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 32 GPIOPeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOB AHB PID3*/
#define GPIOB_AHB_GPIOPeriphID3    ((GPIOPeriphID3_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID3_OFFSET))
#define GPIOB_AHB_GPIOPeriphID3_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOPeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 33 GPIOCellID0 *********************************************
 ******************************************************************************************/
/* GPIOB AHB CID0*/
#define GPIOB_AHB_GPIOCellID0    ((GPIOCellID0_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOCellID0_OFFSET))
#define GPIOB_AHB_GPIOCellID0_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 34 GPIOCellID1 *********************************************
 ******************************************************************************************/
/* GPIOB AHB CID1*/
#define GPIOB_AHB_GPIOCellID1    ((GPIOCellID1_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOCellID1_OFFSET))
#define GPIOB_AHB_GPIOCellID1_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 35 GPIOCellID2 *********************************************
 ******************************************************************************************/
/* GPIOB AHB CID2*/
#define GPIOB_AHB_GPIOCellID2    ((GPIOCellID2_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOCellID2_OFFSET))
#define GPIOB_AHB_GPIOCellID2_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 36 GPIOCellID3 *********************************************
 ******************************************************************************************/
/* GPIOB AHB CID3*/
#define GPIOB_AHB_GPIOCellID3    ((GPIOCellID3_TypeDef*) (GPIOB_AHB_BASE + GPIO_GPIOCellID3_OFFSET))
#define GPIOB_AHB_GPIOCellID3_R    (*((volatile uint32_t *) (GPIOB_AHB_BASE + GPIO_GPIOCellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEB_H_ */
