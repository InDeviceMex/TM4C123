/**
 *
 * @file SSI_RegisterDefines_SSICR1.h
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
 * @verbatim 16 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSICR1_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSICR1_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 2 SSICR1 *********************************************
******************************************************************************************/

/*--------*/
#define SSI_SSICR1_R_LBM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSICR1_R_LBM_BIT    ((uint32_t) 0UL)
#define SSI_SSICR1_R_LBM_NORMAL    ((uint32_t) 0x00000000UL)
#define SSI_SSICR1_R_LBM_LOOPBACK    ((uint32_t) 0x00000001UL)

#define SSI_SSICR1_LBM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSICR1_LBM_NORMAL    ((uint32_t) 0x00000000UL)
#define SSI_SSICR1_LBM_LOOPBACK    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SSICR1_R_SSE_MASK    ((uint32_t) 0x00000002UL)
#define SSI_SSICR1_R_SSE_BIT    ((uint32_t) 1UL)
#define SSI_SSICR1_R_SSE_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SSICR1_R_SSE_ENA    ((uint32_t) 0x00000002UL)

#define SSI_SSICR1_SSE_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSICR1_SSE_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SSICR1_SSE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SSICR1_R_MS_MASK    ((uint32_t) 0x00000004UL)
#define SSI_SSICR1_R_MS_BIT    ((uint32_t) 2UL)
#define SSI_SSICR1_R_MS_MASTER    ((uint32_t) 0x00000000UL)
#define SSI_SSICR1_R_MS_SLAVE    ((uint32_t) 0x00000004UL)

#define SSI_SSICR1_MS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSICR1_MS_MASTER    ((uint32_t) 0x00000000UL)
#define SSI_SSICR1_MS_SLAVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SSICR1_R_EOT_MASK    ((uint32_t) 0x00000010UL)
#define SSI_SSICR1_R_EOT_BIT    ((uint32_t) 4UL)
#define SSI_SSICR1_R_EOT_FIFO    ((uint32_t) 0x00000000UL)
#define SSI_SSICR1_R_EOT_ALL    ((uint32_t) 0x00000010UL)

#define SSI_SSICR1_EOT_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSICR1_EOT_FIFO    ((uint32_t) 0x00000000UL)
#define SSI_SSICR1_EOT_ALL    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSICR1_H_ */
