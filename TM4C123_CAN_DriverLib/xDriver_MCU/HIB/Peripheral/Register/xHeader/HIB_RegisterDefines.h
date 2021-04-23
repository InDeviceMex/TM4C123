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

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 1 RTCC *********************************************
******************************************************************************************/

/*----------*/
#define HIB_RTCC_R_RTCC_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define HIB_RTCC_R_RTCC_BIT    (0UL)

#define HIB_RTCC_RTCC_MASK    ((uint32_t) 0xFFFFFFFFUL)
/*----------*/

/******************************************************************************************
************************************ 2 RTCM0 *********************************************
******************************************************************************************/

/*----------*/
#define HIB_RTCM0_R_RTCM0_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define HIB_RTCM0_R_RTCM0_BIT    (0UL)

#define HIB_RTCM0_RTCM0_MASK    ((uint32_t) 0xFFFFFFFFUL)
/*----------*/

/******************************************************************************************
************************************ 3 RTCLD *********************************************
******************************************************************************************/

/*----------*/
#define HIB_RTCLD_R_RTCLD_MASK    ((uint32_t) 0xFFFFFFFFUL)
#define HIB_RTCLD_R_RTCLD_BIT    (0UL)

#define HIB_RTCLD_RTCLD_MASK    ((uint32_t) 0xFFFFFFFFUL)
/*----------*/

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/

/*----------*/
#define HIB_CTL_R_RTCEN_MASK    ((uint32_t) 0x00000001UL)
#define HIB_CTL_R_RTCEN_BIT    (0UL)
#define HIB_CTL_R_RTCEN_DIS    ((uint32_t) 0x00000000UL)
#define HIB_CTL_R_RTCEN_ENA    ((uint32_t) 0x00000001UL)

#define HIB_CTL_RTCEN_MASK    ((uint32_t) 0x00000001UL)
#define HIB_CTL_RTCEN_DIS    ((uint32_t) 0x00000000UL)
#define HIB_CTL_RTCEN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_CTL_R_REQ_MASK    ((uint32_t) 0x00000002UL)
#define HIB_CTL_R_REQ_BIT    (1UL)
#define HIB_CTL_R_REQ_NOREQ    ((uint32_t) 0x00000000UL)
#define HIB_CTL_R_REQ_INIT    ((uint32_t) 0x00000002UL)

#define HIB_CTL_REQ_MASK    ((uint32_t) 0x00000001UL)
#define HIB_CTL_REQ_NOREQ    ((uint32_t) 0x00000000UL)
#define HIB_CTL_REQ_INIT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_CTL_R_RTCWEN_MASK    ((uint32_t) 0x00000008UL)
#define HIB_CTL_R_RTCWEN_BIT    (3UL)
#define HIB_CTL_R_RTCWEN_DIS    ((uint32_t) 0x00000000UL)
#define HIB_CTL_R_RTCWEN_ENA    ((uint32_t) 0x00000008UL)

#define HIB_CTL_RTCWEN_MASK    ((uint32_t) 0x00000001UL)
#define HIB_CTL_RTCWEN_DIS    ((uint32_t) 0x00000000UL)
#define HIB_CTL_RTCWEN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_CTL_R_PINWEN_MASK    ((uint32_t) 0x00000010UL)
#define HIB_CTL_R_PINWEN_BIT    (4UL)
#define HIB_CTL_R_PINWEN_DIS    ((uint32_t) 0x00000000UL)
#define HIB_CTL_R_PINWEN_ENA    ((uint32_t) 0x00000010UL)

#define HIB_CTL_PINWEN_MASK    ((uint32_t) 0x00000001UL)
#define HIB_CTL_PINWEN_DIS    ((uint32_t) 0x00000000UL)
#define HIB_CTL_PINWEN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_CTL_R_CLK32EN_MASK    ((uint32_t) 0x00000040UL)
#define HIB_CTL_R_CLK32EN_BIT    (6UL)
#define HIB_CTL_R_CLK32EN_DIS    ((uint32_t) 0x00000000UL)
#define HIB_CTL_R_CLK32EN_ENA    ((uint32_t) 0x00000040UL)

