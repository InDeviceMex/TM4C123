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

#define GPIOE_APB    ((GPIO_TypeDef*) (GPIOE_APB_BASE))
#define GPIOE_APB_AUX    ((GPIO_AUX_TypeDef*) (GPIOE_APB_BASE))

/******************************************************************************************
 ************************************ 1 GPIODATA *********************************************
 ******************************************************************************************/
/* GPIOE APB DATA*/
#define GPIOE_APB_GPIODATA_MASK    ((GPIODATA_MASK_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIODATA_MASK_OFFSET))
#define GPIOE_APB_GPIODATA0_MASK_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA1_MASK_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA2_MASK_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA3_MASK_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA4_MASK_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA5_MASK_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA6_MASK_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA7_MASK_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOE_APB_GPIODATA    ((GPIODATA_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIODATA_OFFSET))
#define GPIOE_APB_GPIODATA_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 GPIODIR *********************************************
 ******************************************************************************************/
/* GPIOE APB DIR*/
#define GPIOE_APB_GPIODIR    ((GPIODIR_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIODIR_OFFSET))
#define GPIOE_APB_GPIODIR_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 GPIOIS *********************************************
 ******************************************************************************************/
/* GPIOE APB IS*/
#define GPIOE_APB_GPIOIS    ((GPIOIS_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOIS_OFFSET))
#define GPIOE_APB_GPIOIS_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOIS_OFFSET)))

/******************************************************************************************
 ************************************ 4 GPIOIBE *********************************************
 ******************************************************************************************/
/* GPIOE APB IBE*/
#define GPIOE_APB_GPIOIBE    ((GPIOIBE_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOIBE_OFFSET))
#define GPIOE_APB_GPIOIBE_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOIBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 GPIOIEV *********************************************
 ******************************************************************************************/
/* GPIOE APB IEV*/
#define GPIOE_APB_GPIOIEV    ((GPIOIEV_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOIEV_OFFSET))
#define GPIOE_APB_GPIOIEV_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOIEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 GPIOIM *********************************************
 ******************************************************************************************/
/* GPIOE APB IME*/
#define GPIOE_APB_GPIOIM    ((GPIOIM_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOIM_OFFSET))
#define GPIOE_APB_GPIOIM_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOIM_OFFSET)))

/******************************************************************************************
 ************************************ 7 GPIORIS *********************************************
 ******************************************************************************************/
/* GPIOE APB RIS*/
#define GPIOE_APB_GPIORIS    ((GPIORIS_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIORIS_OFFSET))
#define GPIOE_APB_GPIORIS_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIORIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 GPIOMIS *********************************************
 ******************************************************************************************/
/* GPIOE APB MIS*/
#define GPIOE_APB_GPIOMIS    ((GPIOMIS_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOMIS_OFFSET))
#define GPIOE_APB_GPIOMIS_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOMIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 GPIOICR *********************************************
 ******************************************************************************************/
/* GPIOE APB IC*/
#define GPIOE_APB_GPIOICR    ((GPIOICR_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOICR_OFFSET))
#define GPIOE_APB_GPIOICR_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 GPIOEFSEL *********************************************
 ******************************************************************************************/
/* GPIOE APB AFSEL*/
#define GPIOE_APB_GPIOEFSEL    ((GPIOEFSEL_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOEFSEL_OFFSET))
#define GPIOE_APB_GPIOEFSEL_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOEFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 GPIODRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOE APB DRV2*/
#define GPIOE_APB_GPIODRR    ((GPIODRR_ARRAY_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIODR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 GPIODR2R *********************************************
 ******************************************************************************************/
/* GPIOE APB DRV2*/
#define GPIOE_APB_GPIODR2R    ((GPIODR2R_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIODR2R_OFFSET))
#define GPIOE_APB_GPIODR2R_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 GPIODR4R *********************************************
 ******************************************************************************************/
/* GPIOE APB DRV4*/
#define GPIOE_APB_GPIODR4R    ((GPIODR4R_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIODR4R_OFFSET))
#define GPIOE_APB_GPIODR4R_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 GPIODR8R *********************************************
 ******************************************************************************************/
/* GPIOE APB DRV8*/
#define GPIOE_APB_GPIODR8R    ((GPIODR8R_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIODR8R_OFFSET))
#define GPIOE_APB_GPIODR8R_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 GPIOODR *********************************************
 ******************************************************************************************/
/* GPIOE APB ODE*/
#define GPIOE_APB_GPIOODR    ((GPIOODR_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOODR_OFFSET))
#define GPIOE_APB_GPIOODR_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 GPIOPUR *********************************************
 ******************************************************************************************/
/* GPIOE APB PUE*/
#define GPIOE_APB_GPIOPUR    ((GPIOPUR_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOPUR_OFFSET))
#define GPIOE_APB_GPIOPUR_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOPUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 GPIOPDR *********************************************
 ******************************************************************************************/
/* GPIOE APB PDE*/
#define GPIOE_APB_GPIOPDR    ((GPIOPDR_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOPDR_OFFSET))
#define GPIOE_APB_GPIOPDR_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOPDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 GPIOSLR *********************************************
 ******************************************************************************************/
/* GPIOE APB SLR*/
#define GPIOE_APB_GPIOSLR    ((GPIOSLR_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOSLR_OFFSET))
#define GPIOE_APB_GPIOSLR_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOSLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 GPIODEN *********************************************
 ******************************************************************************************/
