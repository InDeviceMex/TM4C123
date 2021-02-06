/**
 *
 * @file GPIO_RegisterPeripheral_APB_ModuleF.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEF_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEF_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOF_APB    ((GPIO_TypeDef*) (GPIOF_APB_BASE))
#define GPIOF_APB_AUX    ((GPIO_AUX_TypeDef*) (GPIOF_APB_BASE))

/******************************************************************************************
 ************************************ 1 GPIODATA *********************************************
 ******************************************************************************************/
/* GPIOF APB DATA*/
#define GPIOF_APB_GPIODATA_MASK    (((GPIODATA_MASK_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOF_APB_GPIODATA0_MASK_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA1_MASK_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA2_MASK_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA3_MASK_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA4_MASK_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA5_MASK_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA6_MASK_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA7_MASK_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOF_APB_GPIODATA    (((GPIODATA_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIODATA_OFFSET)))
#define GPIOF_APB_GPIODATA_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 GPIODIR *********************************************
 ******************************************************************************************/
/* GPIOF APB DIR*/
#define GPIOF_APB_GPIODIR    (((GPIODIR_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIODIR_OFFSET)))
#define GPIOF_APB_GPIODIR_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 GPIOIS *********************************************
 ******************************************************************************************/
/* GPIOF APB IS*/
#define GPIOF_APB_GPIOIS    (((GPIOIS_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOIS_OFFSET)))
#define GPIOF_APB_GPIOIS_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOIS_OFFSET)))

/******************************************************************************************
 ************************************ 4 GPIOIBE *********************************************
 ******************************************************************************************/
/* GPIOF APB IBE*/
#define GPIOF_APB_GPIOIBE    (((GPIOIBE_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOIBE_OFFSET)))
#define GPIOF_APB_GPIOIBE_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOIBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 GPIOIEV *********************************************
 ******************************************************************************************/
/* GPIOF APB IEV*/
#define GPIOF_APB_GPIOIEV    (((GPIOIEV_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOIEV_OFFSET)))
#define GPIOF_APB_GPIOIEV_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOIEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 GPIOIM *********************************************
 ******************************************************************************************/
/* GPIOF APB IME*/
#define GPIOF_APB_GPIOIM    (((GPIOIM_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOIM_OFFSET)))
#define GPIOF_APB_GPIOIM_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOIM_OFFSET)))

/******************************************************************************************
 ************************************ 7 GPIORIS *********************************************
 ******************************************************************************************/
/* GPIOF APB RIS*/
#define GPIOF_APB_GPIORIS    (((GPIORIS_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIORIS_OFFSET)))
#define GPIOF_APB_GPIORIS_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIORIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 GPIOMIS *********************************************
 ******************************************************************************************/
/* GPIOF APB MIS*/
#define GPIOF_APB_GPIOMIS    (((GPIOMIS_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOMIS_OFFSET)))
#define GPIOF_APB_GPIOMIS_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOMIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 GPIOICR *********************************************
 ******************************************************************************************/
/* GPIOF APB IC*/
#define GPIOF_APB_GPIOICR    (((GPIOICR_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOICR_OFFSET)))
#define GPIOF_APB_GPIOICR_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 GPIOFFSEL *********************************************
 ******************************************************************************************/
/* GPIOF APB AFSEL*/
#define GPIOF_APB_GPIOFFSEL    (((GPIOFFSEL_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOFFSEL_OFFSET)))
#define GPIOF_APB_GPIOFFSEL_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOFFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 GPIODRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOF APB DRV2*/
#define GPIOF_APB_GPIODRR    (((GPIODRR_ARRAY_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
 ************************************ 11 GPIODR2R *********************************************
 ******************************************************************************************/
/* GPIOF APB DRV2*/
#define GPIOF_APB_GPIODR2R    (((GPIODR2R_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIODR2R_OFFSET)))
#define GPIOF_APB_GPIODR2R_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 GPIODR4R *********************************************
 ******************************************************************************************/
/* GPIOF APB DRV4*/
#define GPIOF_APB_GPIODR4R    (((GPIODR4R_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIODR4R_OFFSET)))
#define GPIOF_APB_GPIODR4R_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 GPIODR8R *********************************************
 ******************************************************************************************/
/* GPIOF APB DRV8*/
#define GPIOF_APB_GPIODR8R    (((GPIODR8R_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIODR8R_OFFSET)))
#define GPIOF_APB_GPIODR8R_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 GPIOODR *********************************************
 ******************************************************************************************/
/* GPIOF APB ODE*/
#define GPIOF_APB_GPIOODR    (((GPIOODR_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOODR_OFFSET)))
#define GPIOF_APB_GPIOODR_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 GPIOPUR *********************************************
 ******************************************************************************************/
/* GPIOF APB PUE*/
#define GPIOF_APB_GPIOPUR    (((GPIOPUR_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOPUR_OFFSET)))
#define GPIOF_APB_GPIOPUR_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOPUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 GPIOPDR *********************************************
 ******************************************************************************************/
/* GPIOF APB PDE*/
#define GPIOF_APB_GPIOPDR    (((GPIOPDR_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOPDR_OFFSET)))
#define GPIOF_APB_GPIOPDR_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOPDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 GPIOSLR *********************************************
 ******************************************************************************************/
