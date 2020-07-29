/**
 *
 * @file SYSCTL_RegisterDefines_Status.h
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_STATUS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_STATUS_H_

#include <stdint.h>

/******************************************************************************************
************************************25 SDPMST *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SDPMST_R_SPDERR_MASK     ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_R_SPDERR_BIT      (0u)
#define SYSCTL_SDPMST_R_SPDERR_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_SPDERR_ERROR    ((uint32_t)0x00000001u)

#define SYSCTL_SDPMST_SPDERR_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_SPDERR_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_SPDERR_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_FPDERR_MASK     ((uint32_t)0x00000002u)
#define SYSCTL_SDPMST_R_FPDERR_BIT      (1u)
#define SYSCTL_SDPMST_R_FPDERR_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_FPDERR_ERROR    ((uint32_t)0x00000002u)

#define SYSCTL_SDPMST_FPDERR_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_FPDERR_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_FPDERR_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_SRDERR_MASK     ((uint32_t)0x00000004u)
#define SYSCTL_SDPMST_R_SRDERR_BIT      (2u)
#define SYSCTL_SDPMST_R_SRDERR_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_SRDERR_ERROR    ((uint32_t)0x00000004u)

#define SYSCTL_SDPMST_SRDERR_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_SRDERR_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_SRDERR_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LDMINERR_MASK     ((uint32_t)0x00000008u)
#define SYSCTL_SDPMST_R_LDMINERR_BIT      (3u)
#define SYSCTL_SDPMST_R_LDMINERR_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_LDMINERR_ERROR    ((uint32_t)0x00000008u)

#define SYSCTL_SDPMST_LDMINERR_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_LDMINERR_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_LDMINERR_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LSMINERR_MASK     ((uint32_t)0x00000010u)
#define SYSCTL_SDPMST_R_LSMINERR_BIT      (4u)
#define SYSCTL_SDPMST_R_LSMINERR_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_LSMINERR_ERROR    ((uint32_t)0x00000010u)

#define SYSCTL_SDPMST_LSMINERR_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_LSMINERR_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_LSMINERR_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LMAXERR_MASK     ((uint32_t)0x00000040u)
#define SYSCTL_SDPMST_R_LMAXERR_BIT      (6u)
#define SYSCTL_SDPMST_R_LMAXERR_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_LMAXERR_ERROR    ((uint32_t)0x00000040u)

#define SYSCTL_SDPMST_LMAXERR_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_LMAXERR_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_LMAXERR_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_SRDW_MASK     ((uint32_t)0x00000080u)
#define SYSCTL_SDPMST_R_SRDW_BIT      (7u)
#define SYSCTL_SDPMST_R_SRDW_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_SRDW_ERROR    ((uint32_t)0x00000080u)

#define SYSCTL_SDPMST_SRDW_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_SRDW_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_SRDW_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_PRACT_MASK     ((uint32_t)0x00010000u)
#define SYSCTL_SDPMST_R_PRACT_BIT      (16u)
#define SYSCTL_SDPMST_R_PRACT_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_PRACT_ERROR    ((uint32_t)0x00010000u)

#define SYSCTL_SDPMST_PRACT_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_PRACT_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_PRACT_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LOWPWR_MASK     ((uint32_t)0x00020000u)
#define SYSCTL_SDPMST_R_LOWPWR_BIT      (17u)
#define SYSCTL_SDPMST_R_LOWPWR_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_LOWPWR_ERROR    ((uint32_t)0x00020000u)

#define SYSCTL_SDPMST_LOWPWR_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_LOWPWR_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_LOWPWR_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_FLASHLP_MASK     ((uint32_t)0x00040000u)
#define SYSCTL_SDPMST_R_FLASHLP_BIT      (18u)
#define SYSCTL_SDPMST_R_FLASHLP_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_FLASHLP_ERROR    ((uint32_t)0x00040000u)

#define SYSCTL_SDPMST_FLASHLP_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_FLASHLP_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_FLASHLP_ERROR      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SDPMST_R_LDOUA_MASK     ((uint32_t)0x00080000u)
#define SYSCTL_SDPMST_R_LDOUA_BIT      (19u)
#define SYSCTL_SDPMST_R_LDOUA_NOERROR  ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_R_LDOUA_ERROR    ((uint32_t)0x00080000u)

#define SYSCTL_SDPMST_LDOUA_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SDPMST_LDOUA_NOERROR    ((uint32_t)0x00000000u)
#define SYSCTL_SDPMST_LDOUA_ERROR      ((uint32_t)0x00000001u)
/*--------*/





#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_STATUS_H_ */
