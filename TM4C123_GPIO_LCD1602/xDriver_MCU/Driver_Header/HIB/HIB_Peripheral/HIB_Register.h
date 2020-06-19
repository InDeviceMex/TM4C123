/*
 * HIB_Register.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_H_

#include <xDriver_MCU/Driver_Header/HIB/HIB_Peripheral/HIB_Struct.h>

#define HIB_BASE            ((uint32_t)0x400FC000u)
#define HIB_BITBANDING_BASE ((uint32_t)0x42000000u)
#define HIB_OFFSET          ((uint32_t)0x000FC000u)


#define HIB                 (((HIB_TypeDef*)(HIB_BASE)))
#define HIB_BITBANDING      (((HIB_BITBANDING_TypeDef*)(HIB_BITBANDING_BASE+(HIB_OFFSET*32))))


#define HIB_HIBRTCC_OFFSET     ((uint32_t)0x0000u)
#define HIB_HIBRTCM0_OFFSET    ((uint32_t)0x0004u)
#define HIB_HIBRTCLD_OFFSET    ((uint32_t)0x000Cu)
#define HIB_HIBCTL_OFFSET      ((uint32_t)0x0010u)
#define HIB_HIBIM_OFFSET       ((uint32_t)0x0014u)
#define HIB_HIBRIS_OFFSET      ((uint32_t)0x0018u)
#define HIB_HIBMIS_OFFSET      ((uint32_t)0x001Cu)
#define HIB_HIBIC_OFFSET       ((uint32_t)0x0020u)
#define HIB_HIBRTCT_OFFSET     ((uint32_t)0x0024u)
#define HIB_HIBRTCSS_OFFSET    ((uint32_t)0x0028u)
#define HIB_HIBDATA_OFFSET     ((uint32_t)0x0030u)
#define HIB_HIBDATA0_OFFSET    ((uint32_t)0x0030u)
#define HIB_HIBDATA1_OFFSET    ((uint32_t)0x0034u)
#define HIB_HIBDATA2_OFFSET    ((uint32_t)0x0038u)
#define HIB_HIBDATA3_OFFSET    ((uint32_t)0x003Cu)
#define HIB_HIBDATA4_OFFSET    ((uint32_t)0x0040u)
#define HIB_HIBDATA5_OFFSET    ((uint32_t)0x0044u)
#define HIB_HIBDATA6_OFFSET    ((uint32_t)0x0048u)
#define HIB_HIBDATA7_OFFSET    ((uint32_t)0x004Cu)
#define HIB_HIBDATA8_OFFSET    ((uint32_t)0x0050u)
#define HIB_HIBDATA9_OFFSET    ((uint32_t)0x0054u)
#define HIB_HIBDATA10_OFFSET   ((uint32_t)0x0058u)
#define HIB_HIBDATA11_OFFSET   ((uint32_t)0x005Cu)
#define HIB_HIBDATA12_OFFSET   ((uint32_t)0x0060u)
#define HIB_HIBDATA13_OFFSET   ((uint32_t)0x0064u)
#define HIB_HIBDATA14_OFFSET   ((uint32_t)0x0068u)
#define HIB_HIBDATA15_OFFSET   ((uint32_t)0x006Cu)

/******************************************************************************************
************************************ 1 HIBRTCC *********************************************
******************************************************************************************/
#define HIB_HIBRTCC            (((HIBRTCC_TypeDef*)(HIB_BASE+HIB_HIBRTCC_OFFSET )))
#define HIB_HIBRTCC_R          (*((volatile const uint32_t *)(HIB_BASE+HIB_HIBRTCC_OFFSET)))
#define HIB_BITBANDING_HIBRTCC      (((BITBANDING_HIBRTCC_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRTCC_OFFSET)*32))))


/*----------*/
#define HIB_HIBRTCC_R_RTCC_MASK     ((uint32_t)0xFFFFFFFFu)
#define HIB_HIBRTCC_R_RTCC_BIT      (0)

#define HIB_HIBRTCC_RTCC_MASK       ((uint32_t)0xFFFFFFFFu)
/*----------*/

/******************************************************************************************
************************************ 2 HIBRTCM0 *********************************************
******************************************************************************************/

