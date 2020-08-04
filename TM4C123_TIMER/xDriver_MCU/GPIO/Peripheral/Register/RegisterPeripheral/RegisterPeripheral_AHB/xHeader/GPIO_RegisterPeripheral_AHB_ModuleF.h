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

#define GPIOF_AHB               (((GPIO_TypeDef*)(GPIOF_AHB_BASE)))
#define GPIOF_AHB_AUX               (((GPIO_AUX_TypeDef*)(GPIOF_AHB_BASE)))

/******************************************************************************************
************************************ 1 GPIODATA *********************************************
******************************************************************************************/
/* GPIOF AHB DATA*/
#define GPIOF_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOF_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOF_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOF_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOF_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/******************************************************************************************
************************************ 2 GPIODIR *********************************************
******************************************************************************************/
/* GPIOF AHB DIR*/
#define GPIOF_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOF_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/******************************************************************************************
************************************ 3 GPIOIS *********************************************
******************************************************************************************/
/* GPIOF AHB IS*/
#define GPIOF_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOF_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/******************************************************************************************
************************************ 4 GPIOIBE *********************************************
******************************************************************************************/
/* GPIOF AHB IBE*/
#define GPIOF_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOF_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/******************************************************************************************
************************************ 5 GPIOIEV *********************************************
******************************************************************************************/
/* GPIOF AHB IEV*/
#define GPIOF_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOF_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/******************************************************************************************
************************************ 6 GPIOIM *********************************************
******************************************************************************************/
/* GPIOF AHB IME*/
#define GPIOF_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOF_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/******************************************************************************************
************************************ 7 GPIORIS *********************************************
******************************************************************************************/
/* GPIOF AHB RIS*/
#define GPIOF_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOF_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPIOMIS *********************************************
******************************************************************************************/
/* GPIOF AHB MIS*/
#define GPIOF_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOF_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPIOICR *********************************************
******************************************************************************************/
/* GPIOF AHB IC*/
#define GPIOF_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOF_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPIOFFSEL *********************************************
******************************************************************************************/
/* GPIOF AHB AFSEL*/
#define GPIOF_AHB_GPIOFFSEL                  (((GPIOFFSEL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOFFSEL_OFFSET)))
#define GPIOF_AHB_GPIOFFSEL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOFFSEL_OFFSET)))

/******************************************************************************************
************************************ 11 GPIODRR ARRAY *********************************************
******************************************************************************************/
/* GPIOF AHB DRV2*/
#define GPIOF_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
************************************ 11 GPIODR2R *********************************************
******************************************************************************************/
/* GPIOF AHB DRV2*/
#define GPIOF_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOF_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
************************************ 12 GPIODR4R *********************************************
******************************************************************************************/
/* GPIOF AHB DRV4*/
#define GPIOF_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOF_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/******************************************************************************************
************************************ 13 GPIODR8R *********************************************
******************************************************************************************/
/* GPIOF AHB DRV8*/
#define GPIOF_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOF_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/******************************************************************************************
************************************ 14 GPIOODR *********************************************
******************************************************************************************/
/* GPIOF AHB ODE*/
#define GPIOF_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOF_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/******************************************************************************************
************************************ 15 GPIOPUR *********************************************
******************************************************************************************/
/* GPIOF AHB PUE*/
#define GPIOF_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOF_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/******************************************************************************************
************************************ 16 GPIOPDR *********************************************
******************************************************************************************/
/* GPIOF AHB PDE*/
#define GPIOF_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOF_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/******************************************************************************************
************************************ 17 GPIOSLR *********************************************
******************************************************************************************/
/* GPIOF AHB SLR*/
#define GPIOF_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOF_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/******************************************************************************************
************************************ 18 GPIODEN *********************************************
******************************************************************************************/
/* GPIOF AHB DEN*/
#define GPIOF_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOF_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/******************************************************************************************
************************************ 19 GPIOLOCK *********************************************
******************************************************************************************/
/* GPIOF AHB LOCK*/
#define GPIOF_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOF_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/******************************************************************************************
************************************ 20 GPIOCR *********************************************
******************************************************************************************/
/* GPIOF AHB CR*/
#define GPIOF_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOF_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/******************************************************************************************
************************************ 21 GPIOFMSEL *********************************************
******************************************************************************************/
/* GPIOF AHB AMSEL*/
#define GPIOF_AHB_GPIOFMSEL                  (((GPIOFMSEL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOFMSEL_OFFSET)))
#define GPIOF_AHB_GPIOFMSEL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOFMSEL_OFFSET)))

/******************************************************************************************
************************************ 22 GPIOPCTL *********************************************
******************************************************************************************/
/* GPIOF AHB PCM*/
#define GPIOF_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOF_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/******************************************************************************************
************************************ 23 GPIOFDCCTL *********************************************
******************************************************************************************/
/* GPIOF AHB ADCEN*/
#define GPIOF_AHB_GPIOFDCCTL                  (((GPIOFDCCTL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOFDCCTL_OFFSET)))
#define GPIOF_AHB_GPIOFDCCTL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOFDCCTL_OFFSET)))

/******************************************************************************************
************************************ 24 GPIODMACTL *********************************************
******************************************************************************************/
/* GPIOF AHB DMAEN*/
#define GPIOF_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOF_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/******************************************************************************************
************************************ 25 GPIOPeriphID4 *********************************************
******************************************************************************************/
/* GPIOF AHB PID4*/
#define GPIOF_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/******************************************************************************************
************************************ 26 GPIOPeriphID5 *********************************************
******************************************************************************************/
/* GPIOF AHB PID5*/
#define GPIOF_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/******************************************************************************************
************************************ 27 GPIOPeriphID6 *********************************************
******************************************************************************************/
/* GPIOF AHB PID6*/
#define GPIOF_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/******************************************************************************************
************************************ 28 GPIOPeriphID7 *********************************************
******************************************************************************************/
/* GPIOF AHB PID7*/
#define GPIOF_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/******************************************************************************************
************************************ 29 GPIOPeriphID0 *********************************************
******************************************************************************************/
/* GPIOF AHB PID0*/
#define GPIOF_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/******************************************************************************************
************************************ 30 GPIOPeriphID1 *********************************************
******************************************************************************************/
/* GPIOF AHB PID1*/
#define GPIOF_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/******************************************************************************************
************************************ 31 GPIOPeriphID2 *********************************************
******************************************************************************************/
/* GPIOF AHB PID2*/
#define GPIOF_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/******************************************************************************************
************************************ 32 GPIOPeriphID3 *********************************************
******************************************************************************************/
/* GPIOF AHB PID3*/
#define GPIOF_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/******************************************************************************************
************************************ 33 GPIOCellID0 *********************************************
******************************************************************************************/
/* GPIOF AHB CID0*/
#define GPIOF_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOF_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/******************************************************************************************
************************************ 34 GPIOCellID1 *********************************************
******************************************************************************************/
/* GPIOF AHB CID1*/
#define GPIOF_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOF_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/******************************************************************************************
************************************ 35 GPIOCellID2 *********************************************
******************************************************************************************/
/* GPIOF AHB CID2*/
#define GPIOF_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOF_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/******************************************************************************************
************************************ 36 GPIOCellID3 *********************************************
******************************************************************************************/
/* GPIOF AHB CID3*/
#define GPIOF_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOF_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEF_H_ */
