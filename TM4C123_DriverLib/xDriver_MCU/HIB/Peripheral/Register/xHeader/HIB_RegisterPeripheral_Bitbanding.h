/**
 *
 * @file HIB_RegisterPeripheral_Bitbanding.h
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
 * Date           Author     Version     Description * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/HIB/Peripheral/Struct/xHeader/HIB_StructPeripheral.h>
#include <xDriver_MCU/HIB/Peripheral/Register/xHeader/HIB_RegisterAddress.h>
#include <xDriver_MCU/HIB/Peripheral/Register/xHeader/HIB_RegisterDefines.h>

#define HIB_BITBANDING    ((HIB_BITBANDING_TypeDef*) (HIB_BITBANDING_BASE + (HIB_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 1 RTCC *********************************************
******************************************************************************************/
#define HIB_BITBANDING_RTCC    ((BITBANDING_HIBRTCC_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_RTCC_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 2 RTCM0 *********************************************
******************************************************************************************/
#define HIB_BITBANDING_RTCM0    ((BITBANDING_HIBRTCM0_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_RTCM0_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 3 RTCLD *********************************************
******************************************************************************************/
#define HIB_BITBANDING_RTCLD    ((BITBANDING_HIBRTCLD_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_RTCLD_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 4 CTL *********************************************
******************************************************************************************/
#define HIB_BITBANDING_CTL    ((BITBANDING_HIBCTL_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_CTL_OFFSET) * 32UL)))

#define HIB_BITBANDING_CTL_RTCEN    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_CTL_OFFSET) * 32UL) + (HIB_CTL_R_RTCEN_BIT * 4UL))))
#define HIB_BITBANDING_CTL_REQ    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_CTL_OFFSET) * 32UL) + (HIB_CTL_R_REQ_BIT * 4UL))))
#define HIB_BITBANDING_CTL_RTCWEN    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_CTL_OFFSET) * 32UL) + (HIB_CTL_R_RTCWEN_BIT * 4UL))))
#define HIB_BITBANDING_CTL_PINWEN    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_CTL_OFFSET) * 32UL) + (HIB_CTL_R_PINWEN_BIT * 4UL))))
#define HIB_BITBANDING_CTL_CLK32EN    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_CTL_OFFSET) * 32UL) + (HIB_CTL_R_CLK32EN_BIT * 4UL))))
#define HIB_BITBANDING_CTL_VABORT    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_CTL_OFFSET) * 32UL) + (HIB_CTL_R_VABORT_BIT * 4UL))))
#define HIB_BITBANDING_CTL_VDD3ON    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_CTL_OFFSET) * 32UL) + (HIB_CTL_R_VDD3ON_BIT * 4UL))))
#define HIB_BITBANDING_CTL_BATWKEN    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_CTL_OFFSET) * 32UL) + (HIB_CTL_R_BATWKEN_BIT * 4UL))))
#define HIB_BITBANDING_CTL_BATCHK    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_CTL_OFFSET) * 32UL) + (HIB_CTL_R_BATCHK_BIT * 4UL))))
#define HIB_BITBANDING_CTL_OSCBYP    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_CTL_OFFSET) * 32UL) + (HIB_CTL_R_OSCBYP_BIT * 4UL))))
#define HIB_BITBANDING_CTL_OSCDRV    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_CTL_OFFSET) * 32UL) + (HIB_CTL_R_OSCDRV_BIT * 4UL))))
#define HIB_BITBANDING_CTL_WRC    (*((volatile const uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_CTL_OFFSET) * 32UL) + (HIB_CTL_R_WRC_BIT * 4UL))))

/******************************************************************************************
*********************************** * 5 IM *********************************************
******************************************************************************************/
#define HIB_BITBANDING_IM    ((BITBANDING_HIBIM_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_IM_OFFSET) * 32UL)))

#define HIB_BITBANDING_IM_RTCALT0    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_IM_OFFSET) * 32UL) + (HIB_IM_R_RTCALT0_BIT * 4UL))))
#define HIB_BITBANDING_IM_LOWBAT    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_IM_OFFSET) * 32UL) + (HIB_IM_R_LOWBAT_BIT * 4UL))))
#define HIB_BITBANDING_IM_EXTW    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_IM_OFFSET) * 32UL) + (HIB_IM_R_EXTW_BIT * 4UL))))
#define HIB_BITBANDING_IM_WC    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_IM_OFFSET) * 32UL) + (HIB_IM_R_WC_BIT * 4UL))))