#define HIB_HIBRTCM0            (((HIBRTCM0_TypeDef*)(HIB_BASE+HIB_HIBRTCM0_OFFSET )))
#define HIB_HIBRTCM0_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBRTCM0_OFFSET)))
#define HIB_BITBANDING_HIBRTCM0      (((BITBANDING_HIBRTCM0_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRTCM0_OFFSET)*32))))

/*----------*/
#define HIB_HIBRTCM0_R_RTCM0_MASK     ((uint32_t)0xFFFFFFFFu)
#define HIB_HIBRTCM0_R_RTCM0_BIT      (0)

#define HIB_HIBRTCM0_RTCM0_MASK       ((uint32_t)0xFFFFFFFFu)
/*----------*/

/******************************************************************************************
************************************ 3 HIBRTCLD *********************************************
******************************************************************************************/

#define HIB_HIBRTCLD            (((HIBRTCLD_TypeDef*)(HIB_BASE+HIB_HIBRTCLD_OFFSET )))
#define HIB_HIBRTCLD_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBRTCLD_OFFSET)))
#define HIB_BITBANDING_HIBRTCLD      (((BITBANDING_HIBRTCLD_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRTCLD_OFFSET)*32))))

/*----------*/
#define HIB_HIBRTCLD_R_RTCLD_MASK     ((uint32_t)0xFFFFFFFFu)
#define HIB_HIBRTCLD_R_RTCLD_BIT      (0)

#define HIB_HIBRTCLD_RTCLD_MASK       ((uint32_t)0xFFFFFFFFu)
/*----------*/

/******************************************************************************************
************************************ 4 HIBCTL *********************************************
******************************************************************************************/

#define HIB_HIBCTL            (((HIBCTL_TypeDef*)(HIB_BASE+HIB_HIBCTL_OFFSET )))
#define HIB_HIBCTL_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBCTL_OFFSET)))
#define HIB_BITBANDING_HIBCTL      (((BITBANDING_HIBCTL_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32))))


/*----------*/
#define HIB_HIBCTL_R_RTCEN_MASK     ((uint32_t)0x00000001u)
#define HIB_HIBCTL_R_RTCEN_BIT      (0)
#define HIB_HIBCTL_R_RTCEN_DIS      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_RTCEN_EN       ((uint32_t)0x00000001u)

#define HIB_HIBCTL_RTCEN_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_RTCEN_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBCTL_RTCEN_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_HIBREQ_MASK     ((uint32_t)0x00000002u)
#define HIB_HIBCTL_R_HIBREQ_BIT      (1)
#define HIB_HIBCTL_R_HIBREQ_NOREQ    ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_HIBREQ_INIT     ((uint32_t)0x00000002u)

#define HIB_HIBCTL_HIBREQ_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_HIBREQ_NOREQ      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_HIBREQ_INIT       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_RTCWEN_MASK     ((uint32_t)0x00000008u)
#define HIB_HIBCTL_R_RTCWEN_BIT      (3)
#define HIB_HIBCTL_R_RTCWEN_DIS      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_RTCWEN_EN       ((uint32_t)0x00000008u)

#define HIB_HIBCTL_RTCWEN_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_RTCWEN_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBCTL_RTCWEN_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_PINWEN_MASK     ((uint32_t)0x00000010u)
#define HIB_HIBCTL_R_PINWEN_BIT      (4)
#define HIB_HIBCTL_R_PINWEN_DIS      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_PINWEN_EN       ((uint32_t)0x00000010u)

#define HIB_HIBCTL_PINWEN_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_PINWEN_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBCTL_PINWEN_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_CLK32EN_MASK     ((uint32_t)0x00000040u)
#define HIB_HIBCTL_R_CLK32EN_BIT      (6)
#define HIB_HIBCTL_R_CLK32EN_DIS      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_CLK32EN_EN       ((uint32_t)0x00000040u)

#define HIB_HIBCTL_CLK32EN_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_CLK32EN_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBCTL_CLK32EN_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_VABORT_MASK     ((uint32_t)0x00000080u)
#define HIB_HIBCTL_R_VABORT_BIT      (7)
#define HIB_HIBCTL_R_VABORT_DIS      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_VABORT_EN       ((uint32_t)0x00000080u)

#define HIB_HIBCTL_VABORT_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_VABORT_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBCTL_VABORT_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_VDD3ON_MASK     ((uint32_t)0x00000100u)
#define HIB_HIBCTL_R_VDD3ON_BIT      (8)
#define HIB_HIBCTL_R_VDD3ON_DIS      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_VDD3ON_EN       ((uint32_t)0x00000100u)

