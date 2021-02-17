/**
 *
 * @file HIB_RegisterPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/HIB/Peripheral/Struct/xHeader/HIB_StructPeripheral.h>
#include <xDriver_MCU/HIB/Peripheral/Register/xHeader/HIB_RegisterAddress.h>

#define HIB    ((HIB_TypeDef*) HIB_BASE)

/******************************************************************************************
************************************ 1 HIBRTCC *********************************************
******************************************************************************************/
#define HIB_HIBRTCC    ((HIBRTCC_TypeDef*) (HIB_BASE + HIB_HIBRTCC_OFFSET))
#define HIB_HIBRTCC_R    (*((volatile const uint32_t*) (HIB_BASE + HIB_HIBRTCC_OFFSET)))

/******************************************************************************************
************************************ 2 HIBRTCM0 *********************************************
******************************************************************************************/
#define HIB_HIBRTCM0    ((HIBRTCM0_TypeDef*) (HIB_BASE + HIB_HIBRTCM0_OFFSET))
#define HIB_HIBRTCM0_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBRTCM0_OFFSET)))

/******************************************************************************************
************************************ 3 HIBRTCLD *********************************************
******************************************************************************************/
#define HIB_HIBRTCLD    ((HIBRTCLD_TypeDef*) (HIB_BASE + HIB_HIBRTCLD_OFFSET))
#define HIB_HIBRTCLD_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBRTCLD_OFFSET)))

/******************************************************************************************
************************************ 4 HIBCTL *********************************************
******************************************************************************************/
#define HIB_HIBCTL    ((HIBCTL_TypeDef*) (HIB_BASE + HIB_HIBCTL_OFFSET))
#define HIB_HIBCTL_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBCTL_OFFSET)))

/******************************************************************************************
************************************ 5 HIBIM *********************************************
******************************************************************************************/
#define HIB_HIBIM    ((HIBIM_TypeDef*) (HIB_BASE + HIB_HIBIM_OFFSET))
#define HIB_HIBIM_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBIM_OFFSET)))

/******************************************************************************************
************************************ 6 HIBRIS *********************************************
******************************************************************************************/
#define HIB_HIBRIS    ((HIBRIS_TypeDef*) (HIB_BASE + HIB_HIBRIS_OFFSET))
#define HIB_HIBRIS_R    (*((volatile const uint32_t*) (HIB_BASE + HIB_HIBRIS_OFFSET)))

/******************************************************************************************
************************************ 7 HIBMIS *********************************************
******************************************************************************************/
#define HIB_HIBMIS    ((HIBMIS_TypeDef*) (HIB_BASE + HIB_HIBMIS_OFFSET))
#define HIB_HIBMIS_R    (*((volatile const uint32_t*) (HIB_BASE + HIB_HIBMIS_OFFSET)))

/******************************************************************************************
************************************ 8 HIBIC *********************************************
******************************************************************************************/
#define HIB_HIBIC    ((HIBIC_TypeDef*) (HIB_BASE + HIB_HIBIC_OFFSET))
#define HIB_HIBIC_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBIC_OFFSET)))

/******************************************************************************************
************************************ 9 HIBRTCT *********************************************
******************************************************************************************/
#define HIB_HIBRTCT    ((HIBRTCT_TypeDef*) (HIB_BASE + HIB_HIBRTCT_OFFSET))
#define HIB_HIBRTCT_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBRTCT_OFFSET)))

/******************************************************************************************
************************************ 10 HIBRTCSS *********************************************
******************************************************************************************/
#define HIB_HIBRTCSS    ((HIBRTCSS_TypeDef*) (HIB_BASE + HIB_HIBRTCSS_OFFSET))
#define HIB_HIBRTCSS_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBRTCSS_OFFSET)))

/******************************************************************************************
************************************ HIBDATA *********************************************
******************************************************************************************/
#define HIB_HIBDATA    ((HIBDATA_ARRAY_TypeDef*) (HIB_BASE + HIB_HIBDATA_OFFSET))

/******************************************************************************************
************************************ 11 HIBDATA0 *********************************************
******************************************************************************************/
#define HIB_HIBDATA0    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA0_OFFSET))
#define HIB_HIBDATA0_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA0_OFFSET)))

#define HIB_HIBDATA1    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA1_OFFSET))
#define HIB_HIBDATA1_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA1_OFFSET)))

#define HIB_HIBDATA2    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA2_OFFSET))
#define HIB_HIBDATA2_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA2_OFFSET)))

#define HIB_HIBDATA3    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA3_OFFSET))
#define HIB_HIBDATA3_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA3_OFFSET)))

#define HIB_HIBDATA4    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA4_OFFSET))
#define HIB_HIBDATA4_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA4_OFFSET)))

#define HIB_HIBDATA5    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA5_OFFSET))
#define HIB_HIBDATA5_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA5_OFFSET)))

#define HIB_HIBDATA6    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA6_OFFSET))
#define HIB_HIBDATA6_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA6_OFFSET)))

#define HIB_HIBDATA7    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA7_OFFSET))
#define HIB_HIBDATA7_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA7_OFFSET)))

#define HIB_HIBDATA8    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA8_OFFSET))
#define HIB_HIBDATA8_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA8_OFFSET)))

#define HIB_HIBDATA9    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA9_OFFSET))
#define HIB_HIBDATA9_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA9_OFFSET)))

#define HIB_HIBDATA10    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA10_OFFSET))
#define HIB_HIBDATA10_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA10_OFFSET)))

#define HIB_HIBDATA11    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA11_OFFSET))
#define HIB_HIBDATA11_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA11_OFFSET)))

#define HIB_HIBDATA12    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA12_OFFSET))
#define HIB_HIBDATA12_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA12_OFFSET)))

#define HIB_HIBDATA13    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA13_OFFSET))
#define HIB_HIBDATA13_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA13_OFFSET)))

#define HIB_HIBDATA14    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA14_OFFSET))
#define HIB_HIBDATA14_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA14_OFFSET)))

#define HIB_HIBDATA15    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_HIBDATA15_OFFSET))
#define HIB_HIBDATA15_R    (*((volatile uint32_t*) (HIB_BASE + HIB_HIBDATA15_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERPERIPHERAL_H_ */
