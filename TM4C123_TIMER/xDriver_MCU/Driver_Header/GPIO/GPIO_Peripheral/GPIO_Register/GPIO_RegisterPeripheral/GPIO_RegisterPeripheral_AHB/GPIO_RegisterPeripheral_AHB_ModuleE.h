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

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Struct/GPIO_StructPeripheral.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Register/GPIO_RegisterAddress.h>

#define GPIOE_AHB               (((GPIO_TypeDef*)(GPIOE_AHB_BASE)))
#define GPIOE_AHB_AUX               (((GPIO_AUX_TypeDef*)(GPIOE_AHB_BASE)))

/******************************************************************************************
************************************ 1 GPIODATA *********************************************
******************************************************************************************/
/* GPIOC AHB DATA*/
#define GPIOE_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOE_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOE_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOE_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOE_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/******************************************************************************************
************************************ 2 GPIODIR *********************************************
******************************************************************************************/
/* GPIOC AHB DIR*/
#define GPIOE_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOE_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/******************************************************************************************
************************************ 3 GPIOIS *********************************************
******************************************************************************************/
/* GPIOC AHB IS*/
#define GPIOE_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOE_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/******************************************************************************************
************************************ 4 GPIOIBE *********************************************
******************************************************************************************/
/* GPIOC AHB IBE*/
#define GPIOE_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOE_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/******************************************************************************************
************************************ 5 GPIOIEV *********************************************
******************************************************************************************/
/* GPIOC AHB IEV*/
#define GPIOE_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOE_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/******************************************************************************************
************************************ 6 GPIOIM *********************************************
******************************************************************************************/
/* GPIOC AHB IME*/
#define GPIOE_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOE_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/******************************************************************************************
************************************ 7 GPIORIS *********************************************
******************************************************************************************/
/* GPIOC AHB RIS*/
#define GPIOE_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOE_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPIOMIS *********************************************
******************************************************************************************/
/* GPIOC AHB MIS*/
#define GPIOE_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOE_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPIOICR *********************************************
******************************************************************************************/
/* GPIOC AHB IC*/
#define GPIOE_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOE_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPIOAFSEL *********************************************
******************************************************************************************/
/* GPIOC AHB AFSEL*/
#define GPIOE_AHB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOE_AHB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/******************************************************************************************
************************************ 11 GPIODRR ARRAY *********************************************
******************************************************************************************/
/* GPIOC AHB DRV2*/
#define GPIOE_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
************************************ 11 GPIODR2R *********************************************
******************************************************************************************/
/* GPIOC AHB DRV2*/
#define GPIOE_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOE_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
************************************ 12 GPIODR4R *********************************************
******************************************************************************************/
/* GPIOC AHB DRV4*/
#define GPIOE_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOE_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/******************************************************************************************
************************************ 13 GPIODR8R *********************************************
******************************************************************************************/
/* GPIOC AHB DRV8*/
#define GPIOE_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOE_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/******************************************************************************************
************************************ 14 GPIOODR *********************************************
******************************************************************************************/
/* GPIOC AHB ODE*/
#define GPIOE_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOE_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/******************************************************************************************
************************************ 15 GPIOPUR *********************************************
******************************************************************************************/
/* GPIOC AHB PUE*/
#define GPIOE_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOE_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/******************************************************************************************
************************************ 16 GPIOPDR *********************************************
******************************************************************************************/
/* GPIOC AHB PDE*/
#define GPIOE_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOE_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/******************************************************************************************
************************************ 17 GPIOSLR *********************************************
******************************************************************************************/
/* GPIOC AHB SLR*/
#define GPIOE_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOE_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/******************************************************************************************
************************************ 18 GPIODEN *********************************************
******************************************************************************************/
/* GPIOC AHB DEN*/
#define GPIOE_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOE_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/******************************************************************************************
************************************ 19 GPIOLOCK *********************************************
******************************************************************************************/
/* GPIOC AHB LOCK*/
#define GPIOE_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOE_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/******************************************************************************************
************************************ 20 GPIOCR *********************************************
******************************************************************************************/
/* GPIOC AHB CR*/
#define GPIOE_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOE_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/******************************************************************************************
************************************ 21 GPIOAMSEL *********************************************
******************************************************************************************/
/* GPIOC AHB AMSEL*/
#define GPIOE_AHB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOE_AHB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/******************************************************************************************
************************************ 22 GPIOPCTL *********************************************
******************************************************************************************/
/* GPIOC AHB PCM*/
#define GPIOE_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOE_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/******************************************************************************************
************************************ 23 GPIOADCCTL *********************************************
******************************************************************************************/
/* GPIOC AHB ADCEN*/
#define GPIOE_AHB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOE_AHB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/******************************************************************************************
************************************ 24 GPIODMACTL *********************************************
******************************************************************************************/
/* GPIOC AHB DMAEN*/
#define GPIOE_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOE_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/******************************************************************************************
************************************ 25 GPIOPeriphID4 *********************************************
******************************************************************************************/
/* GPIOC AHB PID4*/
#define GPIOE_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/******************************************************************************************
************************************ 26 GPIOPeriphID5 *********************************************
******************************************************************************************/
/* GPIOC AHB PID5*/
#define GPIOE_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/******************************************************************************************
************************************ 27 GPIOPeriphID6 *********************************************
******************************************************************************************/
/* GPIOC AHB PID6*/
#define GPIOE_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/******************************************************************************************
************************************ 28 GPIOPeriphID7 *********************************************
******************************************************************************************/
/* GPIOC AHB PID7*/
#define GPIOE_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/******************************************************************************************
************************************ 29 GPIOPeriphID0 *********************************************
******************************************************************************************/
/* GPIOC AHB PID0*/
#define GPIOE_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/******************************************************************************************
************************************ 30 GPIOPeriphID1 *********************************************
******************************************************************************************/
/* GPIOC AHB PID1*/
#define GPIOE_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/******************************************************************************************
************************************ 31 GPIOPeriphID2 *********************************************
******************************************************************************************/
/* GPIOC AHB PID2*/
#define GPIOE_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/******************************************************************************************
************************************ 32 GPIOPeriphID3 *********************************************
******************************************************************************************/
/* GPIOC AHB PID3*/
#define GPIOE_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/******************************************************************************************
************************************ 33 GPIOCellID0 *********************************************
******************************************************************************************/
/* GPIOC AHB CID0*/
#define GPIOE_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOE_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/******************************************************************************************
************************************ 34 GPIOCellID1 *********************************************
******************************************************************************************/
/* GPIOC AHB CID1*/
#define GPIOE_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOE_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/******************************************************************************************
************************************ 35 GPIOCellID2 *********************************************
******************************************************************************************/
/* GPIOC AHB CID2*/
#define GPIOE_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOE_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/******************************************************************************************
************************************ 36 GPIOCellID3 *********************************************
******************************************************************************************/
/* GPIOC AHB CID3*/
#define GPIOE_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOE_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEE_H_ */