#define HIB_HIBCTL_VDD3ON_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_VDD3ON_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBCTL_VDD3ON_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_BATWKEN_MASK     ((uint32_t)0x00000200u)
#define HIB_HIBCTL_R_BATWKEN_BIT      (9)
#define HIB_HIBCTL_R_BATWKEN_DIS      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_BATWKEN_EN       ((uint32_t)0x00000200u)

#define HIB_HIBCTL_BATWKEN_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_BATWKEN_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBCTL_BATWKEN_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_BATCHK_MASK       ((uint32_t)0x00000400u)
#define HIB_HIBCTL_R_BATCHK_BIT        (10)
#define HIB_HIBCTL_R_BATCHK_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_BATCHK_NOCOMPLETE ((uint32_t)0x00000400u)
#define HIB_HIBCTL_R_BATCHK_INIT       ((uint32_t)0x00000400u)

#define HIB_HIBCTL_BATCHK_MASK        ((uint32_t)0x00000001u)
#define HIB_HIBCTL_BATCHK_NOACTIVE    ((uint32_t)0x00000000u)
#define HIB_HIBCTL_BATCHK_NOCOMPLETE  ((uint32_t)0x00000001u)
#define HIB_HIBCTL_BATCHK_INIT        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_VBATSEL_MASK       ((uint32_t)0x00006000u)
#define HIB_HIBCTL_R_VBATSEL_BIT        (13)
#define HIB_HIBCTL_R_VBATSEL_1900mV     ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_VBATSEL_2100mV     ((uint32_t)0x00002000u)
#define HIB_HIBCTL_R_VBATSEL_2300mV     ((uint32_t)0x00004000u)
#define HIB_HIBCTL_R_VBATSEL_2500mV     ((uint32_t)0x00006000u)

#define HIB_HIBCTL_VBATSEL_MASK        ((uint32_t)0x00000003u)
#define HIB_HIBCTL_VBATSEL_1900mV      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_VBATSEL_2100mV      ((uint32_t)0x00000001u)
#define HIB_HIBCTL_VBATSEL_2300mV      ((uint32_t)0x00000002u)
#define HIB_HIBCTL_VBATSEL_2500mV      ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_OSCBYP_MASK     ((uint32_t)0x00010000u)
#define HIB_HIBCTL_R_OSCBYP_BIT      (16)
#define HIB_HIBCTL_R_OSCBYP_EN       ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_OSCBYP_DIS      ((uint32_t)0x00010000u)

#define HIB_HIBCTL_OSCBYP_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_OSCBYP_EN         ((uint32_t)0x00000000u)
#define HIB_HIBCTL_OSCBYP_DIS        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_OSCDRV_MASK     ((uint32_t)0x00020000u)
#define HIB_HIBCTL_R_OSCDRV_BIT      (17)
#define HIB_HIBCTL_R_OSCDRV_12pF     ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_OSCDRV_24pF     ((uint32_t)0x00020000u)

#define HIB_HIBCTL_OSCDRV_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_OSCDRV_12pF       ((uint32_t)0x00000000u)
#define HIB_HIBCTL_OSCDRV_24pF       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_WRC_MASK     ((uint32_t)0x80000000u)
#define HIB_HIBCTL_R_WRC_BIT      (31)
#define HIB_HIBCTL_R_WRC_BUSY     ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_WRC_RDY      ((uint32_t)0x80000000u)

#define HIB_HIBCTL_WRC_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_WRC_BUSY       ((uint32_t)0x00000000u)
#define HIB_HIBCTL_WRC_RDY        ((uint32_t)0x00000001u)
/*----------*/


#define HIB_BITBANDING_HIBCTL_RTCEN   (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_RTCEN_BIT*4))))
#define HIB_BITBANDING_HIBCTL_HIBREQ  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_HIBREQ_BIT*4))))
#define HIB_BITBANDING_HIBCTL_RTCWEN  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_RTCWEN_BIT*4))))
#define HIB_BITBANDING_HIBCTL_PINWEN  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_PINWEN_BIT*4))))
#define HIB_BITBANDING_HIBCTL_CLK32EN (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_CLK32EN_BIT*4))))
#define HIB_BITBANDING_HIBCTL_VABORT  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_VABORT_BIT*4))))
#define HIB_BITBANDING_HIBCTL_VDD3ON  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_VDD3ON_BIT*4))))
#define HIB_BITBANDING_HIBCTL_BATWKEN (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_BATWKEN_BIT*4))))
#define HIB_BITBANDING_HIBCTL_BATCHK  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_BATCHK_BIT*4))))
#define HIB_BITBANDING_HIBCTL_OSCBYP  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_OSCBYP_BIT*4))))
#define HIB_BITBANDING_HIBCTL_OSCDRV  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_OSCDRV_BIT*4))))
#define HIB_BITBANDING_HIBCTL_WRC     (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_WRC_BIT*4))))

