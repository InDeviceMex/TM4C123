/**
 *
 * @file HIB_RegisterDefines.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERDEFINES_H_

#include <stdint.h>

/******************************************************************************************
************************************ 1 HIBRTCC *********************************************
******************************************************************************************/

/*----------*/
#define HIB_HIBRTCC_R_RTCC_MASK     ((uint32_t)0xFFFFFFFFu)
#define HIB_HIBRTCC_R_RTCC_BIT      (0u)

#define HIB_HIBRTCC_RTCC_MASK       ((uint32_t)0xFFFFFFFFu)
/*----------*/

/******************************************************************************************
************************************ 2 HIBRTCM0 *********************************************
******************************************************************************************/

/*----------*/
#define HIB_HIBRTCM0_R_RTCM0_MASK     ((uint32_t)0xFFFFFFFFu)
#define HIB_HIBRTCM0_R_RTCM0_BIT      (0u)

#define HIB_HIBRTCM0_RTCM0_MASK       ((uint32_t)0xFFFFFFFFu)
/*----------*/

/******************************************************************************************
************************************ 3 HIBRTCLD *********************************************
******************************************************************************************/

/*----------*/
#define HIB_HIBRTCLD_R_RTCLD_MASK     ((uint32_t)0xFFFFFFFFu)
#define HIB_HIBRTCLD_R_RTCLD_BIT      (0u)

#define HIB_HIBRTCLD_RTCLD_MASK       ((uint32_t)0xFFFFFFFFu)
/*----------*/

/******************************************************************************************
************************************ 4 HIBCTL *********************************************
******************************************************************************************/

/*----------*/
#define HIB_HIBCTL_R_RTCEN_MASK     ((uint32_t)0x00000001u)
#define HIB_HIBCTL_R_RTCEN_BIT      (0u)
#define HIB_HIBCTL_R_RTCEN_DIS      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_RTCEN_EN       ((uint32_t)0x00000001u)

#define HIB_HIBCTL_RTCEN_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_RTCEN_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBCTL_RTCEN_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_HIBREQ_MASK     ((uint32_t)0x00000002u)
#define HIB_HIBCTL_R_HIBREQ_BIT      (1u)
#define HIB_HIBCTL_R_HIBREQ_NOREQ    ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_HIBREQ_INIT     ((uint32_t)0x00000002u)

#define HIB_HIBCTL_HIBREQ_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_HIBREQ_NOREQ      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_HIBREQ_INIT       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_RTCWEN_MASK     ((uint32_t)0x00000008u)
#define HIB_HIBCTL_R_RTCWEN_BIT      (3u)
#define HIB_HIBCTL_R_RTCWEN_DIS      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_RTCWEN_EN       ((uint32_t)0x00000008u)

#define HIB_HIBCTL_RTCWEN_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_RTCWEN_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBCTL_RTCWEN_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_PINWEN_MASK     ((uint32_t)0x00000010u)
#define HIB_HIBCTL_R_PINWEN_BIT      (4u)
#define HIB_HIBCTL_R_PINWEN_DIS      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_PINWEN_EN       ((uint32_t)0x00000010u)

#define HIB_HIBCTL_PINWEN_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_PINWEN_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBCTL_PINWEN_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_CLK32EN_MASK     ((uint32_t)0x00000040u)
#define HIB_HIBCTL_R_CLK32EN_BIT      (6u)
#define HIB_HIBCTL_R_CLK32EN_DIS      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_CLK32EN_EN       ((uint32_t)0x00000040u)

#define HIB_HIBCTL_CLK32EN_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_CLK32EN_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBCTL_CLK32EN_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_VABORT_MASK     ((uint32_t)0x00000080u)
#define HIB_HIBCTL_R_VABORT_BIT      (7u)
#define HIB_HIBCTL_R_VABORT_DIS      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_VABORT_EN       ((uint32_t)0x00000080u)

#define HIB_HIBCTL_VABORT_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_VABORT_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBCTL_VABORT_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_VDD3ON_MASK     ((uint32_t)0x00000100u)
#define HIB_HIBCTL_R_VDD3ON_BIT      (8u)
#define HIB_HIBCTL_R_VDD3ON_DIS      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_VDD3ON_EN       ((uint32_t)0x00000100u)

#define HIB_HIBCTL_VDD3ON_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_VDD3ON_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBCTL_VDD3ON_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_BATWKEN_MASK     ((uint32_t)0x00000200u)
#define HIB_HIBCTL_R_BATWKEN_BIT      (9u)
#define HIB_HIBCTL_R_BATWKEN_DIS      ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_BATWKEN_EN       ((uint32_t)0x00000200u)

#define HIB_HIBCTL_BATWKEN_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_BATWKEN_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBCTL_BATWKEN_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_BATCHK_MASK       ((uint32_t)0x00000400u)
#define HIB_HIBCTL_R_BATCHK_BIT        (10u)
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
#define HIB_HIBCTL_R_VBATSEL_BIT        (13u)
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
#define HIB_HIBCTL_R_OSCBYP_BIT      (16u)
#define HIB_HIBCTL_R_OSCBYP_EN       ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_OSCBYP_DIS      ((uint32_t)0x00010000u)