/* GPIOF APB SLR*/
#define GPIOF_APB_GPIOSLR    (((GPIOSLR_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOSLR_OFFSET)))
#define GPIOF_APB_GPIOSLR_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOSLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 GPIODEN *********************************************
 ******************************************************************************************/
/* GPIOF APB DEN*/
#define GPIOF_APB_GPIODEN    (((GPIODEN_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIODEN_OFFSET)))
#define GPIOF_APB_GPIODEN_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 GPIOLOCK *********************************************
 ******************************************************************************************/
/* GPIOF APB LOCK*/
#define GPIOF_APB_GPIOLOCK    (((GPIOLOCK_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOLOCK_OFFSET)))
#define GPIOF_APB_GPIOLOCK_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOLOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 GPIOCR *********************************************
 ******************************************************************************************/
/* GPIOF APB CR*/
#define GPIOF_APB_GPIOCR    (((GPIOCR_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOCR_OFFSET)))
#define GPIOF_APB_GPIOCR_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOCR_OFFSET)))

/******************************************************************************************
 ************************************ 21 GPIOAFSEL *********************************************
 ******************************************************************************************/
/* GPIOF APB AMSEL*/
#define GPIOF_APB_GPIOAFSEL    (((GPIOAFSEL_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOAFSEL_OFFSET)))
#define GPIOF_APB_GPIOAFSEL_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOAFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 GPIOPCTL *********************************************
 ******************************************************************************************/
/* GPIOF APB PCM*/
#define GPIOF_APB_GPIOPCTL    (((GPIOPCTL_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOPCTL_OFFSET)))
#define GPIOF_APB_GPIOPCTL_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOPCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 GPIOFDCCTL *********************************************
 ******************************************************************************************/
/* GPIOF APB ADCEN*/
#define GPIOF_APB_GPIOFDCCTL    (((GPIOFDCCTL_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOFDCCTL_OFFSET)))
#define GPIOF_APB_GPIOFDCCTL_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOFDCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 GPIODMACTL *********************************************
 ******************************************************************************************/
/* GPIOF APB DMAEN*/
#define GPIOF_APB_GPIODMACTL    (((GPIODMACTL_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIODMACTL_OFFSET)))
#define GPIOF_APB_GPIODMACTL_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIODMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 GPIOPeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID4*/
#define GPIOF_APB_GPIOPeriphID4    (((GPIOPeriphID4_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOF_APB_GPIOPeriphID4_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOPeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 26 GPIOPeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID5*/
#define GPIOF_APB_GPIOPeriphID5    (((GPIOPeriphID5_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOF_APB_GPIOPeriphID5_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOPeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 27 GPIOPeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID6*/
#define GPIOF_APB_GPIOPeriphID6    (((GPIOPeriphID6_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOF_APB_GPIOPeriphID6_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOPeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 28 GPIOPeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID7*/
#define GPIOF_APB_GPIOPeriphID7    (((GPIOPeriphID7_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOF_APB_GPIOPeriphID7_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOPeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 29 GPIOPeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID0*/
#define GPIOF_APB_GPIOPeriphID0    (((GPIOPeriphID0_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOF_APB_GPIOPeriphID0_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOPeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 30 GPIOPeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID1*/
#define GPIOF_APB_GPIOPeriphID1    (((GPIOPeriphID1_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOF_APB_GPIOPeriphID1_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOPeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 31 GPIOPeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID2*/
#define GPIOF_APB_GPIOPeriphID2    (((GPIOPeriphID2_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOF_APB_GPIOPeriphID2_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOPeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 32 GPIOPeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOF APB PID3*/
#define GPIOF_APB_GPIOPeriphID3    (((GPIOPeriphID3_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOF_APB_GPIOPeriphID3_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOPeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 33 GPIOCellID0 *********************************************
 ******************************************************************************************/
/* GPIOF APB CID0*/
#define GPIOF_APB_GPIOCellID0    (((GPIOCellID0_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOCellID0_OFFSET)))
#define GPIOF_APB_GPIOCellID0_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 34 GPIOCellID1 *********************************************
 ******************************************************************************************/
/* GPIOF APB CID1*/
#define GPIOF_APB_GPIOCellID1    (((GPIOCellID1_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOCellID1_OFFSET)))
#define GPIOF_APB_GPIOCellID1_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 35 GPIOCellID2 *********************************************
 ******************************************************************************************/
/* GPIOF APB CID2*/
#define GPIOF_APB_GPIOCellID2    (((GPIOCellID2_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOCellID2_OFFSET)))
#define GPIOF_APB_GPIOCellID2_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 36 GPIOCellID3 *********************************************
 ******************************************************************************************/
/* GPIOF APB CID3*/
#define GPIOF_APB_GPIOCellID3    (((GPIOCellID3_TypeDef*) (GPIOF_APB_BASE + GPIO_GPIOCellID3_OFFSET)))
#define GPIOF_APB_GPIOCellID3_R    (*((volatile uint32_t *) (GPIOF_APB_BASE + GPIO_GPIOCellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEF_H_ */
