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
************************************ 1 RTCC *********************************************
******************************************************************************************/
#define HIB_RTCC    ((HIBRTCC_TypeDef*) (HIB_BASE + HIB_RTCC_OFFSET))
#define HIB_RTCC_R    (*((volatile const uint32_t*) (HIB_BASE + HIB_RTCC_OFFSET)))

/******************************************************************************************
************************************ 2 RTCM0 *********************************************
******************************************************************************************/
#define HIB_RTCM0    ((HIBRTCM0_TypeDef*) (HIB_BASE + HIB_RTCM0_OFFSET))
#define HIB_RTCM0_R    (*((volatile uint32_t*) (HIB_BASE + HIB_RTCM0_OFFSET)))

/******************************************************************************************
************************************ 3 RTCLD *********************************************
******************************************************************************************/
#define HIB_RTCLD    ((HIBRTCLD_TypeDef*) (HIB_BASE + HIB_RTCLD_OFFSET))
#define HIB_RTCLD_R    (*((volatile uint32_t*) (HIB_BASE + HIB_RTCLD_OFFSET)))

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define HIB_CTL    ((HIBCTL_TypeDef*) (HIB_BASE + HIB_CTL_OFFSET))
#define HIB_CTL_R    (*((volatile uint32_t*) (HIB_BASE + HIB_CTL_OFFSET)))

/******************************************************************************************
************************************ 5 IM *********************************************
******************************************************************************************/
#define HIB_IM    ((HIBIM_TypeDef*) (HIB_BASE + HIB_IM_OFFSET))
#define HIB_IM_R    (*((volatile uint32_t*) (HIB_BASE + HIB_IM_OFFSET)))

/******************************************************************************************
************************************ 6 RIS *********************************************
******************************************************************************************/
#define HIB_RIS    ((HIBRIS_TypeDef*) (HIB_BASE + HIB_RIS_OFFSET))
#define HIB_RIS_R    (*((volatile const uint32_t*) (HIB_BASE + HIB_RIS_OFFSET)))

/******************************************************************************************
************************************ 7 MIS *********************************************
******************************************************************************************/
#define HIB_MIS    ((HIBMIS_TypeDef*) (HIB_BASE + HIB_MIS_OFFSET))
#define HIB_MIS_R    (*((volatile const uint32_t*) (HIB_BASE + HIB_MIS_OFFSET)))

/******************************************************************************************
************************************ 8 IC *********************************************
******************************************************************************************/
#define HIB_IC    ((HIBIC_TypeDef*) (HIB_BASE + HIB_IC_OFFSET))
#define HIB_IC_R    (*((volatile uint32_t*) (HIB_BASE + HIB_IC_OFFSET)))

/******************************************************************************************
************************************ 9 RTCT *********************************************
******************************************************************************************/
#define HIB_RTCT    ((HIBRTCT_TypeDef*) (HIB_BASE + HIB_RTCT_OFFSET))
#define HIB_RTCT_R    (*((volatile uint32_t*) (HIB_BASE + HIB_RTCT_OFFSET)))

/******************************************************************************************
************************************ 10 RTCSS *********************************************
******************************************************************************************/
#define HIB_RTCSS    ((HIBRTCSS_TypeDef*) (HIB_BASE + HIB_RTCSS_OFFSET))
#define HIB_RTCSS_R    (*((volatile uint32_t*) (HIB_BASE + HIB_RTCSS_OFFSET)))

/******************************************************************************************
************************************ DATA *********************************************
******************************************************************************************/
#define HIB_DATA    ((HIBDATA_ARRAY_TypeDef*) (HIB_BASE + HIB_DATA_OFFSET))

/******************************************************************************************
************************************ 11 DATA0 *********************************************
******************************************************************************************/
#define HIB_DATA0    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA0_OFFSET))
#define HIB_DATA0_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA0_OFFSET)))

#define HIB_DATA1    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA1_OFFSET))
#define HIB_DATA1_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA1_OFFSET)))

#define HIB_DATA2    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA2_OFFSET))
#define HIB_DATA2_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA2_OFFSET)))

#define HIB_DATA3    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA3_OFFSET))
#define HIB_DATA3_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA3_OFFSET)))

#define HIB_DATA4    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA4_OFFSET))
#define HIB_DATA4_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA4_OFFSET)))

#define HIB_DATA5    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA5_OFFSET))
#define HIB_DATA5_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA5_OFFSET)))

#define HIB_DATA6    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA6_OFFSET))
#define HIB_DATA6_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA6_OFFSET)))

#define HIB_DATA7    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA7_OFFSET))
#define HIB_DATA7_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA7_OFFSET)))

#define HIB_DATA8    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA8_OFFSET))
#define HIB_DATA8_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA8_OFFSET)))

#define HIB_DATA9    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA9_OFFSET))
#define HIB_DATA9_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA9_OFFSET)))

#define HIB_DATA10    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA10_OFFSET))
#define HIB_DATA10_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA10_OFFSET)))

#define HIB_DATA11    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA11_OFFSET))
#define HIB_DATA11_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA11_OFFSET)))

#define HIB_DATA12    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA12_OFFSET))
#define HIB_DATA12_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA12_OFFSET)))

#define HIB_DATA13    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA13_OFFSET))
#define HIB_DATA13_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA13_OFFSET)))

#define HIB_DATA14    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA14_OFFSET))
#define HIB_DATA14_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA14_OFFSET)))

#define HIB_DATA15    ((HIBDATA_TypeDef*) (HIB_BASE + HIB_DATA15_OFFSET))
#define HIB_DATA15_R    (*((volatile uint32_t*) (HIB_BASE + HIB_DATA15_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERPERIPHERAL_H_ */