#define HIB_HIBCTL_OSCBYP_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_OSCBYP_EN         ((uint32_t)0x00000000u)
#define HIB_HIBCTL_OSCBYP_DIS        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_OSCDRV_MASK     ((uint32_t)0x00020000u)
#define HIB_HIBCTL_R_OSCDRV_BIT      (17u)
#define HIB_HIBCTL_R_OSCDRV_12pF     ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_OSCDRV_24pF     ((uint32_t)0x00020000u)

#define HIB_HIBCTL_OSCDRV_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_OSCDRV_12pF       ((uint32_t)0x00000000u)
#define HIB_HIBCTL_OSCDRV_24pF       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBCTL_R_WRC_MASK     ((uint32_t)0x80000000u)
#define HIB_HIBCTL_R_WRC_BIT      (31u)
#define HIB_HIBCTL_R_WRC_BUSY     ((uint32_t)0x00000000u)
#define HIB_HIBCTL_R_WRC_RDY      ((uint32_t)0x80000000u)

#define HIB_HIBCTL_WRC_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBCTL_WRC_BUSY       ((uint32_t)0x00000000u)
#define HIB_HIBCTL_WRC_RDY        ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************ 5 HIBIM *********************************************
******************************************************************************************/

/*----------*/
#define HIB_HIBIM_R_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIM_R_RTCALT0_BIT        (0u)
#define HIB_HIBIM_R_RTCALT0_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_R_RTCALT0_EN         ((uint32_t)0x00000001u)

#define HIB_HIBIM_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIM_RTCALT0_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_RTCALT0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBIM_R_LOWBAT_MASK       ((uint32_t)0x00000004u)
#define HIB_HIBIM_R_LOWBAT_BIT        (2u)
#define HIB_HIBIM_R_LOWBAT_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_R_LOWBAT_EN         ((uint32_t)0x00000004u)

#define HIB_HIBIM_LOWBAT_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIM_LOWBAT_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_LOWBAT_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBIM_R_EXTW_MASK       ((uint32_t)0x00000008u)
#define HIB_HIBIM_R_EXTW_BIT        (3u)
#define HIB_HIBIM_R_EXTW_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_R_EXTW_EN         ((uint32_t)0x00000008u)

#define HIB_HIBIM_EXTW_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIM_EXTW_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_EXTW_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBIM_R_WC_MASK       ((uint32_t)0x00000010u)
#define HIB_HIBIM_R_WC_BIT        (4u)
#define HIB_HIBIM_R_WC_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_R_WC_EN         ((uint32_t)0x00000010u)

#define HIB_HIBIM_WC_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIM_WC_DIS        ((uint32_t)0x00000000u)
#define HIB_HIBIM_WC_EN         ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************ 6 HIBRIS *********************************************
******************************************************************************************/

/*----------*/
#define HIB_HIBRIS_R_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBRIS_R_RTCALT0_BIT        (0u)
#define HIB_HIBRIS_R_RTCALT0_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_R_RTCALT0_ACTIVE     ((uint32_t)0x00000001u)

#define HIB_HIBRIS_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBRIS_RTCALT0_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_RTCALT0_ACTIVE     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBRIS_R_LOWBAT_MASK       ((uint32_t)0x00000004u)
#define HIB_HIBRIS_R_LOWBAT_BIT        (2u)
#define HIB_HIBRIS_R_LOWBAT_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_R_LOWBAT_ACTIVE     ((uint32_t)0x00000004u)

#define HIB_HIBRIS_LOWBAT_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBRIS_LOWBAT_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_LOWBAT_ACTIVE     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBRIS_R_EXTW_MASK       ((uint32_t)0x00000008u)
#define HIB_HIBRIS_R_EXTW_BIT        (3u)
#define HIB_HIBRIS_R_EXTW_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_R_EXTW_ACTIVE     ((uint32_t)0x00000008u)

#define HIB_HIBRIS_EXTW_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBRIS_EXTW_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_EXTW_ACTIVE     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBRIS_R_WC_MASK       ((uint32_t)0x00000010u)
#define HIB_HIBRIS_R_WC_BIT        (4u)
#define HIB_HIBRIS_R_WC_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_R_WC_ACTIVE     ((uint32_t)0x00000010u)

#define HIB_HIBRIS_WC_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBRIS_WC_NOACTIVE   ((uint32_t)0x00000000u)
#define HIB_HIBRIS_WC_ACTIVE     ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************ 7 HIBMIS *********************************************
******************************************************************************************/

/*----------*/
#define HIB_HIBMIS_R_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBMIS_R_RTCALT0_BIT        (0u)
#define HIB_HIBMIS_R_RTCALT0_NOOCCUR   ((uint32_t)0x00000000u)
#define HIB_HIBMIS_R_RTCALT0_OCCUR     ((uint32_t)0x00000001u)