/******************************************************************************************
************************************ 5 HIBIM *********************************************
******************************************************************************************/

#define HIB_HIBIM            (((HIBIM_TypeDef*)(HIB_BASE+HIB_HIBIM_OFFSET )))
#define HIB_HIBIM_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBIM_OFFSET)))
#define HIB_BITBANDING_HIBIM      (((BITBANDING_HIBIM_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32))))


/*----------*/
#define HIB_HIBIM_R_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIM_R_RTCALT0_BIT        (0)
#define HIB_HIBIM_R_RTCALT0_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_R_RTCALT0_EN         ((uint32_t)0x00000001u)

#define HIB_HIBIM_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIM_RTCALT0_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_RTCALT0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBIM_R_LOWBAT_MASK       ((uint32_t)0x00000004u)
#define HIB_HIBIM_R_LOWBAT_BIT        (2)
#define HIB_HIBIM_R_LOWBAT_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_R_LOWBAT_EN         ((uint32_t)0x00000004u)

#define HIB_HIBIM_LOWBAT_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIM_LOWBAT_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_LOWBAT_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBIM_R_EXTW_MASK       ((uint32_t)0x00000008u)
#define HIB_HIBIM_R_EXTW_BIT        (3)
#define HIB_HIBIM_R_EXTW_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_R_EXTW_EN         ((uint32_t)0x00000008u)

#define HIB_HIBIM_EXTW_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIM_EXTW_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_EXTW_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBIM_R_WC_MASK       ((uint32_t)0x00000010u)
#define HIB_HIBIM_R_WC_BIT        (4)
#define HIB_HIBIM_R_WC_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_R_WC_EN         ((uint32_t)0x00000010u)

#define HIB_HIBIM_WC_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIM_WC_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_WC_EN         ((uint32_t)0x00000001u)
/*----------*/

#define HIB_BITBANDING_HIBIM_RTCALT0 (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32)+(HIB_HIBIM_R_RTCALT0_BIT*4))))
#define HIB_BITBANDING_HIBIM_LOWBAT  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32)+(HIB_HIBIM_R_LOWBAT_BIT*4))))
#define HIB_BITBANDING_HIBIM_EXTW    (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32)+(HIB_HIBIM_R_EXTW_BIT*4))))
#define HIB_BITBANDING_HIBIM_WC      (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32)+(HIB_HIBIM_R_WC_BIT*4))))

/******************************************************************************************
************************************ 6 HIBRIS *********************************************
******************************************************************************************/


#define HIB_HIBRIS            (((HIBRIS_TypeDef*)(HIB_BASE+HIB_HIBRIS_OFFSET )))
#define HIB_HIBRIS_R          (*((volatile const uint32_t *)(HIB_BASE+HIB_HIBRIS_OFFSET)))
#define HIB_BITBANDING_HIBRIS      (((BITBANDING_HIBRIS_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32))))


/*----------*/
#define HIB_HIBRIS_R_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBRIS_R_RTCALT0_BIT        (0)
#define HIB_HIBRIS_R_RTCALT0_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_R_RTCALT0_ACTIVE     ((uint32_t)0x00000001u)

#define HIB_HIBRIS_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBRIS_RTCALT0_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_RTCALT0_ACTIVE     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBRIS_R_LOWBAT_MASK       ((uint32_t)0x00000004u)
#define HIB_HIBRIS_R_LOWBAT_BIT        (2)
#define HIB_HIBRIS_R_LOWBAT_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_R_LOWBAT_ACTIVE     ((uint32_t)0x00000004u)

#define HIB_HIBRIS_LOWBAT_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBRIS_LOWBAT_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_LOWBAT_ACTIVE     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBRIS_R_EXTW_MASK       ((uint32_t)0x00000008u)
#define HIB_HIBRIS_R_EXTW_BIT        (3)
#define HIB_HIBRIS_R_EXTW_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_R_EXTW_ACTIVE     ((uint32_t)0x00000008u)