#define HIB_CTL_CLK32EN_MASK    ((uint32_t) 0x00000001UL)
#define HIB_CTL_CLK32EN_DIS    ((uint32_t) 0x00000000UL)
#define HIB_CTL_CLK32EN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_CTL_R_VABORT_MASK    ((uint32_t) 0x00000080UL)
#define HIB_CTL_R_VABORT_BIT    (7UL)
#define HIB_CTL_R_VABORT_DIS    ((uint32_t) 0x00000000UL)
#define HIB_CTL_R_VABORT_ENA    ((uint32_t) 0x00000080UL)

#define HIB_CTL_VABORT_MASK    ((uint32_t) 0x00000001UL)
#define HIB_CTL_VABORT_DIS    ((uint32_t) 0x00000000UL)
#define HIB_CTL_VABORT_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_CTL_R_VDD3ON_MASK    ((uint32_t) 0x00000100UL)
#define HIB_CTL_R_VDD3ON_BIT    (8UL)
#define HIB_CTL_R_VDD3ON_DIS    ((uint32_t) 0x00000000UL)
#define HIB_CTL_R_VDD3ON_ENA    ((uint32_t) 0x00000100UL)

#define HIB_CTL_VDD3ON_MASK    ((uint32_t) 0x00000001UL)
#define HIB_CTL_VDD3ON_DIS    ((uint32_t) 0x00000000UL)
#define HIB_CTL_VDD3ON_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_CTL_R_BATWKEN_MASK    ((uint32_t) 0x00000200UL)
#define HIB_CTL_R_BATWKEN_BIT    (9UL)
#define HIB_CTL_R_BATWKEN_DIS    ((uint32_t) 0x00000000UL)
#define HIB_CTL_R_BATWKEN_ENA    ((uint32_t) 0x00000200UL)

#define HIB_CTL_BATWKEN_MASK    ((uint32_t) 0x00000001UL)
#define HIB_CTL_BATWKEN_DIS    ((uint32_t) 0x00000000UL)
#define HIB_CTL_BATWKEN_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_CTL_R_BATCHK_MASK    ((uint32_t) 0x00000400UL)
#define HIB_CTL_R_BATCHK_BIT    (10UL)
#define HIB_CTL_R_BATCHK_NOACTIVE    ((uint32_t) 0x00000000UL)
#define HIB_CTL_R_BATCHK_NOCOMPLETE    ((uint32_t) 0x00000400UL)
#define HIB_CTL_R_BATCHK_INIT    ((uint32_t) 0x00000400UL)

#define HIB_CTL_BATCHK_MASK    ((uint32_t) 0x00000001UL)
#define HIB_CTL_BATCHK_NOACTIVE    ((uint32_t) 0x00000000UL)
#define HIB_CTL_BATCHK_NOCOMPLETE    ((uint32_t) 0x00000001UL)
#define HIB_CTL_BATCHK_INIT    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_CTL_R_VBATSEL_MASK    ((uint32_t) 0x00006000UL)
#define HIB_CTL_R_VBATSEL_BIT    (13UL)
#define HIB_CTL_R_VBATSEL_1900mV    ((uint32_t) 0x00000000UL)
#define HIB_CTL_R_VBATSEL_2100mV    ((uint32_t) 0x00002000UL)
#define HIB_CTL_R_VBATSEL_2300mV    ((uint32_t) 0x00004000UL)
#define HIB_CTL_R_VBATSEL_2500mV    ((uint32_t) 0x00006000UL)

#define HIB_CTL_VBATSEL_MASK    ((uint32_t) 0x00000003UL)
#define HIB_CTL_VBATSEL_1900mV    ((uint32_t) 0x00000000UL)
#define HIB_CTL_VBATSEL_2100mV    ((uint32_t) 0x00000001UL)
#define HIB_CTL_VBATSEL_2300mV    ((uint32_t) 0x00000002UL)
#define HIB_CTL_VBATSEL_2500mV    ((uint32_t) 0x00000003UL)
/*----------*/

