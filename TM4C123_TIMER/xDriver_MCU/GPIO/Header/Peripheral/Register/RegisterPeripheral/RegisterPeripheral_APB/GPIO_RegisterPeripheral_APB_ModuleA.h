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

#include <xDriver_MCU/GPIO/Header/Peripheral/Register/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Header/Peripheral/Struct/GPIO_StructPeripheral.h>

#define GPIOA_APB               (((GPIO_TypeDef*)(GPIOA_APB_BASE)))
#define GPIOA_APB_AUX               (((GPIO_AUX_TypeDef*)(GPIOA_APB_BASE)))

/******************************************************************************************
************************************ 1 GPIODATA *********************************************
******************************************************************************************/
/* GPIOA APB DATA*/
#define GPIOA_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOA_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOA_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOA_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOA_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODATA_OFFSET)))

/******************************************************************************************
************************************ 2 GPIODIR *********************************************
******************************************************************************************/
/* GPIOA APB DIR*/
#define GPIOA_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOA_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODIR_OFFSET)))

/******************************************************************************************
************************************ 3 GPIOIS *********************************************
******************************************************************************************/
/* GPIOA APB IS*/
#define GPIOA_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOA_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOIS_OFFSET)))

/******************************************************************************************
************************************ 4 GPIOIBE *********************************************
******************************************************************************************/
/* GPIOA APB IBE*/
#define GPIOA_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOA_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOIBE_OFFSET)))

/******************************************************************************************
************************************ 5 GPIOIEV *********************************************
******************************************************************************************/
/* GPIOA APB IEV*/
#define GPIOA_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOA_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOIEV_OFFSET)))

/******************************************************************************************
************************************ 6 GPIOIM *********************************************
******************************************************************************************/
/* GPIOA APB IME*/
#define GPIOA_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOA_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOIM_OFFSET)))

/******************************************************************************************
************************************ 7 GPIORIS *********************************************
******************************************************************************************/
/* GPIOA APB RIS*/
#define GPIOA_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOA_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIORIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPIOMIS *********************************************
******************************************************************************************/
/* GPIOA APB MIS*/
#define GPIOA_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOA_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPIOICR *********************************************
******************************************************************************************/
/* GPIOA APB IC*/
#define GPIOA_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOA_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPIOAFSEL *********************************************
******************************************************************************************/
/* GPIOA APB AFSEL*/
#define GPIOA_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOA_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/******************************************************************************************
************************************ 11 GPIODRR ARRAY *********************************************
******************************************************************************************/
/* GPIOA APB DRV2*/
#define GPIOA_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
************************************ 11 GPIODR2R *********************************************
******************************************************************************************/
/* GPIOA APB DRV2*/
#define GPIOA_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOA_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
************************************ 12 GPIODR4R *********************************************
******************************************************************************************/
/* GPIOA APB DRV4*/
#define GPIOA_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOA_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODR4R_OFFSET)))

/******************************************************************************************
************************************ 13 GPIODR8R *********************************************
******************************************************************************************/
/* GPIOA APB DRV8*/
#define GPIOA_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOA_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODR8R_OFFSET)))

/******************************************************************************************
************************************ 14 GPIOODR *********************************************
******************************************************************************************/
/* GPIOA APB ODE*/
#define GPIOA_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOA_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOODR_OFFSET)))

/******************************************************************************************
************************************ 15 GPIOPUR *********************************************
******************************************************************************************/
/* GPIOA APB PUE*/
#define GPIOA_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOA_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPUR_OFFSET)))

/******************************************************************************************
************************************ 16 GPIOPDR *********************************************
******************************************************************************************/
/* GPIOA APB PDE*/
#define GPIOA_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOA_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPDR_OFFSET)))

/******************************************************************************************
************************************ 17 GPIOSLR *********************************************
******************************************************************************************/
/* GPIOA APB SLR*/
#define GPIOA_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOA_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOSLR_OFFSET)))

/******************************************************************************************
************************************ 18 GPIODEN *********************************************
******************************************************************************************/
/* GPIOA APB DEN*/
#define GPIOA_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOA_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODEN_OFFSET)))

/******************************************************************************************
************************************ 19 GPIOLOCK *********************************************
******************************************************************************************/
/* GPIOA APB LOCK*/
#define GPIOA_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOA_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOLOCK_OFFSET)))

/******************************************************************************************
************************************ 20 GPIOCR *********************************************
******************************************************************************************/
/* GPIOA APB CR*/
#define GPIOA_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOA_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCR_OFFSET)))

/******************************************************************************************
************************************ 21 GPIOAMSEL *********************************************
******************************************************************************************/
/* GPIOA APB AMSEL*/
#define GPIOA_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOA_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/******************************************************************************************
************************************ 22 GPIOPCTL *********************************************
******************************************************************************************/
/* GPIOA APB PCM*/
#define GPIOA_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOA_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/******************************************************************************************
************************************ 23 GPIOADCCTL *********************************************
******************************************************************************************/
/* GPIOA APB ADCEN*/
#define GPIOA_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOA_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/******************************************************************************************
************************************ 24 GPIODMACTL *********************************************
******************************************************************************************/
/* GPIOA APB DMAEN*/
#define GPIOA_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOA_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODMACTL_OFFSET)))

/******************************************************************************************
************************************ 25 GPIOPeriphID4 *********************************************
******************************************************************************************/
/* GPIOA APB PID4*/
#define GPIOA_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOA_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/******************************************************************************************
************************************ 26 GPIOPeriphID5 *********************************************
******************************************************************************************/
/* GPIOA APB PID5*/
#define GPIOA_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOA_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/******************************************************************************************
************************************ 27 GPIOPeriphID6 *********************************************
******************************************************************************************/
/* GPIOA APB PID6*/
#define GPIOA_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOA_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/******************************************************************************************
************************************ 28 GPIOPeriphID7 *********************************************
******************************************************************************************/
/* GPIOA APB PID7*/
#define GPIOA_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOA_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/******************************************************************************************
************************************ 29 GPIOPeriphID0 *********************************************
******************************************************************************************/
/* GPIOA APB PID0*/
#define GPIOA_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOA_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/******************************************************************************************
************************************ 30 GPIOPeriphID1 *********************************************
******************************************************************************************/
/* GPIOA APB PID1*/
#define GPIOA_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOA_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/******************************************************************************************
************************************ 31 GPIOPeriphID2 *********************************************
******************************************************************************************/
/* GPIOA APB PID2*/
#define GPIOA_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOA_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/******************************************************************************************
************************************ 32 GPIOPeriphID3 *********************************************
******************************************************************************************/
/* GPIOA APB PID3*/
#define GPIOA_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOA_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/******************************************************************************************
************************************ 33 GPIOCellID0 *********************************************
******************************************************************************************/
/* GPIOA APB CID0*/
#define GPIOA_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOA_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCellID0_OFFSET)))

/******************************************************************************************
************************************ 34 GPIOCellID1 *********************************************
******************************************************************************************/
/* GPIOA APB CID1*/
#define GPIOA_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOA_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCellID1_OFFSET)))

/******************************************************************************************
************************************ 35 GPIOCellID2 *********************************************
******************************************************************************************/
/* GPIOA APB CID2*/
#define GPIOA_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOA_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCellID2_OFFSET)))

/******************************************************************************************
************************************ 36 GPIOCellID3 *********************************************
******************************************************************************************/
/* GPIOA APB CID3*/
#define GPIOA_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOA_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEA_H_ */
