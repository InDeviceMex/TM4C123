/**
 *
 * @file NVIC_RegisterPeripheral.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/Core/NVIC/Peripheral/Struct/xHeader/NVIC_StructPeripheral.h>
#include <xDriver_MCU/Core/NVIC/Peripheral/Register/xHeader/NVIC_RegisterAddress.h>

#define NVIC    ((NVIC_TypeDef*) (NVIC_BASE + NVIC_OFFSET))   /*!< NVIC configuration struct          */
#define NVICw    ((NVICw_TypeDef*) (NVIC_BASE + NVIC_OFFSET))   /*!< NVIC configuration struct          */
#define NVICb    ((NVICb_TypeDef*) (NVIC_BASE + NVIC_OFFSET))   /*!< NVIC configuration struct          */

/********************************************************************************************/
/************************************* ISER0 ***********************************************/
/********************************************************************************************/
#define NVIC_ISER0    (((NVIC0_TypeDef*) (NVIC_BASE + NVIC_ISER0_OFFSET)))
#define NVIC_ISER0_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ISER0_OFFSET)))

/********************************************************************************************/
/************************************* ICER0 ***********************************************/
/********************************************************************************************/
#define NVIC_ICER0    (((NVIC0_TypeDef*) (NVIC_BASE + NVIC_ICER0_OFFSET)))
#define NVIC_ICER0_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ICER0_OFFSET)))

/********************************************************************************************/
/************************************* ISPR0 ***********************************************/
/********************************************************************************************/
#define NVIC_ISPR0    (((NVIC0_TypeDef*) (NVIC_BASE + NVIC_ISPR0_OFFSET)))
#define NVIC_ISPR0_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ISPR0_OFFSET)))

/********************************************************************************************/
/************************************* ICPR0 ***********************************************/
/********************************************************************************************/
#define NVIC_ICPR0    (((NVIC0_TypeDef*) (NVIC_BASE + NVIC_ICPR0_OFFSET)))
#define NVIC_ICPR0_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ICPR0_OFFSET)))

/********************************************************************************************/
/************************************* IABR0 ***********************************************/
/********************************************************************************************/
#define NVIC_IABR0    (((NVIC0_TypeDef*) (NVIC_BASE + NVIC_IABR0_OFFSET)))
#define NVIC_IABR0_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IABR0_OFFSET)))

/********************************************************************************************/
/************************************* ISER1 ***********************************************/
/********************************************************************************************/
#define NVIC_ISER1    (((NVIC1_TypeDef*) (NVIC_BASE + NVIC_ISER1_OFFSET)))
#define NVIC_ISER1_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ISER1_OFFSET)))

/********************************************************************************************/
/************************************* ICER1 ***********************************************/
/********************************************************************************************/
#define NVIC_ICER1    (((NVIC1_TypeDef*) (NVIC_BASE + NVIC_ICER1_OFFSET)))
#define NVIC_ICER1_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ICER1_OFFSET)))

/********************************************************************************************/
/************************************* ISPR1 ***********************************************/
/********************************************************************************************/
#define NVIC_ISPR1    (((NVIC1_TypeDef*) (NVIC_BASE + NVIC_ISPR1_OFFSET)))
#define NVIC_ISPR1_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ISPR1_OFFSET)))

/********************************************************************************************/
/************************************* ICPR1 ***********************************************/
/********************************************************************************************/
#define NVIC_ICPR1    (((NVIC1_TypeDef*) (NVIC_BASE + NVIC_ICPR1_OFFSET)))
#define NVIC_ICPR1_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ICPR1_OFFSET)))

/********************************************************************************************/
/************************************* IABR1 ***********************************************/
/********************************************************************************************/
#define NVIC_IABR1    (((NVIC1_TypeDef*) (NVIC_BASE + NVIC_IABR1_OFFSET)))
#define NVIC_IABR1_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IABR1_OFFSET)))

/********************************************************************************************/
/************************************* ISER2 ***********************************************/
/********************************************************************************************/
#define NVIC_ISER2    (((NVIC2_TypeDef*) (NVIC_BASE + NVIC_ISER2_OFFSET)))
#define NVIC_ISER2_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ISER2_OFFSET)))

/********************************************************************************************/
/************************************* ICER2 ***********************************************/
/********************************************************************************************/
#define NVIC_ICER2    (((NVIC2_TypeDef*) (NVIC_BASE + NVIC_ICER2_OFFSET)))
#define NVIC_ICER2_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ICER2_OFFSET)))