/*----------*/
#define HIB_CTL_R_OSCBYP_MASK    ((uint32_t) 0x00010000UL)
#define HIB_CTL_R_OSCBYP_BIT    (16UL)
#define HIB_CTL_R_OSCBYP_ENA    ((uint32_t) 0x00000000UL)
#define HIB_CTL_R_OSCBYP_DIS    ((uint32_t) 0x00010000UL)

#define HIB_CTL_OSCBYP_MASK    ((uint32_t) 0x00000001UL)
#define HIB_CTL_OSCBYP_ENA    ((uint32_t) 0x00000000UL)
#define HIB_CTL_OSCBYP_DIS    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_CTL_R_OSCDRV_MASK    ((uint32_t) 0x00020000UL)
#define HIB_CTL_R_OSCDRV_BIT    (17UL)
#define HIB_CTL_R_OSCDRV_12pF    ((uint32_t) 0x00000000UL)
#define HIB_CTL_R_OSCDRV_24pF    ((uint32_t) 0x00020000UL)

#define HIB_CTL_OSCDRV_MASK    ((uint32_t) 0x00000001UL)
#define HIB_CTL_OSCDRV_12pF    ((uint32_t) 0x00000000UL)
#define HIB_CTL_OSCDRV_24pF    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_CTL_R_WRC_MASK    ((uint32_t) 0x80000000UL)
#define HIB_CTL_R_WRC_BIT    (31UL)
#define HIB_CTL_R_WRC_BUSY    ((uint32_t) 0x00000000UL)
#define HIB_CTL_R_WRC_RDY    ((uint32_t) 0x80000000UL)

#define HIB_CTL_WRC_MASK    ((uint32_t) 0x00000001UL)
#define HIB_CTL_WRC_BUSY    ((uint32_t) 0x00000000UL)
#define HIB_CTL_WRC_RDY    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 5 IM *********************************************
******************************************************************************************/

/*----------*/
#define HIB_IM_R_RTCALT0_MASK    ((uint32_t) 0x00000001UL)
#define HIB_IM_R_RTCALT0_BIT    (0UL)
#define HIB_IM_R_RTCALT0_DIS    ((uint32_t) 0x00000000UL)
#define HIB_IM_R_RTCALT0_ENA    ((uint32_t) 0x00000001UL)

#define HIB_IM_RTCALT0_MASK    ((uint32_t) 0x00000001UL)
#define HIB_IM_RTCALT0_DIS    ((uint32_t) 0x00000000UL)
#define HIB_IM_RTCALT0_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_IM_R_LOWBAT_MASK    ((uint32_t) 0x00000004UL)
#define HIB_IM_R_LOWBAT_BIT    (2UL)
#define HIB_IM_R_LOWBAT_DIS    ((uint32_t) 0x00000000UL)
#define HIB_IM_R_LOWBAT_ENA    ((uint32_t) 0x00000004UL)

#define HIB_IM_LOWBAT_MASK    ((uint32_t) 0x00000001UL)
#define HIB_IM_LOWBAT_DIS    ((uint32_t) 0x00000000UL)
#define HIB_IM_LOWBAT_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_IM_R_EXTW_MASK    ((uint32_t) 0x00000008UL)
#define HIB_IM_R_EXTW_BIT    (3UL)
#define HIB_IM_R_EXTW_DIS    ((uint32_t) 0x00000000UL)
#define HIB_IM_R_EXTW_ENA    ((uint32_t) 0x00000008UL)

#define HIB_IM_EXTW_MASK    ((uint32_t) 0x00000001UL)
#define HIB_IM_EXTW_DIS    ((uint32_t) 0x00000000UL)
#define HIB_IM_EXTW_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_IM_R_WC_MASK    ((uint32_t) 0x00000010UL)
#define HIB_IM_R_WC_BIT    (4UL)
#define HIB_IM_R_WC_DIS    ((uint32_t) 0x00000000UL)
#define HIB_IM_R_WC_ENA    ((uint32_t) 0x00000010UL)

