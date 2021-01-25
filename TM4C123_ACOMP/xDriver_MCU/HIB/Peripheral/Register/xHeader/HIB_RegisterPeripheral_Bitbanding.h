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
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/HIB/Peripheral/Struct/xHeader/HIB_StructPeripheral.h>
#include <xDriver_MCU/HIB/Peripheral/Register/xHeader/HIB_RegisterAddress.h>
#include <xDriver_MCU/HIB/Peripheral/Register/xHeader/HIB_RegisterDefines.h>

#define HIB_BITBANDING      (((HIB_BITBANDING_TypeDef*)(HIB_BITBANDING_BASE+(HIB_OFFSET*32U))))

/******************************************************************************************
************************************ 1 HIBRTCC *********************************************
******************************************************************************************/
#define HIB_BITBANDING_HIBRTCC      (((BITBANDING_HIBRTCC_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRTCC_OFFSET)*32U))))

/******************************************************************************************
************************************ 2 HIBRTCM0 *********************************************
******************************************************************************************/
#define HIB_BITBANDING_HIBRTCM0      (((BITBANDING_HIBRTCM0_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRTCM0_OFFSET)*32U))))

/******************************************************************************************
************************************ 3 HIBRTCLD *********************************************
******************************************************************************************/
#define HIB_BITBANDING_HIBRTCLD      (((BITBANDING_HIBRTCLD_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRTCLD_OFFSET)*32U))))

/******************************************************************************************
************************************ 4 HIBCTL *********************************************
******************************************************************************************/
#define HIB_BITBANDING_HIBCTL      (((BITBANDING_HIBCTL_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32U))))

#define HIB_BITBANDING_HIBCTL_RTCEN   (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32U)+(HIB_HIBCTL_R_RTCEN_BIT*4U))))
#define HIB_BITBANDING_HIBCTL_HIBREQ  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32U)+(HIB_HIBCTL_R_HIBREQ_BIT*4U))))
#define HIB_BITBANDING_HIBCTL_RTCWEN  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32U)+(HIB_HIBCTL_R_RTCWEN_BIT*4U))))
#define HIB_BITBANDING_HIBCTL_PINWEN  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32U)+(HIB_HIBCTL_R_PINWEN_BIT*4U))))
#define HIB_BITBANDING_HIBCTL_CLK32EN (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32U)+(HIB_HIBCTL_R_CLK32EN_BIT*4U))))
#define HIB_BITBANDING_HIBCTL_VABORT  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32U)+(HIB_HIBCTL_R_VABORT_BIT*4U))))
#define HIB_BITBANDING_HIBCTL_VDD3ON  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32U)+(HIB_HIBCTL_R_VDD3ON_BIT*4U))))
#define HIB_BITBANDING_HIBCTL_BATWKEN (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32U)+(HIB_HIBCTL_R_BATWKEN_BIT*4U))))
#define HIB_BITBANDING_HIBCTL_BATCHK  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32U)+(HIB_HIBCTL_R_BATCHK_BIT*4U))))
#define HIB_BITBANDING_HIBCTL_OSCBYP  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32U)+(HIB_HIBCTL_R_OSCBYP_BIT*4U))))
#define HIB_BITBANDING_HIBCTL_OSCDRV  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32U)+(HIB_HIBCTL_R_OSCDRV_BIT*4U))))
#define HIB_BITBANDING_HIBCTL_WRC     (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32U)+(HIB_HIBCTL_R_WRC_BIT*4U))))

/******************************************************************************************
************************************ 5 HIBIM *********************************************
******************************************************************************************/
#define HIB_BITBANDING_HIBIM      (((BITBANDING_HIBIM_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32U))))

#define HIB_BITBANDING_HIBIM_RTCALT0 (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32U)+(HIB_HIBIM_R_RTCALT0_BIT*4U))))
#define HIB_BITBANDING_HIBIM_LOWBAT  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32U)+(HIB_HIBIM_R_LOWBAT_BIT*4U))))
#define HIB_BITBANDING_HIBIM_EXTW    (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32U)+(HIB_HIBIM_R_EXTW_BIT*4U))))
#define HIB_BITBANDING_HIBIM_WC      (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32U)+(HIB_HIBIM_R_WC_BIT*4U))))