/********************************************************************************************/
/************************************* ISPR2 ***********************************************/
/********************************************************************************************/
#define NVIC_ISPR2    (((NVIC2_TypeDef*) (NVIC_BASE + NVIC_ISPR2_OFFSET)))
#define NVIC_ISPR2_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ISPR2_OFFSET)))

/********************************************************************************************/
/************************************* ICPR2 ***********************************************/
/********************************************************************************************/
#define NVIC_ICPR2    (((NVIC2_TypeDef*) (NVIC_BASE + NVIC_ICPR2_OFFSET)))
#define NVIC_ICPR2_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ICPR2_OFFSET)))

/********************************************************************************************/
/************************************* IABR2 ***********************************************/
/********************************************************************************************/
#define NVIC_IABR2    (((NVIC2_TypeDef*) (NVIC_BASE + NVIC_IABR2_OFFSET)))
#define NVIC_IABR2_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IABR2_OFFSET)))

/********************************************************************************************/
/************************************* ISER3 ***********************************************/
/********************************************************************************************/
#define NVIC_ISER3    (((NVIC3_TypeDef*) (NVIC_BASE + NVIC_ISER3_OFFSET)))
#define NVIC_ISER3_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ISER3_OFFSET)))

/********************************************************************************************/
/************************************* ICER3 ***********************************************/
/********************************************************************************************/
#define NVIC_ICER3    (((NVIC3_TypeDef*) (NVIC_BASE + NVIC_ICER3_OFFSET)))
#define NVIC_ICER3_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ICER3_OFFSET)))

/********************************************************************************************/
/************************************* ISPR3 ***********************************************/
/********************************************************************************************/
#define NVIC_ISPR3    (((NVIC3_TypeDef*) (NVIC_BASE + NVIC_ISPR3_OFFSET)))
#define NVIC_ISPR3_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ISPR3_OFFSET)))

/********************************************************************************************/
/************************************* ICPR3 ***********************************************/
/********************************************************************************************/
#define NVIC_ICPR3    (((NVIC3_TypeDef*) (NVIC_BASE + NVIC_ICPR3_OFFSET)))
#define NVIC_ICPR3_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ICPR3_OFFSET)))

/********************************************************************************************/
/************************************* IABR3 ***********************************************/
/********************************************************************************************/
#define NVIC_IABR3    (((NVIC3_TypeDef*) (NVIC_BASE + NVIC_IABR3_OFFSET)))
#define NVIC_IABR3_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IABR3_OFFSET)))

/********************************************************************************************/
/************************************* ISER4 ***********************************************/
/********************************************************************************************/
#define NVIC_ISER4    (((NVIC4_TypeDef*) (NVIC_BASE + NVIC_ISER4_OFFSET)))
#define NVIC_ISER4_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ISER4_OFFSET)))

/********************************************************************************************/
/************************************* ICER4 ***********************************************/
/********************************************************************************************/
#define NVIC_ICER4    (((NVIC4_TypeDef*) (NVIC_BASE + NVIC_ICER4_OFFSET)))
#define NVIC_ICER4_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ICER4_OFFSET)))

/********************************************************************************************/
/************************************* ISPR4 ***********************************************/
/********************************************************************************************/
#define NVIC_ISPR4    (((NVIC4_TypeDef*) (NVIC_BASE + NVIC_ISPR4_OFFSET)))
#define NVIC_ISPR4_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ISPR4_OFFSET)))

/********************************************************************************************/
/************************************* ICPR4 ***********************************************/
/********************************************************************************************/
#define NVIC_ICPR4    (((NVIC4_TypeDef*) (NVIC_BASE + NVIC_ICPR4_OFFSET)))
#define NVIC_ICPR4_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_ICPR4_OFFSET)))

/********************************************************************************************/
/************************************* IABR4 ***********************************************/
/********************************************************************************************/
#define NVIC_IABR4    (((NVIC4_TypeDef*) (NVIC_BASE + NVIC_IABR4_OFFSET)))
#define NVIC_IABR4_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IABR4_OFFSET)))