#define HIB_HIBMIS_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBMIS_RTCALT0_NOOCCUR    ((uint32_t)0x00000000u)
#define HIB_HIBMIS_RTCALT0_OCCUR      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBMIS_R_LOWBAT_MASK       ((uint32_t)0x00000004u)
#define HIB_HIBMIS_R_LOWBAT_BIT        (2u)
#define HIB_HIBMIS_R_LOWBAT_NOOCCUR    ((uint32_t)0x00000000u)
#define HIB_HIBMIS_R_LOWBAT_OCCUR      ((uint32_t)0x00000004u)

#define HIB_HIBMIS_LOWBAT_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBMIS_LOWBAT_NOOCCUR    ((uint32_t)0x00000000u)
#define HIB_HIBMIS_LOWBAT_OCCUR      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBMIS_R_EXTW_MASK       ((uint32_t)0x00000008u)
#define HIB_HIBMIS_R_EXTW_BIT        (3u)
#define HIB_HIBMIS_R_EXTW_NOOCCUR    ((uint32_t)0x00000000u)
#define HIB_HIBMIS_R_EXTW_OCCUR      ((uint32_t)0x00000008u)

#define HIB_HIBMIS_EXTW_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBMIS_EXTW_NOOCCUR    ((uint32_t)0x00000000u)
#define HIB_HIBMIS_EXTW_OCCUR      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBMIS_R_WC_MASK       ((uint32_t)0x00000010u)
#define HIB_HIBMIS_R_WC_BIT        (4u)
#define HIB_HIBMIS_R_WC_NOOCCUR    ((uint32_t)0x00000000u)
#define HIB_HIBMIS_R_WC_OCCUR      ((uint32_t)0x00000010u)

#define HIB_HIBMIS_WC_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBMIS_WC_NOOCCUR    ((uint32_t)0x00000000u)
#define HIB_HIBMIS_WC_OCCUR      ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************ 8 HIBIC *********************************************
******************************************************************************************/

/*----------*/
#define HIB_HIBIC_R_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIC_R_RTCALT0_BIT        (0u)
#define HIB_HIBIC_R_RTCALT0_CLEAR      ((uint32_t)0x00000001u)

#define HIB_HIBIC_RTCALT0_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIC_RTCALT0_CLEAR      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBIC_R_LOWBAT_MASK       ((uint32_t)0x00000004u)
#define HIB_HIBIC_R_LOWBAT_BIT        (2u)
#define HIB_HIBIC_R_LOWBAT_CLEAR      ((uint32_t)0x00000004u)

#define HIB_HIBIC_LOWBAT_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIC_LOWBAT_CLEAR      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBIC_R_EXTW_MASK       ((uint32_t)0x00000008u)
#define HIB_HIBIC_R_EXTW_BIT        (3u)
#define HIB_HIBIC_R_EXTW_CLEAR      ((uint32_t)0x00000008u)

#define HIB_HIBIC_EXTW_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIC_EXTW_CLEAR      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define HIB_HIBIC_R_WC_MASK       ((uint32_t)0x00000010u)
#define HIB_HIBIC_R_WC_BIT        (4u)
#define HIB_HIBIC_R_WC_CLEAR      ((uint32_t)0x00000010u)

#define HIB_HIBIC_WC_MASK       ((uint32_t)0x00000001u)
#define HIB_HIBIC_WC_CLEAR      ((uint32_t)0x00000001u)
/*----------*/

/******************************************************************************************
************************************ 9 HIBRTCT *********************************************
******************************************************************************************/

/*----------*/
#define HIB_HIBRTCT_R_TRIM_MASK     ((uint32_t)0x0000FFFFu)
#define HIB_HIBRTCT_R_TRIM_BIT      (0u)

#define HIB_HIBRTCT_TRIM_MASK       ((uint32_t)0x0000FFFFu)
/*----------*/

/******************************************************************************************
************************************ 10 HIBRTCSS *********************************************
******************************************************************************************/

/*----------*/
#define HIB_HIBRTCSS_R_RTCSSC_MASK     ((uint32_t)0x00007FFFu)
#define HIB_HIBRTCSS_R_RTCSSC_BIT      (0u)

#define HIB_HIBRTCSS_RTCSSC_MASK       ((uint32_t)0x00007FFFu)
/*----------*/

/*----------*/
#define HIB_HIBRTCSS_R_RTCSSM_MASK     ((uint32_t)0x7FFF0000u)
#define HIB_HIBRTCSS_R_RTCSSM_BIT      (16u)

#define HIB_HIBRTCSS_RTCSSM_MASK       ((uint32_t)0x00007FFFu)
/*----------*/

/******************************************************************************************
************************************ HIBDATA *********************************************
******************************************************************************************/

/******************************************************************************************
************************************ 11 HIBDATA0 *********************************************
******************************************************************************************/

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERDEFINES_H_ */