#define HIB_HIBRIS_EXTW_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBRIS_EXTW_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_EXTW_ACTIVE     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBRIS_R_WC_MASK       ((uint32_t)0x00000010u)
#define HIB_HIBRIS_R_WC_BIT        (4)
#define HIB_HIBRIS_R_WC_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_R_WC_ACTIVE     ((uint32_t)0x00000010u)

#define HIB_HIBRIS_WC_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBRIS_WC_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_WC_ACTIVE     ((uint32_t)0x00000001u)
/*----------*/


#define HIB_BITBANDING_HIBRIS_RTCALT0 (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32)+(HIB_HIBRIS_R_RTCALT0_BIT*4))))
#define HIB_BITBANDING_HIBRIS_LOWBAT  (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32)+(HIB_HIBRIS_R_LOWBAT_BIT*4))))
#define HIB_BITBANDING_HIBRIS_EXTW    (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32)+(HIB_HIBRIS_R_EXTW_BIT*4))))
#define HIB_BITBANDING_HIBRIS_WC      (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32)+(HIB_HIBRIS_R_WC_BIT*4))))

/******************************************************************************************
************************************ 7 HIBMIS *********************************************
******************************************************************************************/

#define HIB_HIBMIS            (((HIBMIS_TypeDef*)(HIB_BASE+HIB_HIBMIS_OFFSET )))
#define HIB_HIBMIS_R          (*((volatile const uint32_t *)(HIB_BASE+HIB_HIBMIS_OFFSET)))
#define HIB_BITBANDING_HIBMIS      (((BITBANDING_HIBMIS_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32))))


/*----------*/
#define HIB_HIBMIS_R_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBMIS_R_RTCALT0_BIT        (0)
#define HIB_HIBMIS_R_RTCALT0_NOOCCUR   ((uint32_t)0x00000000u)
#define HIB_HIBMIS_R_RTCALT0_OCCUR     ((uint32_t)0x00000001u)

#define HIB_HIBMIS_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBMIS_RTCALT0_NOOCCUR    ((uint32_t)0x00000000u)
#define HIB_HIBMIS_RTCALT0_OCCUR      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBMIS_R_LOWBAT_MASK       ((uint32_t)0x00000004u)
#define HIB_HIBMIS_R_LOWBAT_BIT        (2)
#define HIB_HIBMIS_R_LOWBAT_NOOCCUR    ((uint32_t)0x00000000u)
#define HIB_HIBMIS_R_LOWBAT_OCCUR      ((uint32_t)0x00000004u)

#define HIB_HIBMIS_LOWBAT_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBMIS_LOWBAT_NOOCCUR    ((uint32_t)0x00000000u)
#define HIB_HIBMIS_LOWBAT_OCCUR      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBMIS_R_EXTW_MASK       ((uint32_t)0x00000008u)
#define HIB_HIBMIS_R_EXTW_BIT        (3)
#define HIB_HIBMIS_R_EXTW_NOOCCUR    ((uint32_t)0x00000000u)
#define HIB_HIBMIS_R_EXTW_OCCUR      ((uint32_t)0x00000008u)

#define HIB_HIBMIS_EXTW_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBMIS_EXTW_NOOCCUR    ((uint32_t)0x00000000u)
#define HIB_HIBMIS_EXTW_OCCUR      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBMIS_R_WC_MASK       ((uint32_t)0x00000010u)
#define HIB_HIBMIS_R_WC_BIT        (4)
#define HIB_HIBMIS_R_WC_NOOCCUR    ((uint32_t)0x00000000u)
#define HIB_HIBMIS_R_WC_OCCUR      ((uint32_t)0x00000010u)

#define HIB_HIBMIS_WC_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBMIS_WC_NOOCCUR    ((uint32_t)0x00000000u)
#define HIB_HIBMIS_WC_OCCUR      ((uint32_t)0x00000001u)
/*----------*/

#define HIB_BITBANDING_HIBMIS_RTCALT0 (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32)+(HIB_HIBMIS_R_RTCALT0_BIT*4))))
#define HIB_BITBANDING_HIBMIS_LOWBAT  (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32)+(HIB_HIBMIS_R_LOWBAT_BIT*4))))
#define HIB_BITBANDING_HIBMIS_EXTW    (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32)+(HIB_HIBMIS_R_EXTW_BIT*4))))
#define HIB_BITBANDING_HIBMIS_WC      (*((volatile const uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32)+(HIB_HIBMIS_R_WC_BIT*4))))