/******************************************************************************************
*********************************** * 6 RIS *********************************************
******************************************************************************************/
#define HIB_BITBANDING_RIS    ((BITBANDING_HIBRIS_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_RIS_OFFSET) * 32UL)))

#define HIB_BITBANDING_RIS_RTCALT0    (*((volatile const uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_RIS_OFFSET) * 32UL) + (HIB_RIS_R_RTCALT0_BIT * 4UL))))
#define HIB_BITBANDING_RIS_LOWBAT    (*((volatile const uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_RIS_OFFSET) * 32UL) + (HIB_RIS_R_LOWBAT_BIT * 4UL))))
#define HIB_BITBANDING_RIS_EXTW    (*((volatile const uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_RIS_OFFSET) * 32UL) + (HIB_RIS_R_EXTW_BIT * 4UL))))
#define HIB_BITBANDING_RIS_WC    (*((volatile const uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_RIS_OFFSET) * 32UL) + (HIB_RIS_R_WC_BIT * 4UL))))

/******************************************************************************************
*********************************** * 7 MIS *********************************************
******************************************************************************************/
#define HIB_BITBANDING_MIS    ((BITBANDING_HIBMIS_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_MIS_OFFSET) * 32UL)))

#define HIB_BITBANDING_MIS_RTCALT0    (*((volatile const uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_MIS_OFFSET) * 32UL) + (HIB_MIS_R_RTCALT0_BIT * 4UL))))
#define HIB_BITBANDING_MIS_LOWBAT    (*((volatile const uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_MIS_OFFSET) * 32UL) + (HIB_MIS_R_LOWBAT_BIT * 4UL))))
#define HIB_BITBANDING_MIS_EXTW    (*((volatile const uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_MIS_OFFSET) * 32UL) + (HIB_MIS_R_EXTW_BIT * 4UL))))
#define HIB_BITBANDING_MIS_WC    (*((volatile const uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_MIS_OFFSET) * 32UL) + (HIB_MIS_R_WC_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 IC *********************************************
******************************************************************************************/
#define HIB_BITBANDING_IC    ((BITBANDING_HIBIC_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_IC_OFFSET) * 32UL)))

#define HIB_BITBANDING_IC_RTCALT0    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_IC_OFFSET) * 32UL) + (HIB_IC_R_RTCALT0_BIT * 4UL))))
#define HIB_BITBANDING_IC_LOWBAT    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_IC_OFFSET) * 32UL) + (HIB_IC_R_LOWBAT_BIT * 4UL))))
#define HIB_BITBANDING_IC_EXTW    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_IC_OFFSET) * 32UL) + (HIB_IC_R_EXTW_BIT * 4UL))))
#define HIB_BITBANDING_IC_WC    (*((volatile uint32_t*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_IC_OFFSET) * 32UL) + (HIB_IC_R_WC_BIT * 4UL))))

/******************************************************************************************
*********************************** * 9 RTCT *********************************************
******************************************************************************************/
#define HIB_BITBANDING_RTCT    ((BITBANDING_HIBRTCT_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_RTCT_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 10 RTCSS *********************************************
******************************************************************************************/
#define HIB_BITBANDING_RTCSS    ((BITBANDING_HIBRTCSS_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_RTCSS_OFFSET) * 32UL)))

/******************************************************************************************
************************************ DATA *********************************************
******************************************************************************************/
#define HIB_BITBANDING_DATA    ((BITBANDING_HIBDATA_ARRAY_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 11 DATA0 *********************************************
******************************************************************************************/
#define HIB_BITBANDING_DATA0    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA0_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA1    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA1_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA2    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA2_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA3    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA3_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA4    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA4_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA5    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA5_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA6    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA6_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA7    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA7_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA8    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA8_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA9    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA9_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA10    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA10_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA11    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA11_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA12    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA12_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA13    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA13_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA14    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA14_OFFSET) * 32UL)))
#define HIB_BITBANDING_DATA15    ((BITBANDING_HIBDATA_TypeDef*) (HIB_BITBANDING_BASE + ((HIB_OFFSET + HIB_DATA15_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERPERIPHERAL_BITBANDING_H_ */
