/**
 *
 * @file DMA_RegisterDefines_ERRCLR.h
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
 * @verbatim 28 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_ERRCLR_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_ERRCLR_H_

#include <xUtils/Standard/Standard.h>

/**************************************************************************************
************************************* 20 DMAERRCLR *************************************
****************************************************************************************/

/*--------*/
#define DMA_DMAERRCLR_R_ERRCLR_MASK      ((uint32_t)0x00000001U)
#define DMA_DMAERRCLR_R_ERRCLR_BIT       ((uint32_t)0U)
#define DMA_DMAERRCLR_R_ERRCLR_NOERROR   ((uint32_t)0x00000000U)
#define DMA_DMAERRCLR_R_ERRCLR_ERROR     ((uint32_t)0x00000001U)

#define DMA_DMAERRCLR_ERRCLR_MASK        ((uint32_t)0x00000001U)
#define DMA_DMAERRCLR_ERRCLR_NOERROR     ((uint32_t)0x00000000U)
#define DMA_DMAERRCLR_ERRCLR_ERROR       ((uint32_t)0x00000001U)
/*--------*/




#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_ERRCLR_H_ */