/********************************************************************************************/
/************************************* IPR ***********************************************/
/******************************************************************************************/
#define NVIC_IPRb    (((IPRb__TypeDef*) (NVIC_BASE + NVIC_IPR0_OFFSET)))
#define NVIC_IPRw    (((IPRw__TypeDef*) (NVIC_BASE + NVIC_IPR0_OFFSET)))

/********************************************************************************************/
/************************************* IPR0 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR0    (((IPR0_TypeDef*) (NVIC_BASE + NVIC_IPR0_OFFSET)))
#define NVIC_IPR0_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR0_OFFSET)))

/********************************************************************************************/
/************************************* IPR1 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR1    (((IPR1_TypeDef*) (NVIC_BASE + NVIC_IPR1_OFFSET)))
#define NVIC_IPR1_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR1_OFFSET)))

/********************************************************************************************/
/************************************* IPR2 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR2    (((IPR2_TypeDef*) (NVIC_BASE + NVIC_IPR2_OFFSET)))
#define NVIC_IPR2_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR2_OFFSET)))

/********************************************************************************************/
/************************************* IPR3 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR3    (((IPR3_TypeDef*) (NVIC_BASE + NVIC_IPR3_OFFSET)))
#define NVIC_IPR3_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR3_OFFSET)))

/********************************************************************************************/
/************************************* IPR4 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR4    (((IPR4_TypeDef*) (NVIC_BASE + NVIC_IPR4_OFFSET)))
#define NVIC_IPR4_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR4_OFFSET)))

/********************************************************************************************/
/************************************* IPR5 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR5    (((IPR5_TypeDef*) (NVIC_BASE + NVIC_IPR5_OFFSET)))
#define NVIC_IPR5_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR5_OFFSET)))

/********************************************************************************************/
/************************************* IPR6 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR6    (((IPR6_TypeDef*) (NVIC_BASE + NVIC_IPR6_OFFSET)))
#define NVIC_IPR6_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR6_OFFSET)))

/********************************************************************************************/
/************************************* IPR7 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR7    (((IPR7_TypeDef*) (NVIC_BASE + NVIC_IPR7_OFFSET)))
#define NVIC_IPR7_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR7_OFFSET)))

/********************************************************************************************/
/************************************* IPR8 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR8    (((IPR8_TypeDef*) (NVIC_BASE + NVIC_IPR8_OFFSET)))
#define NVIC_IPR8_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR8_OFFSET)))

/********************************************************************************************/
/************************************* IPR9 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR9    (((IPR9_TypeDef*) (NVIC_BASE + NVIC_IPR9_OFFSET)))
#define NVIC_IPR9_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR9_OFFSET)))

/********************************************************************************************/
/************************************* IPR10 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR10    (((IPR10_TypeDef*) (NVIC_BASE + NVIC_IPR10_OFFSET)))
#define NVIC_IPR10_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR10_OFFSET)))

/********************************************************************************************/
/************************************* IPR11 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR11    (((IPR11_TypeDef*) (NVIC_BASE + NVIC_IPR11_OFFSET)))
#define NVIC_IPR11_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR11_OFFSET)))

/********************************************************************************************/
/************************************* IPR12 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR12    (((IPR12_TypeDef*) (NVIC_BASE + NVIC_IPR12_OFFSET)))
#define NVIC_IPR12_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR12_OFFSET)))

/********************************************************************************************/
/************************************* IPR13 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR13    (((IPR13_TypeDef*) (NVIC_BASE + NVIC_IPR13_OFFSET)))
#define NVIC_IPR13_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR13_OFFSET)))

/********************************************************************************************/
/************************************* IPR14 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR14    (((IPR14_TypeDef*) (NVIC_BASE + NVIC_IPR14_OFFSET)))
#define NVIC_IPR14_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR14_OFFSET)))

/********************************************************************************************/
/************************************* IPR15 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR15    (((IPR15_TypeDef*) (NVIC_BASE + NVIC_IPR15_OFFSET)))
#define NVIC_IPR15_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR15_OFFSET)))

/********************************************************************************************/
/************************************* IPR16 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR16    (((IPR16_TypeDef*) (NVIC_BASE + NVIC_IPR16_OFFSET)))
#define NVIC_IPR16_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR16_OFFSET)))

/********************************************************************************************/
/************************************* IPR17 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR17    (((IPR17_TypeDef*) (NVIC_BASE + NVIC_IPR17_OFFSET)))
#define NVIC_IPR17_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR17_OFFSET)))

/********************************************************************************************/
/************************************* IPR18 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR18    (((IPR18_TypeDef*) (NVIC_BASE + NVIC_IPR18_OFFSET)))
#define NVIC_IPR18_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR18_OFFSET)))

/********************************************************************************************/
/************************************* IPR19 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR19    (((IPR19_TypeDef*) (NVIC_BASE + NVIC_IPR19_OFFSET)))
#define NVIC_IPR19_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR19_OFFSET)))

/********************************************************************************************/
/************************************* IPR20 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR20    (((IPR20_TypeDef*) (NVIC_BASE + NVIC_IPR20_OFFSET)))
#define NVIC_IPR20_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR20_OFFSET)))

/********************************************************************************************/
/************************************* IPR21 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR21    (((IPR21_TypeDef*) (NVIC_BASE + NVIC_IPR21_OFFSET)))
#define NVIC_IPR21_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR21_OFFSET)))

/********************************************************************************************/
/************************************* IPR22 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR22    (((IPR22_TypeDef*) (NVIC_BASE + NVIC_IPR22_OFFSET)))
#define NVIC_IPR22_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR22_OFFSET)))

/********************************************************************************************/
/************************************* IPR23 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR23    (((IPR23_TypeDef*) (NVIC_BASE + NVIC_IPR23_OFFSET)))
#define NVIC_IPR23_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR23_OFFSET)))

/********************************************************************************************/
/************************************* IPR24 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR24    (((IPR24_TypeDef*) (NVIC_BASE + NVIC_IPR24_OFFSET)))
#define NVIC_IPR24_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR24_OFFSET)))

/********************************************************************************************/
/************************************* IPR25 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR25    (((IPR25_TypeDef*) (NVIC_BASE + NVIC_IPR25_OFFSET)))
#define NVIC_IPR25_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR25_OFFSET)))

/********************************************************************************************/
/************************************* IPR26 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR26    (((IPR26_TypeDef*) (NVIC_BASE + NVIC_IPR26_OFFSET)))
#define NVIC_IPR26_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR26_OFFSET)))

/********************************************************************************************/
/************************************* IPR27 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR27    (((IPR27_TypeDef*) (NVIC_BASE + NVIC_IPR27_OFFSET)))
#define NVIC_IPR27_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR27_OFFSET)))

/********************************************************************************************/
/************************************* IPR28 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR28    (((IPR28_TypeDef*) (NVIC_BASE + NVIC_IPR28_OFFSET)))
#define NVIC_IPR28_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR28_OFFSET)))

/********************************************************************************************/
/************************************* IPR29 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR29    (((IPR29_TypeDef*) (NVIC_BASE + NVIC_IPR29_OFFSET)))
#define NVIC_IPR29_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR29_OFFSET)))

/********************************************************************************************/
/************************************* IPR30 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR30    (((IPR30_TypeDef*) (NVIC_BASE + NVIC_IPR30_OFFSET)))
#define NVIC_IPR30_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR30_OFFSET)))

/********************************************************************************************/
/************************************* IPR31 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR31    (((IPR31_TypeDef*) (NVIC_BASE + NVIC_IPR31_OFFSET)))
#define NVIC_IPR31_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR31_OFFSET)))

/********************************************************************************************/
/************************************* IPR32 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR32    (((IPR32_TypeDef*) (NVIC_BASE + NVIC_IPR32_OFFSET)))
#define NVIC_IPR32_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR32_OFFSET)))

/********************************************************************************************/
/************************************* IPR33 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR33    (((IPR33_TypeDef*) (NVIC_BASE + NVIC_IPR33_OFFSET)))
#define NVIC_IPR33_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR33_OFFSET)))

/********************************************************************************************/
/************************************* IPR34 ***********************************************/
/******************************************************************************************/
#define NVIC_IPR34    (((IPR34_TypeDef*) (NVIC_BASE + NVIC_IPR34_OFFSET)))
#define NVIC_IPR34_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_IPR34_OFFSET)))

/********************************************************************************************/
/************************************* STIR ***********************************************/
/******************************************************************************************/
#define NVIC_STIR    (((STIR_TypeDef*) (NVIC_BASE + NVIC_STIR_OFFSET)))
#define NVIC_STIR_R    (*((volatile uint32_t*) (NVIC_BASE + NVIC_STIR_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERPERIPHERAL_H_ */
