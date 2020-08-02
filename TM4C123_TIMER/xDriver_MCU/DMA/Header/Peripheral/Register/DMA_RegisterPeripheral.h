/**
 *
 * @file DMA_RegisterPeripheral.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/DMA/Header/Peripheral/Register/DMA_RegisterAddress.h>
#include <xDriver_MCU/DMA/Header/Peripheral/Struct/DMA_StructPeripheral.h>

#define DMA             (((DMA_TypeDef*)(DMA_BASE)))

/********************************************************************************************
************************************** 4 DMASTAT **********************************************
********************************************************************************************/
#define DMA_DMASTAT            (((DMASTAT_TypeDef*)(DMA_BASE+DMA_DMASTAT_OFFSET )))
#define DMA_DMASTAT_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMASTAT_OFFSET)))

/********************************************************************************************
************************************** 5 DMACFG **********************************************
********************************************************************************************/
#define DMA_DMACFG            (((DMACFG_TypeDef*)(DMA_BASE+DMA_DMACFG_OFFSET )))
#define DMA_DMACFG_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACFG_OFFSET)))

/********************************************************************************************
************************************** 6 DMACTLBASE **********************************************
********************************************************************************************/
#define DMA_DMACTLBASE            (((DMACTLBASE_TypeDef*)(DMA_BASE+DMA_DMACTLBASE_OFFSET )))
#define DMA_DMACTLBASE_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACTLBASE_OFFSET)))

/********************************************************************************************
************************************** 7 DMAALTBASE **********************************************
********************************************************************************************/
#define DMA_DMAALTBASE            (((DMAALTBASE_TypeDef*)(DMA_BASE+DMA_DMAALTBASE_OFFSET )))
#define DMA_DMAALTBASE_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAALTBASE_OFFSET)))

/********************************************************************************************
************************************** 8 DMAWAITSTAT **********************************************
********************************************************************************************/
#define DMA_DMAWAITSTAT            (((DMAWAITSTAT_TypeDef*)(DMA_BASE+DMA_DMAWAITSTAT_OFFSET )))
#define DMA_DMAWAITSTAT_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAWAITSTAT_OFFSET)))

/********************************************************************************************
************************************** 9 DMASWREQ **********************************************
********************************************************************************************/
#define DMA_DMASWREQ            (((DMASWREQ_TypeDef*)(DMA_BASE+DMA_DMASWREQ_OFFSET )))
#define DMA_DMASWREQ_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMASWREQ_OFFSET)))

/********************************************************************************************
************************************** 10 DMAUSEBURSTSET **********************************************
********************************************************************************************/
#define DMA_DMAUSEBURSTSET            (((DMASET_TypeDef*)(DMA_BASE+DMA_DMAUSEBURSTSET_OFFSET )))
#define DMA_DMAUSEBURSTSET_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAUSEBURSTSET_OFFSET)))

/********************************************************************************************
************************************** 11 DMAUSEBURSTCLR **********************************************
********************************************************************************************/
#define DMA_DMAUSEBURSTCLR            (((DMACLR_TypeDef*)(DMA_BASE+DMA_DMAUSEBURSTCLR_OFFSET )))
#define DMA_DMAUSEBURSTCLR_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAUSEBURSTCLR_OFFSET)))

/********************************************************************************************
************************************** 12 DMAREQMASKSET **********************************************
********************************************************************************************/
#define DMA_DMAREQMASKSET            (((DMASET_TypeDef*)(DMA_BASE+DMA_DMAREQMASKSET_OFFSET )))
#define DMA_DMAREQMASKSET_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAREQMASKSET_OFFSET)))

/********************************************************************************************
************************************** 13 DMAREQMASKCLR **********************************************
********************************************************************************************/
#define DMA_DMAREQMASKCLR            (((DMACLR_TypeDef*)(DMA_BASE+DMA_DMAREQMASKCLR_OFFSET )))
#define DMA_DMAREQMASKCLR_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAREQMASKCLR_OFFSET)))

/********************************************************************************************
************************************** 14 DMAENASET **********************************************
********************************************************************************************/
#define DMA_DMAENASET            (((DMASET_TypeDef*)(DMA_BASE+DMA_DMAENASET_OFFSET )))
#define DMA_DMAENASET_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAENASET_OFFSET)))

/********************************************************************************************
************************************** 15 DMAENACLR **********************************************
********************************************************************************************/
#define DMA_DMAENACLR            (((DMACLR_TypeDef*)(DMA_BASE+DMA_DMAENACLR_OFFSET )))
#define DMA_DMAENACLR_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAENACLR_OFFSET)))

/********************************************************************************************
************************************** 16 DMAALTSET **********************************************
********************************************************************************************/
#define DMA_DMAALTSET            (((DMASET_TypeDef*)(DMA_BASE+DMA_DMAALTSET_OFFSET )))
#define DMA_DMAALTSET_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAALTSET_OFFSET)))

/********************************************************************************************
************************************** 17 DMAALTCLR **********************************************
********************************************************************************************/
#define DMA_DMAALTCLR            (((DMACLR_TypeDef*)(DMA_BASE+DMA_DMAALTCLR_OFFSET )))
#define DMA_DMAALTCLR_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAALTCLR_OFFSET)))

/********************************************************************************************
************************************* 18 DMAPRIOSET **********************************************
********************************************************************************************/
#define DMA_DMAPRIOSET            (((DMASET_TypeDef*)(DMA_BASE+DMA_DMAPRIOSET_OFFSET )))
#define DMA_DMAPRIOSET_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAPRIOSET_OFFSET)))

/********************************************************************************************
************************************** 19 DMAPRIOCLR **********************************************
********************************************************************************************/
#define DMA_DMAPRIOCLR            (((DMACLR_TypeDef*)(DMA_BASE+DMA_DMAPRIOCLR_OFFSET )))
#define DMA_DMAPRIOCLR_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAPRIOCLR_OFFSET)))

