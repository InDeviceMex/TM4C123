/**
 *
 * @file GPIO_RegisterPeripheral_APB_ModuleD.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULED_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULED_H_

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Struct/GPIO_StructPeripheral.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Register/GPIO_RegisterAddress.h>

#define GPIOD_APB               (((GPIO_TypeDef*)(GPIOD_APB_BASE)))
#define GPIOD_APB_AUX               (((GPIO_AUX_TypeDef*)(GPIOD_APB_BASE)))

/******************************************************************************************
************************************ 1 GPIODATA *********************************************
******************************************************************************************/
/* GPIOC APB DATA*/
#define GPIOD_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOD_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOD_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOD_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOD_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODATA_OFFSET)))

/******************************************************************************************
************************************ 2 GPIODIR *********************************************
******************************************************************************************/
/* GPIOC APB DIR*/
#define GPIOD_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOD_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODIR_OFFSET)))

/******************************************************************************************
************************************ 3 GPIOIS *********************************************
******************************************************************************************/
/* GPIOC APB IS*/
#define GPIOD_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOD_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOIS_OFFSET)))

/******************************************************************************************
************************************ 4 GPIOIBE *********************************************
******************************************************************************************/
/* GPIOC APB IBE*/
#define GPIOD_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOD_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOIBE_OFFSET)))

/******************************************************************************************
************************************ 5 GPIOIEV *********************************************
******************************************************************************************/
//* GPIOC APB IEV*/
#define GPIOD_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOD_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOIEV_OFFSET)))

/******************************************************************************************
************************************ 6 GPIOIM *********************************************
******************************************************************************************/
/* GPIOC APB IME*/
#define GPIOD_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOD_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOIM_OFFSET)))

/******************************************************************************************
************************************ 7 GPIORIS *********************************************
******************************************************************************************/
/* GPIOC APB RIS*/
#define GPIOD_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOD_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIORIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPIOMIS *********************************************
******************************************************************************************/
/* GPIOC APB MIS*/
#define GPIOD_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOD_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPIOICR *********************************************
******************************************************************************************/
/* GPIOC APB IC*/
#define GPIOD_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOD_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPIOAFSEL *********************************************
******************************************************************************************/
/* GPIOC APB AFSEL*/
#define GPIOD_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOD_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/******************************************************************************************
************************************ 11 GPIODRR ARRAY *********************************************
******************************************************************************************/
/* GPIOC APB DRV2*/
#define GPIOD_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
************************************ 11 GPIODR2R *********************************************
******************************************************************************************/
/* GPIOC APB DRV2*/
#define GPIOD_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOD_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
************************************ 12 GPIODR4R *********************************************
******************************************************************************************/
/* GPIOC APB DRV4*/
#define GPIOD_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOD_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODR4R_OFFSET)))

/******************************************************************************************
************************************ 13 GPIODR8R *********************************************
******************************************************************************************/
/* GPIOC APB DRV8*/
#define GPIOD_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOD_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODR8R_OFFSET)))

/******************************************************************************************
************************************ 14 GPIOODR *********************************************
******************************************************************************************/
/* GPIOC APB ODE*/
#define GPIOD_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOD_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOODR_OFFSET)))

/******************************************************************************************
************************************ 15 GPIOPUR *********************************************
******************************************************************************************/
/* GPIOC APB PUE*/
#define GPIOD_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOD_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPUR_OFFSET)))

/******************************************************************************************
************************************ 16 GPIOPDR *********************************************
******************************************************************************************/
/* GPIOC APB PDE*/
#define GPIOD_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOD_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPDR_OFFSET)))

/******************************************************************************************
************************************ 17 GPIOSLR *********************************************
******************************************************************************************/
/* GPIOC APB SLR*/
#define GPIOD_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOD_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOSLR_OFFSET)))

/******************************************************************************************
************************************ 18 GPIODEN *********************************************
******************************************************************************************/
/* GPIOC APB DEN*/
#define GPIOD_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOD_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODEN_OFFSET)))

/******************************************************************************************
************************************ 19 GPIOLOCK *********************************************
******************************************************************************************/
/* GPIOC APB LOCK*/
#define GPIOD_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOD_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOLOCK_OFFSET)))

/******************************************************************************************
************************************ 20 GPIOCR *********************************************
******************************************************************************************/
/* GPIOC APB CR*/
#define GPIOD_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOD_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCR_OFFSET)))

/******************************************************************************************
************************************ 21 GPIOAMSEL *********************************************
******************************************************************************************/
/* GPIOC APB AMSEL*/
#define GPIOD_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOD_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/******************************************************************************************
************************************ 22 GPIOPCTL *********************************************
******************************************************************************************/
/* GPIOC APB PCM*/
#define GPIOD_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOD_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/******************************************************************************************
************************************ 23 GPIOADCCTL *********************************************
******************************************************************************************/
/* GPIOC APB ADCEN*/
#define GPIOD_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOD_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/******************************************************************************************
************************************ 24 GPIODMACTL *********************************************
******************************************************************************************/
/* GPIOC APB DMAEN*/
#define GPIOD_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOD_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODMACTL_OFFSET)))

/******************************************************************************************
************************************ 25 GPIOPeriphID4 *********************************************
******************************************************************************************/
/* GPIOC APB PID4*/
#define GPIOD_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOD_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/******************************************************************************************
************************************ 26 GPIOPeriphID5 *********************************************
******************************************************************************************/
/* GPIOC APB PID5*/
#define GPIOD_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOD_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/******************************************************************************************
************************************ 27 GPIOPeriphID6 *********************************************
******************************************************************************************/
/* GPIOC APB PID6*/
#define GPIOD_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOD_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/******************************************************************************************
************************************ 28 GPIOPeriphID7 *********************************************
******************************************************************************************/
/* GPIOC APB PID7*/
#define GPIOD_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOD_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/******************************************************************************************
************************************ 29 GPIOPeriphID0 *********************************************
******************************************************************************************/
/* GPIOC APB PID0*/
#define GPIOD_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOD_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/******************************************************************************************
************************************ 30 GPIOPeriphID1 *********************************************
******************************************************************************************/
/* GPIOC APB PID1*/
#define GPIOD_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOD_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/******************************************************************************************
************************************ 31 GPIOPeriphID2 *********************************************
******************************************************************************************/
/* GPIOC APB PID2*/
#define GPIOD_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOD_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/******************************************************************************************
************************************ 32 GPIOPeriphID3 *********************************************
******************************************************************************************/
/* GPIOC APB PID3*/
#define GPIOD_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOD_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/******************************************************************************************
************************************ 33 GPIOCellID0 *********************************************
******************************************************************************************/
/* GPIOC APB CID0*/
#define GPIOD_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOD_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCellID0_OFFSET)))

/******************************************************************************************
************************************ 34 GPIOCellID1 *********************************************
******************************************************************************************/
/* GPIOC APB CID1*/
#define GPIOD_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOD_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCellID1_OFFSET)))

/******************************************************************************************
************************************ 35 GPIOCellID2 *********************************************
******************************************************************************************/
/* GPIOC APB CID2*/
#define GPIOD_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOD_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCellID2_OFFSET)))

/******************************************************************************************
************************************ 36 GPIOCellID3 *********************************************
******************************************************************************************/
/* GPIOC APB CID3*/
#define GPIOD_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOD_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULED_H_ */
