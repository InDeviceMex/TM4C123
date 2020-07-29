/**
 *
 * @file DMA_RegisterDefines_STAT.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_STAT_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_STAT_H_

#include <stdint.h>

/**************************************************************************************
************************************* 4 DMASTAT *************************************
****************************************************************************************/

/*--------*/
#define DMA_DMASTAT_R_MASTEN_MASK     ((uint32_t)0x00000001u)
#define DMA_DMASTAT_R_MASTEN_BIT      ((uint32_t)0u)
#define DMA_DMASTAT_R_MASTEN_DIS      ((uint32_t)0x00000000u)
#define DMA_DMASTAT_R_MASTEN_EN       ((uint32_t)0x00000001u)

#define DMA_DMASTAT_MASTEN_MASK       ((uint32_t)0x00000001u)
#define DMA_DMASTAT_MASTEN_DIS        ((uint32_t)0x00000000u)
#define DMA_DMASTAT_MASTEN_EN         ((uint32_t)0x00000001u)
/*--------*/


/*--------*/
#define DMA_DMASTAT_R_STATE_MASK       ((uint32_t)0x000000F0u)
#define DMA_DMASTAT_R_STATE_BIT        ((uint32_t)4u)
#define DMA_DMASTAT_R_STATE_IDLE       ((uint32_t)0x00000000u)
#define DMA_DMASTAT_R_STATE_RDCH       ((uint32_t)0x00000010u)
#define DMA_DMASTAT_R_STATE_RDSRCPT    ((uint32_t)0x00000020u)
#define DMA_DMASTAT_R_STATE_RDDSTPT    ((uint32_t)0x00000030u)
#define DMA_DMASTAT_R_STATE_RDSRCDT    ((uint32_t)0x00000040u)
#define DMA_DMASTAT_R_STATE_WRDSTDT    ((uint32_t)0x00000050u)
#define DMA_DMASTAT_R_STATE_WAIT       ((uint32_t)0x00000060u)
#define DMA_DMASTAT_R_STATE_WRCH       ((uint32_t)0x00000070u)
#define DMA_DMASTAT_R_STATE_STALL      ((uint32_t)0x00000080u)
#define DMA_DMASTAT_R_STATE_DONE       ((uint32_t)0x00000090u)


#define DMA_DMASTAT_STATE_MASK       ((uint32_t)0x0000000Fu)
#define DMA_DMASTAT_STATE_IDLE       ((uint32_t)0x00000000u)
#define DMA_DMASTAT_STATE_RDCH       ((uint32_t)0x00000001u)
#define DMA_DMASTAT_STATE_RDSRCPT    ((uint32_t)0x00000002u)
#define DMA_DMASTAT_STATE_RDDSTPT    ((uint32_t)0x00000003u)
#define DMA_DMASTAT_STATE_RDSRCDT    ((uint32_t)0x00000004u)
#define DMA_DMASTAT_STATE_WRDSTDT    ((uint32_t)0x00000005u)
#define DMA_DMASTAT_STATE_WAIT       ((uint32_t)0x00000006u)
#define DMA_DMASTAT_STATE_WRCH       ((uint32_t)0x00000007u)
#define DMA_DMASTAT_STATE_STALL      ((uint32_t)0x00000008u)
#define DMA_DMASTAT_STATE_DONE       ((uint32_t)0x00000009u)
/*--------*/

/*--------*/
#define DMA_DMASTAT_R_DMACHANS_MASK     ((uint32_t)0x001F0000u)
#define DMA_DMASTAT_R_DMACHANS_BIT      ((uint32_t)16u)

#define DMA_DMASTAT_DMACHANS_MASK       ((uint32_t)0x0000001Fu)
/*--------*/




#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_STAT_H_ */