/* GPIOE APB DEN*/
#define GPIOE_APB_GPIODEN    ((GPIODEN_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIODEN_OFFSET))
#define GPIOE_APB_GPIODEN_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 GPIOLOCK *********************************************
 ******************************************************************************************/
/* GPIOE APB LOCK*/
#define GPIOE_APB_GPIOLOCK    ((GPIOLOCK_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOLOCK_OFFSET))
#define GPIOE_APB_GPIOLOCK_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOLOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 GPIOCR *********************************************
 ******************************************************************************************/
/* GPIOE APB CR*/
#define GPIOE_APB_GPIOCR    ((GPIOCR_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOCR_OFFSET))
#define GPIOE_APB_GPIOCR_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOCR_OFFSET)))

/******************************************************************************************
 ************************************ 21 GPIOEMSEL *********************************************
 ******************************************************************************************/
/* GPIOE APB AMSEL*/
#define GPIOE_APB_GPIOEMSEL    ((GPIOEMSEL_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOEMSEL_OFFSET))
#define GPIOE_APB_GPIOEMSEL_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOEMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 GPIOPCTL *********************************************
 ******************************************************************************************/
/* GPIOE APB PCM*/
#define GPIOE_APB_GPIOPCTL    ((GPIOPCTL_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOPCTL_OFFSET))
#define GPIOE_APB_GPIOPCTL_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOPCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 GPIOEDCCTL *********************************************
 ******************************************************************************************/
/* GPIOE APB ADCEN*/
#define GPIOE_APB_GPIOEDCCTL    ((GPIOEDCCTL_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOEDCCTL_OFFSET))
#define GPIOE_APB_GPIOEDCCTL_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOEDCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 GPIODMACTL *********************************************
 ******************************************************************************************/
/* GPIOE APB DMAEN*/
#define GPIOE_APB_GPIODMACTL    ((GPIODMACTL_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIODMACTL_OFFSET))
#define GPIOE_APB_GPIODMACTL_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIODMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 GPIOPeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID4*/
#define GPIOE_APB_GPIOPeriphID4    ((GPIOPeriphID4_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOPeriphID4_OFFSET))
#define GPIOE_APB_GPIOPeriphID4_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOPeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 26 GPIOPeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID5*/
#define GPIOE_APB_GPIOPeriphID5    ((GPIOPeriphID5_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOPeriphID5_OFFSET))
#define GPIOE_APB_GPIOPeriphID5_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOPeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 27 GPIOPeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID6*/
#define GPIOE_APB_GPIOPeriphID6    ((GPIOPeriphID6_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOPeriphID6_OFFSET))
#define GPIOE_APB_GPIOPeriphID6_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOPeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 28 GPIOPeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID7*/
#define GPIOE_APB_GPIOPeriphID7    ((GPIOPeriphID7_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOPeriphID7_OFFSET))
#define GPIOE_APB_GPIOPeriphID7_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOPeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 29 GPIOPeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID0*/
#define GPIOE_APB_GPIOPeriphID0    ((GPIOPeriphID0_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOPeriphID0_OFFSET))
#define GPIOE_APB_GPIOPeriphID0_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOPeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 30 GPIOPeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID1*/
#define GPIOE_APB_GPIOPeriphID1    ((GPIOPeriphID1_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOPeriphID1_OFFSET))
#define GPIOE_APB_GPIOPeriphID1_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOPeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 31 GPIOPeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID2*/
#define GPIOE_APB_GPIOPeriphID2    ((GPIOPeriphID2_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOPeriphID2_OFFSET))
#define GPIOE_APB_GPIOPeriphID2_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOPeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 32 GPIOPeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOE APB PID3*/
#define GPIOE_APB_GPIOPeriphID3    ((GPIOPeriphID3_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOPeriphID3_OFFSET))
#define GPIOE_APB_GPIOPeriphID3_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOPeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 33 GPIOCellID0 *********************************************
 ******************************************************************************************/
/* GPIOE APB CID0*/
#define GPIOE_APB_GPIOCellID0    ((GPIOCellID0_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOCellID0_OFFSET))
#define GPIOE_APB_GPIOCellID0_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 34 GPIOCellID1 *********************************************
 ******************************************************************************************/
/* GPIOE APB CID1*/
#define GPIOE_APB_GPIOCellID1    ((GPIOCellID1_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOCellID1_OFFSET))
#define GPIOE_APB_GPIOCellID1_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 35 GPIOCellID2 *********************************************
 ******************************************************************************************/
/* GPIOE APB CID2*/
#define GPIOE_APB_GPIOCellID2    ((GPIOCellID2_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOCellID2_OFFSET))
#define GPIOE_APB_GPIOCellID2_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 36 GPIOCellID3 *********************************************
 ******************************************************************************************/
/* GPIOE APB CID3*/
#define GPIOE_APB_GPIOCellID3    ((GPIOCellID3_TypeDef*) (GPIOE_APB_BASE + GPIO_GPIOCellID3_OFFSET))
#define GPIOE_APB_GPIOCellID3_R    (*((volatile uint32_t *) (GPIOE_APB_BASE + GPIO_GPIOCellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_MODULEE_H_ */