#define HIB_IM_WC_MASK    ((uint32_t) 0x00000001UL)
#define HIB_IM_WC_DIS    ((uint32_t) 0x00000000UL)
#define HIB_IM_WC_ENA    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 6 RIS *********************************************
******************************************************************************************/

/*----------*/
#define HIB_RIS_R_RTCALT0_MASK    ((uint32_t) 0x00000001UL)
#define HIB_RIS_R_RTCALT0_BIT    (0UL)
#define HIB_RIS_R_RTCALT0_NOACTIVE    ((uint32_t) 0x00000000UL)
#define HIB_RIS_R_RTCALT0_ACTIVE    ((uint32_t) 0x00000001UL)

#define HIB_RIS_RTCALT0_MASK    ((uint32_t) 0x00000001UL)
#define HIB_RIS_RTCALT0_NOACTIVE    ((uint32_t) 0x00000000UL)
#define HIB_RIS_RTCALT0_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_RIS_R_LOWBAT_MASK    ((uint32_t) 0x00000004UL)
#define HIB_RIS_R_LOWBAT_BIT    (2UL)
#define HIB_RIS_R_LOWBAT_NOACTIVE    ((uint32_t) 0x00000000UL)
#define HIB_RIS_R_LOWBAT_ACTIVE    ((uint32_t) 0x00000004UL)

#define HIB_RIS_LOWBAT_MASK    ((uint32_t) 0x00000001UL)
#define HIB_RIS_LOWBAT_NOACTIVE    ((uint32_t) 0x00000000UL)
#define HIB_RIS_LOWBAT_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_RIS_R_EXTW_MASK    ((uint32_t) 0x00000008UL)
#define HIB_RIS_R_EXTW_BIT    (3UL)
#define HIB_RIS_R_EXTW_NOACTIVE    ((uint32_t) 0x00000000UL)
#define HIB_RIS_R_EXTW_ACTIVE    ((uint32_t) 0x00000008UL)

#define HIB_RIS_EXTW_MASK    ((uint32_t) 0x00000001UL)
#define HIB_RIS_EXTW_NOACTIVE    ((uint32_t) 0x00000000UL)
#define HIB_RIS_EXTW_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_RIS_R_WC_MASK    ((uint32_t) 0x00000010UL)
#define HIB_RIS_R_WC_BIT    (4UL)
#define HIB_RIS_R_WC_NOACTIVE    ((uint32_t) 0x00000000UL)
#define HIB_RIS_R_WC_ACTIVE    ((uint32_t) 0x00000010UL)

#define HIB_RIS_WC_MASK    ((uint32_t) 0x00000001UL)
#define HIB_RIS_WC_NOACTIVE    ((uint32_t) 0x00000000UL)
#define HIB_RIS_WC_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 7 MIS *********************************************
******************************************************************************************/

/*----------*/
#define HIB_MIS_R_RTCALT0_MASK    ((uint32_t) 0x00000001UL)
#define HIB_MIS_R_RTCALT0_BIT    (0UL)
#define HIB_MIS_R_RTCALT0_NOOCCUR    ((uint32_t) 0x00000000UL)
#define HIB_MIS_R_RTCALT0_OCCUR    ((uint32_t) 0x00000001UL)

#define HIB_MIS_RTCALT0_MASK    ((uint32_t) 0x00000001UL)
#define HIB_MIS_RTCALT0_NOOCCUR    ((uint32_t) 0x00000000UL)
#define HIB_MIS_RTCALT0_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_MIS_R_LOWBAT_MASK    ((uint32_t) 0x00000004UL)
#define HIB_MIS_R_LOWBAT_BIT    (2UL)
#define HIB_MIS_R_LOWBAT_NOOCCUR    ((uint32_t) 0x00000000UL)
#define HIB_MIS_R_LOWBAT_OCCUR    ((uint32_t) 0x00000004UL)

#define HIB_MIS_LOWBAT_MASK    ((uint32_t) 0x00000001UL)
#define HIB_MIS_LOWBAT_NOOCCUR    ((uint32_t) 0x00000000UL)
#define HIB_MIS_LOWBAT_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_MIS_R_EXTW_MASK    ((uint32_t) 0x00000008UL)
#define HIB_MIS_R_EXTW_BIT    (3UL)
#define HIB_MIS_R_EXTW_NOOCCUR    ((uint32_t) 0x00000000UL)
#define HIB_MIS_R_EXTW_OCCUR    ((uint32_t) 0x00000008UL)