/******************************************************************************************
************************************ 8 HIBIC *********************************************
******************************************************************************************/

#define HIB_HIBIC            (((HIBIC_TypeDef*)(HIB_BASE+HIB_HIBIC_OFFSET )))
#define HIB_HIBIC_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBIC_OFFSET)))
#define HIB_BITBANDING_HIBIC      (((BITBANDING_HIBIC_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32))))

/*----------*/
#define HIB_HIBIC_R_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIC_R_RTCALT0_BIT        (0)
#define HIB_HIBIC_R_RTCALT0_CLEAR      ((uint32_t)0x00000001u)

#define HIB_HIBIC_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIC_RTCALT0_CLEAR      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBIC_R_LOWBAT_MASK       ((uint32_t)0x00000004u)
#define HIB_HIBIC_R_LOWBAT_BIT        (2)
#define HIB_HIBIC_R_LOWBAT_CLEAR      ((uint32_t)0x00000004u)

#define HIB_HIBIC_LOWBAT_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIC_LOWBAT_CLEAR      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBIC_R_EXTW_MASK       ((uint32_t)0x00000008u)
#define HIB_HIBIC_R_EXTW_BIT        (3)
#define HIB_HIBIC_R_EXTW_CLEAR      ((uint32_t)0x00000008u)

#define HIB_HIBIC_EXTW_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIC_EXTW_CLEAR      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBIC_R_WC_MASK       ((uint32_t)0x00000010u)
#define HIB_HIBIC_R_WC_BIT        (4)
#define HIB_HIBIC_R_WC_CLEAR      ((uint32_t)0x00000010u)

#define HIB_HIBIC_WC_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIC_WC_CLEAR      ((uint32_t)0x00000001u)
/*----------*/

#define HIB_BITBANDING_HIBIC_RTCALT0 (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32)+(HIB_HIBIC_R_RTCALT0_BIT*4))))
#define HIB_BITBANDING_HIBIC_LOWBAT  (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32)+(HIB_HIBIC_R_LOWBAT_BIT*4))))
#define HIB_BITBANDING_HIBIC_EXTW    (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32)+(HIB_HIBIC_R_EXTW_BIT*4))))
#define HIB_BITBANDING_HIBIC_WC      (*((volatile uint32_t *)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32)+(HIB_HIBIC_R_WC_BIT*4))))

/******************************************************************************************
************************************ 9 HIBRTCT *********************************************
******************************************************************************************/

#define HIB_HIBRTCT            (((HIBRTCT_TypeDef*)(HIB_BASE+HIB_HIBRTCT_OFFSET )))
#define HIB_HIBRTCT_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBRTCT_OFFSET)))
#define HIB_BITBANDING_HIBRTCT      (((BITBANDING_HIBRTCT_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRTCT_OFFSET)*32))))

/*----------*/
#define HIB_HIBRTCT_R_TRIM_MASK     ((uint32_t)0x0000FFFFu)
#define HIB_HIBRTCT_R_TRIM_BIT      (0)

#define HIB_HIBRTCT_TRIM_MASK       ((uint32_t)0x0000FFFFu)
/*----------*/

/******************************************************************************************
************************************ 10 HIBRTCSS *********************************************
******************************************************************************************/

#define HIB_HIBRTCSS            (((HIBRTCSS_TypeDef*)(HIB_BASE+HIB_HIBRTCSS_OFFSET )))
#define HIB_HIBRTCSS_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBRTCSS_OFFSET)))
#define HIB_BITBANDING_HIBRTCSS      (((BITBANDING_HIBRTCSS_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBRTCSS_OFFSET)*32))))

/*----------*/
#define HIB_HIBRTCSS_R_RTCSSC_MASK     ((uint32_t)0x00007FFFu)
#define HIB_HIBRTCSS_R_RTCSSC_BIT      (0)

#define HIB_HIBRTCSS_RTCSSC_MASK       ((uint32_t)0x00007FFFu)
/*----------*/

/*----------*/
#define HIB_HIBRTCSS_R_RTCSSM_MASK     ((uint32_t)0x7FFF0000u)
#define HIB_HIBRTCSS_R_RTCSSM_BIT      (16)

