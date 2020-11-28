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

#define GPIOB_APB               (((GPIO_TypeDef*)(GPIOB_APB_BASE)))
#define GPIOB_APB_AUX               (((GPIO_AUX_TypeDef*)(GPIOB_APB_BASE)))

/******************************************************************************************
 ************************************ 1 GPIODATA *********************************************
 ******************************************************************************************/
/* GPIOB APB DATA*/
#define GPIOB_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOB_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOB_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOB_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOB_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 GPIODIR *********************************************
 ******************************************************************************************/
/* GPIOB APB DIR*/
#define GPIOB_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOB_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 GPIOIS *********************************************
 ******************************************************************************************/
/* GPIOB APB IS*/
#define GPIOB_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOB_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOIS_OFFSET)))

/******************************************************************************************
 ************************************ 4 GPIOIBE *********************************************
 ******************************************************************************************/
/* GPIOB APB IBE*/
#define GPIOB_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOB_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOIBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 GPIOIEV *********************************************
 ******************************************************************************************/
/* GPIOB APB IEV*/
#define GPIOB_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOB_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOIEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 GPIOIM *********************************************
 ******************************************************************************************/
/* GPIOB APB IME*/
#define GPIOB_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOB_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOIM_OFFSET)))

/******************************************************************************************
 ************************************ 7 GPIORIS *********************************************
 ******************************************************************************************/
/* GPIOB APB RIS*/
#define GPIOB_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOB_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIORIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 GPIOMIS *********************************************
 ******************************************************************************************/
/* GPIOB APB MIS*/
#define GPIOB_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOB_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOMIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 GPIOICR *********************************************
 ******************************************************************************************/
/* GPIOB APB IC*/
#define GPIOB_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOB_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 GPIOAFSEL *********************************************
 ******************************************************************************************/
/* GPIOB APB AFSEL*/
#define GPIOB_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOB_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 GPIODRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOB APB DRV2*/
#define GPIOB_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
 ************************************ 11 GPIODR2R *********************************************
 ******************************************************************************************/
/* GPIOB APB DRV2*/
#define GPIOB_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOB_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 GPIODR4R *********************************************
 ******************************************************************************************/
/* GPIOB APB DRV4*/
#define GPIOB_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOB_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 GPIODR8R *********************************************
 ******************************************************************************************/
/* GPIOB APB DRV8*/
#define GPIOB_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOB_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 GPIOODR *********************************************
 ******************************************************************************************/
/* GPIOB APB ODE*/
#define GPIOB_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOB_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 GPIOPUR *********************************************
 ******************************************************************************************/
/* GPIOB APB PUE*/
#define GPIOB_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOB_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 GPIOPDR *********************************************
 ******************************************************************************************/
/* GPIOB APB PDE*/
#define GPIOB_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOB_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 GPIOSLR *********************************************
 ******************************************************************************************/
/* GPIOB APB SLR*/
#define GPIOB_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOB_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOSLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 GPIODEN *********************************************
 ******************************************************************************************/
/* GPIOB APB DEN*/
#define GPIOB_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOB_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 GPIOLOCK *********************************************
 ******************************************************************************************/
/* GPIOB APB LOCK*/
#define GPIOB_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOB_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOLOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 GPIOCR *********************************************
 ******************************************************************************************/
/* GPIOB APB CR*/
#define GPIOB_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOB_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCR_OFFSET)))

/******************************************************************************************
 ************************************ 21 GPIOAMSEL *********************************************
 ******************************************************************************************/
/* GPIOB APB AMSEL*/
#define GPIOB_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOB_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 GPIOPCTL *********************************************
 ******************************************************************************************/
/* GPIOB APB PCM*/
#define GPIOB_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOB_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 GPIOADCCTL *********************************************
 ******************************************************************************************/
/* GPIOB APB ADCEN*/
#define GPIOB_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOB_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 GPIODMACTL *********************************************
 ******************************************************************************************/
/* GPIOB APB DMAEN*/
#define GPIOB_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOB_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 GPIOPeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID4*/
#define GPIOB_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOB_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 26 GPIOPeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID5*/
#define GPIOB_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOB_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 27 GPIOPeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID6*/
#define GPIOB_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOB_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 28 GPIOPeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID7*/
#define GPIOB_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOB_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 29 GPIOPeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID0*/
#define GPIOB_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOB_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 30 GPIOPeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID1*/
#define GPIOB_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOB_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 31 GPIOPeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID2*/
#define GPIOB_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOB_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 32 GPIOPeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOB APB PID3*/
#define GPIOB_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOB_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 33 GPIOCellID0 *********************************************
 ******************************************************************************************/
/* GPIOB APB CID0*/
#define GPIOB_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOB_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 34 GPIOCellID1 *********************************************
 ******************************************************************************************/
/* GPIOB APB CID1*/
#define GPIOB_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOB_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 35 GPIOCellID2 *********************************************
 ******************************************************************************************/
/* GPIOB APB CID2*/
#define GPIOB_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOB_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 36 GPIOCellID3 *********************************************
 ******************************************************************************************/
/* GPIOB APB CID3*/
#define GPIOB_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOB_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEB_H_ */