#define HIB_MIS_EXTW_MASK    ((uint32_t) 0x00000001UL)
#define HIB_MIS_EXTW_NOOCCUR    ((uint32_t) 0x00000000UL)
#define HIB_MIS_EXTW_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_MIS_R_WC_MASK    ((uint32_t) 0x00000010UL)
#define HIB_MIS_R_WC_BIT    (4UL)
#define HIB_MIS_R_WC_NOOCCUR    ((uint32_t) 0x00000000UL)
#define HIB_MIS_R_WC_OCCUR    ((uint32_t) 0x00000010UL)

#define HIB_MIS_WC_MASK    ((uint32_t) 0x00000001UL)
#define HIB_MIS_WC_NOOCCUR    ((uint32_t) 0x00000000UL)
#define HIB_MIS_WC_OCCUR    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 8 IC *********************************************
******************************************************************************************/

/*----------*/
#define HIB_IC_R_RTCALT0_MASK    ((uint32_t) 0x00000001UL)
#define HIB_IC_R_RTCALT0_BIT    (0UL)
#define HIB_IC_R_RTCALT0_CLEAR    ((uint32_t) 0x00000001UL)

#define HIB_IC_RTCALT0_MASK    ((uint32_t) 0x00000001UL)
#define HIB_IC_RTCALT0_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_IC_R_LOWBAT_MASK    ((uint32_t) 0x00000004UL)
#define HIB_IC_R_LOWBAT_BIT    (2UL)
#define HIB_IC_R_LOWBAT_CLEAR    ((uint32_t) 0x00000004UL)

#define HIB_IC_LOWBAT_MASK    ((uint32_t) 0x00000001UL)
#define HIB_IC_LOWBAT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_IC_R_EXTW_MASK    ((uint32_t) 0x00000008UL)
#define HIB_IC_R_EXTW_BIT    (3UL)
#define HIB_IC_R_EXTW_CLEAR    ((uint32_t) 0x00000008UL)

#define HIB_IC_EXTW_MASK    ((uint32_t) 0x00000001UL)
#define HIB_IC_EXTW_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define HIB_IC_R_WC_MASK    ((uint32_t) 0x00000010UL)
#define HIB_IC_R_WC_BIT    (4UL)
#define HIB_IC_R_WC_CLEAR    ((uint32_t) 0x00000010UL)

#define HIB_IC_WC_MASK    ((uint32_t) 0x00000001UL)
#define HIB_IC_WC_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 9 RTCT *********************************************
******************************************************************************************/

/*----------*/
#define HIB_RTCT_R_TRIM_MASK    ((uint32_t) 0x0000FFFFUL)
#define HIB_RTCT_R_TRIM_BIT    (0UL)

#define HIB_RTCT_TRIM_MASK    ((uint32_t) 0x0000FFFFUL)
/*----------*/

/******************************************************************************************
************************************ 10 RTCSS *********************************************
******************************************************************************************/

/*----------*/
#define HIB_RTCSS_R_RTCSSC_MASK    ((uint32_t) 0x00007FFFUL)
#define HIB_RTCSS_R_RTCSSC_BIT    (0UL)

#define HIB_RTCSS_RTCSSC_MASK    ((uint32_t) 0x00007FFFUL)
/*----------*/

/*----------*/
#define HIB_RTCSS_R_RTCSSM_MASK    ((uint32_t) 0x7FFF0000UL)
#define HIB_RTCSS_R_RTCSSM_BIT    (16UL)

#define HIB_RTCSS_RTCSSM_MASK    ((uint32_t) 0x00007FFFUL)
/*----------*/

/******************************************************************************************
************************************ DATA *********************************************
******************************************************************************************/

/******************************************************************************************
************************************ 11 DATA0 *********************************************
******************************************************************************************/

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERDEFINES_H_ */