/********************************************************************************************
************************************** 20 DMAERRCLR **********************************************
********************************************************************************************/
#define DMA_DMAERRCLR            (((DMAERRCLR_TypeDef*)(DMA_BASE+DMA_DMAERRCLR_OFFSET )))
#define DMA_DMAERRCLR_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMAERRCLR_OFFSET)))

/********************************************************************************************
************************************** 21 DMACHASGN **********************************************
********************************************************************************************/
#define DMA_DMACHASGN            (((DMACHASGN_TypeDef*)(DMA_BASE+DMA_DMACHASGN_OFFSET )))
#define DMA_DMACHASGN_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACHASGN_OFFSET)))

/********************************************************************************************
************************************** 22 DMACHIS **********************************************
********************************************************************************************/
#define DMA_DMACHIS            (((DMACHIS_TypeDef*)(DMA_BASE+DMA_DMACHIS_OFFSET )))
#define DMA_DMACHIS_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACHIS_OFFSET)))

/********************************************************************************************
************************************** 23 DMACHMAP0 **********************************************
********************************************************************************************/
#define DMA_DMACHMAP0            (((DMACHMAP0_TypeDef*)(DMA_BASE+DMA_DMACHMAP0_OFFSET )))
#define DMA_DMACHMAP0_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACHMAP0_OFFSET)))

/********************************************************************************************
************************************** 24 DMACHMAP1 **********************************************
********************************************************************************************/
#define DMA_DMACHMAP1            (((DMACHMAP1_TypeDef*)(DMA_BASE+DMA_DMACHMAP1_OFFSET )))
#define DMA_DMACHMAP1_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACHMAP1_OFFSET)))

/********************************************************************************************
************************************** 25 DMACHMAP2 **********************************************
********************************************************************************************/
#define DMA_DMACHMAP2            (((DMACHMAP2_TypeDef*)(DMA_BASE+DMA_DMACHMAP2_OFFSET )))
#define DMA_DMACHMAP2_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACHMAP2_OFFSET)))

/********************************************************************************************
************************************** 26 DMACHMAP3 *********************************************
********************************************************************************************/
#define DMA_DMACHMAP3            (((DMACHMAP3_TypeDef*)(DMA_BASE+DMA_DMACHMAP3_OFFSET )))
#define DMA_DMACHMAP3_R          (*((volatile uint32_t *)(DMA_BASE+DMA_DMACHMAP3_OFFSET)))

/********************************************************************************************
************************************** 27 DMAPeriphID0 **********************************************
********************************************************************************************/
#define DMA_DMAPeriphID0            (((DMAPeriphID0_TypeDef*)(DMA_BASE+DMA_DMAPeriphID0_OFFSET )))
#define DMA_DMAPeriphID0_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPeriphID0_OFFSET)))

/********************************************************************************************
************************************** 28 DMAPeriphID1 **********************************************
********************************************************************************************/
#define DMA_DMAPeriphID1            (((DMAPeriphID1_TypeDef*)(DMA_BASE+DMA_DMAPeriphID1_OFFSET )))
#define DMA_DMAPeriphID1_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPeriphID1_OFFSET)))

/********************************************************************************************
************************************** 29 DMAPeriphID2 **********************************************
********************************************************************************************/
#define DMA_DMAPeriphID2            (((DMAPeriphID2_TypeDef*)(DMA_BASE+DMA_DMAPeriphID2_OFFSET )))
#define DMA_DMAPeriphID2_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPeriphID2_OFFSET)))

/********************************************************************************************
************************************** 30 DMAPeriphID3 **********************************************
********************************************************************************************/
#define DMA_DMAPeriphID3            (((DMAPeriphID3_TypeDef*)(DMA_BASE+DMA_DMAPeriphID3_OFFSET )))
#define DMA_DMAPeriphID3_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPeriphID3_OFFSET)))

/********************************************************************************************
************************************** 31 DMAPeriphID4 **********************************************
********************************************************************************************/
#define DMA_DMAPeriphID4            (((DMAPeriphID4_TypeDef*)(DMA_BASE+DMA_DMAPeriphID4_OFFSET )))
#define DMA_DMAPeriphID4_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPeriphID4_OFFSET)))

/********************************************************************************************
************************************** 32 DMAPCellID0 **********************************************
********************************************************************************************/
#define DMA_DMAPCellID0            (((DMAPCellID0_TypeDef*)(DMA_BASE+DMA_DMAPCellID0_OFFSET )))
#define DMA_DMAPCellID0_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPCellID0_OFFSET)))

/********************************************************************************************
************************************** 33 DMAPCellID1 **********************************************
********************************************************************************************/
#define DMA_DMAPCellID1            (((DMAPCellID1_TypeDef*)(DMA_BASE+DMA_DMAPCellID1_OFFSET )))
#define DMA_DMAPCellID1_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPCellID1_OFFSET)))

/********************************************************************************************
************************************** 34 DMAPCellID2 **********************************************
********************************************************************************************/
#define DMA_DMAPCellID2            (((DMAPCellID2_TypeDef*)(DMA_BASE+DMA_DMAPCellID2_OFFSET )))
#define DMA_DMAPCellID2_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPCellID2_OFFSET)))

/********************************************************************************************
************************************** 35 DMAPCellID3 **********************************************
********************************************************************************************/
#define DMA_DMAPCellID3            (((DMAPCellID3_TypeDef*)(DMA_BASE+DMA_DMAPCellID3_OFFSET )))
#define DMA_DMAPCellID3_R          (*((volatile const uint32_t *)(DMA_BASE+DMA_DMAPCellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERPERIPHERAL_H_ */
