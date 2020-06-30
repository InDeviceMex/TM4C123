/**
 *
 * @file GPIO_RegisterPeripheral_APB_ModuleC.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEC_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEC_H_

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Struct/GPIO_StructPeripheral.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Register/GPIO_RegisterAddress.h>

#define GPIOC_APB               (((GPIO_TypeDef*)(GPIOC_APB_BASE)))
#define GPIOC_APB_AUX               (((GPIO_AUX_TypeDef*)(GPIOC_APB_BASE)))

/******************************************************************************************
************************************ 1 GPIODATA *********************************************
******************************************************************************************/
/* GPIOC APB DATA*/
#define GPIOC_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOC_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOC_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOC_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOC_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODATA_OFFSET)))

/******************************************************************************************
************************************ 2 GPIODIR *********************************************
******************************************************************************************/
/* GPIOC APB DIR*/
#define GPIOC_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOC_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODIR_OFFSET)))

/******************************************************************************************
************************************ 3 GPIOIS *********************************************
******************************************************************************************/
/* GPIOC APB IS*/
#define GPIOC_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOC_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOIS_OFFSET)))

/******************************************************************************************
************************************ 4 GPIOIBE *********************************************
******************************************************************************************/
/* GPIOC APB IBE*/
#define GPIOC_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOC_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOIBE_OFFSET)))

/******************************************************************************************
************************************ 5 GPIOIEV *********************************************
******************************************************************************************/
/* GPIOC APB IEV*/
#define GPIOC_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOC_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOIEV_OFFSET)))

/******************************************************************************************
************************************ 6 GPIOIM *********************************************
******************************************************************************************/
/* GPIOC APB IME*/
#define GPIOC_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOC_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOIM_OFFSET)))

/******************************************************************************************
************************************ 7 GPIORIS *********************************************
******************************************************************************************/
/* GPIOC APB RIS*/
#define GPIOC_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOC_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIORIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPIOMIS *********************************************
******************************************************************************************/
/* GPIOC APB MIS*/
#define GPIOC_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOC_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPIOICR *********************************************
******************************************************************************************/
/* GPIOC APB IC*/
#define GPIOC_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOC_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPIOAFSEL *********************************************
******************************************************************************************/
/* GPIOC APB AFSEL*/
#define GPIOC_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOC_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/******************************************************************************************
************************************ 11 GPIODRR ARRAY *********************************************
******************************************************************************************/
/* GPIOC APB DRV2*/
#define GPIOC_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
************************************ 11 GPIODR2R *********************************************
******************************************************************************************/
/* GPIOC APB DRV2*/
#define GPIOC_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOC_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
************************************ 12 GPIODR4R *********************************************
******************************************************************************************/
/* GPIOC APB DRV4*/
#define GPIOC_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOC_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODR4R_OFFSET)))

/******************************************************************************************
************************************ 13 GPIODR8R *********************************************
******************************************************************************************/
/* GPIOC APB DRV8*/
#define GPIOC_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOC_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODR8R_OFFSET)))

/******************************************************************************************
************************************ 14 GPIOODR *********************************************
******************************************************************************************/
/* GPIOC APB ODE*/
#define GPIOC_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOC_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOODR_OFFSET)))

/******************************************************************************************
************************************ 15 GPIOPUR *********************************************
******************************************************************************************/
/* GPIOC APB PUE*/
#define GPIOC_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOC_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPUR_OFFSET)))

/******************************************************************************************
************************************ 16 GPIOPDR *********************************************
******************************************************************************************/
/* GPIOC APB PDE*/
#define GPIOC_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOC_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPDR_OFFSET)))

/******************************************************************************************
************************************ 17 GPIOSLR *********************************************
******************************************************************************************/
/* GPIOC APB SLR*/
#define GPIOC_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOC_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOSLR_OFFSET)))

/******************************************************************************************
************************************ 18 GPIODEN *********************************************
******************************************************************************************/
/* GPIOC APB DEN*/
#define GPIOC_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOC_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODEN_OFFSET)))

/******************************************************************************************
************************************ 19 GPIOLOCK *********************************************
******************************************************************************************/
/* GPIOC APB LOCK*/
#define GPIOC_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOC_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOLOCK_OFFSET)))

/******************************************************************************************
************************************ 20 GPIOCR *********************************************
******************************************************************************************/
/* GPIOC APB CR*/
#define GPIOC_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOC_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCR_OFFSET)))

/******************************************************************************************
************************************ 21 GPIOAMSEL *********************************************
******************************************************************************************/
/* GPIOC APB AMSEL*/
#define GPIOC_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOC_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/******************************************************************************************
************************************ 22 GPIOPCTL *********************************************
******************************************************************************************/
/* GPIOC APB PCM*/
#define GPIOC_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOC_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/******************************************************************************************
************************************ 23 GPIOADCCTL *********************************************
******************************************************************************************/
/* GPIOC APB ADCEN*/
#define GPIOC_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOC_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/******************************************************************************************
************************************ 24 GPIODMACTL *********************************************
******************************************************************************************/
/* GPIOC APB DMAEN*/
#define GPIOC_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOC_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODMACTL_OFFSET)))

/******************************************************************************************
************************************ 25 GPIOPeriphID4 *********************************************
******************************************************************************************/
/* GPIOC APB PID4*/
#define GPIOC_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOC_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/******************************************************************************************
************************************ 26 GPIOPeriphID5 *********************************************
******************************************************************************************/
/* GPIOC APB PID5*/
#define GPIOC_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOC_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/******************************************************************************************
************************************ 27 GPIOPeriphID6 *********************************************
******************************************************************************************/
/* GPIOC APB PID6*/
#define GPIOC_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOC_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/******************************************************************************************
************************************ 28 GPIOPeriphID7 *********************************************
******************************************************************************************/
/* GPIOC APB PID7*/
#define GPIOC_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOC_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/******************************************************************************************
************************************ 29 GPIOPeriphID0 *********************************************
******************************************************************************************/
/* GPIOC APB PID0*/
#define GPIOC_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOC_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/******************************************************************************************
************************************ 30 GPIOPeriphID1 *********************************************
******************************************************************************************/
/* GPIOC APB PID1*/
#define GPIOC_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOC_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/******************************************************************************************
************************************ 31 GPIOPeriphID2 *********************************************
******************************************************************************************/
/* GPIOC APB PID2*/
#define GPIOC_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOC_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/******************************************************************************************
************************************ 32 GPIOPeriphID3 *********************************************
******************************************************************************************/
/* GPIOC APB PID3*/
#define GPIOC_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOC_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/******************************************************************************************
************************************ 33 GPIOCellID0 *********************************************
******************************************************************************************/
/* GPIOC APB CID0*/
#define GPIOC_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOC_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCellID0_OFFSET)))

/******************************************************************************************
************************************ 34 GPIOCellID1 *********************************************
******************************************************************************************/
/* GPIOC APB CID1*/
#define GPIOC_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOC_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCellID1_OFFSET)))

/******************************************************************************************
************************************ 35 GPIOCellID2 *********************************************
******************************************************************************************/
/* GPIOC APB CID2*/
#define GPIOC_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOC_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCellID2_OFFSET)))

/******************************************************************************************
************************************ 36 GPIOCellID3 *********************************************
******************************************************************************************/
/* GPIOC APB CID3*/
#define GPIOC_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOC_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEC_H_ */