#define HIB_HIBRTCSS_RTCSSM_MASK       ((uint32_t)0x00007FFFu)
/*----------*/


/******************************************************************************************
************************************ HIBDATA *********************************************
******************************************************************************************/

#define HIB_HIBDATA            (((HIBDATA_ARRAY_TypeDef*)(HIB_BASE+HIB_HIBDATA_OFFSET )))
#define HIB_BITBANDING_HIBDATA      (((BITBANDING_HIBDATA_ARRAY_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA_OFFSET)*32))))



/******************************************************************************************
************************************ 11 HIBDATA0 *********************************************
******************************************************************************************/


#define HIB_HIBDATA0            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA0_OFFSET )))
#define HIB_HIBDATA0_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA0_OFFSET)))
#define HIB_BITBANDING_HIBDATA0      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA0_OFFSET)*32))))

#define HIB_HIBDATA1            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA1_OFFSET )))
#define HIB_HIBDATA1_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA1_OFFSET)))
#define HIB_BITBANDING_HIBDATA1      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA1_OFFSET)*32))))

#define HIB_HIBDATA2            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA2_OFFSET )))
#define HIB_HIBDATA2_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA2_OFFSET)))
#define HIB_BITBANDING_HIBDATA2      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA2_OFFSET)*32))))

#define HIB_HIBDATA3            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA3_OFFSET )))
#define HIB_HIBDATA3_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA3_OFFSET)))
#define HIB_BITBANDING_HIBDATA3      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA3_OFFSET)*32))))

#define HIB_HIBDATA4            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA4_OFFSET )))
#define HIB_HIBDATA4_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA4_OFFSET)))
#define HIB_BITBANDING_HIBDATA4      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA4_OFFSET)*32))))

#define HIB_HIBDATA5            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA5_OFFSET )))
#define HIB_HIBDATA5_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA5_OFFSET)))
#define HIB_BITBANDING_HIBDATA5      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA5_OFFSET)*32))))

#define HIB_HIBDATA6            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA6_OFFSET )))
#define HIB_HIBDATA6_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA6_OFFSET)))
#define HIB_BITBANDING_HIBDATA6      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA6_OFFSET)*32))))

#define HIB_HIBDATA7            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA7_OFFSET )))
#define HIB_HIBDATA7_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA7_OFFSET)))
#define HIB_BITBANDING_HIBDATA7      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA7_OFFSET)*32))))

#define HIB_HIBDATA8            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA8_OFFSET )))
#define HIB_HIBDATA8_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA8_OFFSET)))
#define HIB_BITBANDING_HIBDATA8      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA8_OFFSET)*32))))

#define HIB_HIBDATA9            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA9_OFFSET )))
#define HIB_HIBDATA9_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA9_OFFSET)))
#define HIB_BITBANDING_HIBDATA9      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA9_OFFSET)*32))))

#define HIB_HIBDATA10            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA10_OFFSET )))
#define HIB_HIBDATA10_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA10_OFFSET)))
#define HIB_BITBANDING_HIBDATA10      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA10_OFFSET)*32))))

#define HIB_HIBDATA11            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA11_OFFSET )))
#define HIB_HIBDATA11_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA11_OFFSET)))
#define HIB_BITBANDING_HIBDATA11      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA11_OFFSET)*32))))

#define HIB_HIBDATA12            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA12_OFFSET )))
#define HIB_HIBDATA12_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA12_OFFSET)))
#define HIB_BITBANDING_HIBDATA12      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA12_OFFSET)*32))))

#define HIB_HIBDATA13            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA13_OFFSET )))
#define HIB_HIBDATA13_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA13_OFFSET)))
#define HIB_BITBANDING_HIBDATA13      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA13_OFFSET)*32))))

#define HIB_HIBDATA14            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA14_OFFSET )))
#define HIB_HIBDATA14_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA14_OFFSET)))
#define HIB_BITBANDING_HIBDATA14      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA14_OFFSET)*32))))

#define HIB_HIBDATA15            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA15_OFFSET )))
#define HIB_HIBDATA15_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA15_OFFSET)))
#define HIB_BITBANDING_HIBDATA15      (((BITBANDING_HIBDATA_TypeDef*)(HIB_BITBANDING_BASE+((HIB_OFFSET+HIB_HIBDATA15_OFFSET)*32))))




#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_H_ */