/******************************************************************************************
************************************ 6 HIBRIS *********************************************
******************************************************************************************/
#define HIB_BITBANDING_HIBRIS      (((BITBANDING_HIBRIS_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32U))))

#define HIB_BITBANDING_HIBRIS_RTCALT0 (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32U)+(HIB_HIBRIS_R_RTCALT0_BIT*4U))))
#define HIB_BITBANDING_HIBRIS_LOWBAT  (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32U)+(HIB_HIBRIS_R_LOWBAT_BIT*4U))))
#define HIB_BITBANDING_HIBRIS_EXTW    (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32U)+(HIB_HIBRIS_R_EXTW_BIT*4U))))
#define HIB_BITBANDING_HIBRIS_WC      (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32U)+(HIB_HIBRIS_R_WC_BIT*4U))))

/******************************************************************************************
************************************ 7 HIBMIS *********************************************
******************************************************************************************/
#define HIB_BITBANDING_HIBMIS      (((BITBANDING_HIBMIS_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32U))))

#define HIB_BITBANDING_HIBMIS_RTCALT0 (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32U)+(HIB_HIBMIS_R_RTCALT0_BIT*4U))))
#define HIB_BITBANDING_HIBMIS_LOWBAT  (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32U)+(HIB_HIBMIS_R_LOWBAT_BIT*4U))))
#define HIB_BITBANDING_HIBMIS_EXTW    (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32U)+(HIB_HIBMIS_R_EXTW_BIT*4U))))
#define HIB_BITBANDING_HIBMIS_WC      (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32U)+(HIB_HIBMIS_R_WC_BIT*4U))))

/******************************************************************************************
************************************ 8 HIBIC *********************************************
******************************************************************************************/
#define HIB_BITBANDING_HIBIC      (((BITBANDING_HIBIC_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32U))))

#define HIB_BITBANDING_HIBIC_RTCALT0 (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32U)+(HIB_HIBIC_R_RTCALT0_BIT*4U))))
#define HIB_BITBANDING_HIBIC_LOWBAT  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32U)+(HIB_HIBIC_R_LOWBAT_BIT*4U))))
#define HIB_BITBANDING_HIBIC_EXTW    (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32U)+(HIB_HIBIC_R_EXTW_BIT*4U))))
#define HIB_BITBANDING_HIBIC_WC      (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32U)+(HIB_HIBIC_R_WC_BIT*4U))))

/******************************************************************************************
************************************ 9 HIBRTCT *********************************************
******************************************************************************************/
#define HIB_BITBANDING_HIBRTCT      (((BITBANDING_HIBRTCT_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRTCT_OFFSET)*32U))))

/******************************************************************************************
************************************ 10 HIBRTCSS *********************************************
******************************************************************************************/
#define HIB_BITBANDING_HIBRTCSS      (((BITBANDING_HIBRTCSS_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRTCSS_OFFSET)*32U))))

/******************************************************************************************
************************************ HIBDATA *********************************************
******************************************************************************************/
#define HIB_BITBANDING_HIBDATA      (((BITBANDING_HIBDATA_ARRAY_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA_OFFSET)*32U))))

/******************************************************************************************
************************************ 11 HIBDATA0 *********************************************
******************************************************************************************/
#define HIB_BITBANDING_HIBDATA0      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA0_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA1      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA1_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA2      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA2_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA3      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA3_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA4      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA4_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA5      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA5_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA6      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA6_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA7      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA7_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA8      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA8_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA9      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA9_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA10      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA10_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA11      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA11_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA12      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA12_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA13      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA13_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA14      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA14_OFFSET)*32U))))

#define HIB_BITBANDING_HIBDATA15      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA15_OFFSET)*32U))))

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERPERIPHERAL_BITBANDING_H_ */
