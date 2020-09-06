/**
 *
 * @file DMA_RegisterDefinesChannel.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINESCHANNEL_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINESCHANNEL_H_

#include <xUtils/Standard/Standard.h>

/********************************************************************************************
************************************** 1 DMASRCENDP **********************************************
********************************************************************************************/

/*--------*/
#define DMACH_DMASRCENDP_R_ADDR_MASK        ((uint32_t)0xFFFFFFFFu)
#define DMACH_DMASRCENDP_R_ADDR_BIT         ((uint32_t)0u)

#define DMACH_DMASRCENDP_ADDR_MASK          ((uint32_t)0xFFFFFFFFu)
/*--------*/

/*--------*/
#define DMAALTCH_DMASRCENDP_R_ADDR_MASK     ((uint32_t)0xFFFFFFFFu)
#define DMAALTCH_DMASRCENDP_R_ADDR_BIT      ((uint32_t)0u)

#define DMAALTCH_DMASRCENDP_ADDR_MASK       ((uint32_t)0xFFFFFFFFu)
/*--------*/

/********************************************************************************************
************************************** 2 DMADSTENDP **********************************************
********************************************************************************************/

/*--------*/
#define DMACH_DMADSTENDP_R_ADDR_MASK        ((uint32_t)0xFFFFFFFFu)
#define DMACH_DMADSTENDP_R_ADDR_BIT         ((uint32_t)0u)

#define DMACH_DMADSTENDP_ADDR_MASK          ((uint32_t)0xFFFFFFFFu)
/*--------*/

/*--------*/
#define DMAALTCH_DMADSTENDP_R_ADDR_MASK     ((uint32_t)0xFFFFFFFFu)
#define DMAALTCH_DMADSTENDP_R_ADDR_BIT      ((uint32_t)0u)

#define DMAALTCH_DMADSTENDP_ADDR_MASK       ((uint32_t)0xFFFFFFFFu)
/*--------*/

/********************************************************************************************
************************************** 3 DMACHCTL **********************************************
********************************************************************************************/

/*--------*/
#define DMACH_DMACHCTL_R_XFERMODE_MASK      ((uint32_t)0x00000007u)
#define DMACH_DMACHCTL_R_XFERMODE_BIT       ((uint32_t)0u)
#define DMACH_DMACHCTL_R_XFERMODE_STOP      ((uint32_t)0x00000000u)
#define DMACH_DMACHCTL_R_XFERMODE_BASIC     ((uint32_t)0x00000001u)
#define DMACH_DMACHCTL_R_XFERMODE_AUTO      ((uint32_t)0x00000002u)
#define DMACH_DMACHCTL_R_XFERMODE_PINGPONG  ((uint32_t)0x00000003u)
#define DMACH_DMACHCTL_R_XFERMODE_MSG       ((uint32_t)0x00000004u)
#define DMACH_DMACHCTL_R_XFERMODE_AMSG      ((uint32_t)0x00000005u)
#define DMACH_DMACHCTL_R_XFERMODE_PSG       ((uint32_t)0x00000006u)
#define DMACH_DMACHCTL_R_XFERMODE_APSG      ((uint32_t)0x00000007u)

#define DMACH_DMACHCTL_XFERMODE_MASK        ((uint32_t)0x00000007u)
#define DMACH_DMACHCTL_XFERMODE_STOP        ((uint32_t)0x00000000u)
#define DMACH_DMACHCTL_XFERMODE_BASIC       ((uint32_t)0x00000001u)
#define DMACH_DMACHCTL_XFERMODE_AUTO        ((uint32_t)0x00000002u)
#define DMACH_DMACHCTL_XFERMODE_PINGPONG    ((uint32_t)0x00000003u)
#define DMACH_DMACHCTL_XFERMODE_MSG         ((uint32_t)0x00000004u)
#define DMACH_DMACHCTL_XFERMODE_AMSG        ((uint32_t)0x00000005u)
#define DMACH_DMACHCTL_XFERMODE_PSG         ((uint32_t)0x00000006u)
#define DMACH_DMACHCTL_XFERMODE_APSG        ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define DMACH_DMACHCTL_R_NXTUSEBURST_MASK   ((uint32_t)0x00000008u)
#define DMACH_DMACHCTL_R_NXTUSEBURST_BIT    ((uint32_t)3u)
#define DMACH_DMACHCTL_R_NXTUSEBURST_SINGLE ((uint32_t)0x00000000u)
#define DMACH_DMACHCTL_R_NXTUSEBURST_BURST  ((uint32_t)0x00000008u)

#define DMACH_DMACHCTL_NXTUSEBURST_MASK     ((uint32_t)0x00000001u)
#define DMACH_DMACHCTL_NXTUSEBURST_SINGLE   ((uint32_t)0x00000000u)
#define DMACH_DMACHCTL_NXTUSEBURST_BURST    ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define DMACH_DMACHCTL_R_XFERSIZE_MASK      ((uint32_t)0x00003FF0u)
#define DMACH_DMACHCTL_R_XFERSIZE_BIT       ((uint32_t)4u)

#define DMACH_DMACHCTL_XFERSIZE_MASK        ((uint32_t)0x000003FFu)
/*--------*/

/*--------*/
#define DMACH_DMACHCTL_R_ARBSIZE_MASK       ((uint32_t)0x0003C000u)
#define DMACH_DMACHCTL_R_ARBSIZE_BIT        ((uint32_t)14u)
#define DMACH_DMACHCTL_R_ARBSIZE_1          ((uint32_t)0x00000000u)
#define DMACH_DMACHCTL_R_ARBSIZE_2          ((uint32_t)0x00004000u)
#define DMACH_DMACHCTL_R_ARBSIZE_4          ((uint32_t)0x00008000u)
#define DMACH_DMACHCTL_R_ARBSIZE_8          ((uint32_t)0x0000C000u)
#define DMACH_DMACHCTL_R_ARBSIZE_16         ((uint32_t)0x00010000u)
#define DMACH_DMACHCTL_R_ARBSIZE_32         ((uint32_t)0x00014000u)
#define DMACH_DMACHCTL_R_ARBSIZE_64         ((uint32_t)0x00018000u)
#define DMACH_DMACHCTL_R_ARBSIZE_128        ((uint32_t)0x0001C000u)
#define DMACH_DMACHCTL_R_ARBSIZE_256        ((uint32_t)0x00020000u)
#define DMACH_DMACHCTL_R_ARBSIZE_512        ((uint32_t)0x00024000u)
#define DMACH_DMACHCTL_R_ARBSIZE_1024       ((uint32_t)0x00028000u)

#define DMACH_DMACHCTL_ARBSIZE_MASK         ((uint32_t)0x0000000Fu)
#define DMACH_DMACHCTL_ARBSIZE_1            ((uint32_t)0x00000000u)
#define DMACH_DMACHCTL_ARBSIZE_2            ((uint32_t)0x00000001u)
#define DMACH_DMACHCTL_ARBSIZE_4            ((uint32_t)0x00000002u)
#define DMACH_DMACHCTL_ARBSIZE_8            ((uint32_t)0x00000003u)
#define DMACH_DMACHCTL_ARBSIZE_16           ((uint32_t)0x00000004u)
#define DMACH_DMACHCTL_ARBSIZE_32           ((uint32_t)0x00000005u)
#define DMACH_DMACHCTL_ARBSIZE_64           ((uint32_t)0x00000006u)
#define DMACH_DMACHCTL_ARBSIZE_128          ((uint32_t)0x00000007u)
#define DMACH_DMACHCTL_ARBSIZE_256          ((uint32_t)0x00000008u)
#define DMACH_DMACHCTL_ARBSIZE_512          ((uint32_t)0x00000009u)
#define DMACH_DMACHCTL_ARBSIZE_1024         ((uint32_t)0x0000000Au)
/*--------*/

/*--------*/
#define DMACH_DMACHCTL_R_SRCSIZE_MASK       ((uint32_t)0x03000000u)
#define DMACH_DMACHCTL_R_SRCSIZE_BIT        ((uint32_t)24u)
#define DMACH_DMACHCTL_R_SRCSIZE_BYTE       ((uint32_t)0x00000000u)
#define DMACH_DMACHCTL_R_SRCSIZE_HWORD      ((uint32_t)0x01000000u)
#define DMACH_DMACHCTL_R_SRCSIZE_WORD       ((uint32_t)0x02000000u)

#define DMACH_DMACHCTL_SRCSIZE_MASK         ((uint32_t)0x00000003u)
#define DMACH_DMACHCTL_SRCSIZE_BYTE         ((uint32_t)0x00000000u)
#define DMACH_DMACHCTL_SRCSIZE_HWORD        ((uint32_t)0x00000001u)
#define DMACH_DMACHCTL_SRCSIZE_WORD         ((uint32_t)0x00000002u)
/*--------*/

/*--------*/
#define DMACH_DMACHCTL_R_SRCINC_MASK        ((uint32_t)0x0C000000u)
#define DMACH_DMACHCTL_R_SRCINC_BIT         ((uint32_t)26u)
#define DMACH_DMACHCTL_R_SRCINC_BYTE        ((uint32_t)0x00000000u)
#define DMACH_DMACHCTL_R_SRCINC_HWORD       ((uint32_t)0x04000000u)
#define DMACH_DMACHCTL_R_SRCINC_WORD        ((uint32_t)0x08000000u)
#define DMACH_DMACHCTL_R_SRCINC_NOINC       ((uint32_t)0x0C000000u)

#define DMACH_DMACHCTL_SRCINC_MASK          ((uint32_t)0x00000003u)
#define DMACH_DMACHCTL_SRCINC_BYTE          ((uint32_t)0x00000000u)
#define DMACH_DMACHCTL_SRCINC_HWORD         ((uint32_t)0x00000001u)
#define DMACH_DMACHCTL_SRCINC_WORD          ((uint32_t)0x00000002u)
#define DMACH_DMACHCTL_SRCINC_NOINC         ((uint32_t)0x00000003u)
/*--------*/

/*--------*/
#define DMACH_DMACHCTL_R_DSTSIZE_MASK       ((uint32_t)0x30000000u)
#define DMACH_DMACHCTL_R_DSTSIZE_BIT        ((uint32_t)28u)
#define DMACH_DMACHCTL_R_DSTSIZE_BYTE       ((uint32_t)0x00000000u)
#define DMACH_DMACHCTL_R_DSTSIZE_HWORD      ((uint32_t)0x10000000u)
#define DMACH_DMACHCTL_R_DSTSIZE_WORD       ((uint32_t)0x20000000u)

#define DMACH_DMACHCTL_DSTSIZE_MASK         ((uint32_t)0x00000003u)
#define DMACH_DMACHCTL_DSTSIZE_BYTE         ((uint32_t)0x00000000u)
#define DMACH_DMACHCTL_DSTSIZE_HWORD        ((uint32_t)0x00000001u)
#define DMACH_DMACHCTL_DSTSIZE_WORD         ((uint32_t)0x00000002u)
/*--------*/

/*--------*/
#define DMACH_DMACHCTL_R_DSTINC_MASK        ((uint32_t)0xC0000000u)
#define DMACH_DMACHCTL_R_DSTINC_BIT         ((uint32_t)30u)
#define DMACH_DMACHCTL_R_DSTINC_BYTE        ((uint32_t)0x00000000u)
#define DMACH_DMACHCTL_R_DSTINC_HWORD       ((uint32_t)0x40000000u)
#define DMACH_DMACHCTL_R_DSTINC_WORD        ((uint32_t)0x80000000u)
#define DMACH_DMACHCTL_R_DSTINC_NOINC       ((uint32_t)0xC0000000u)

#define DMACH_DMACHCTL_DSTINC_MASK          ((uint32_t)0x00000003u)
#define DMACH_DMACHCTL_DSTINC_BYTE          ((uint32_t)0x00000000u)
#define DMACH_DMACHCTL_DSTINC_HWORD         ((uint32_t)0x00000001u)
#define DMACH_DMACHCTL_DSTINC_WORD          ((uint32_t)0x00000002u)
#define DMACH_DMACHCTL_DSTINC_NOINC         ((uint32_t)0x00000003u)
/*--------*/

/*--------*/
#define DMAALTCH_DMACHCTL_R_XFERMODE_MASK   ((uint32_t)0x00000007u)
#define DMAALTCH_DMACHCTL_R_XFERMODE_BIT    ((uint32_t)0u)
#define DMAALTCH_DMACHCTL_R_XFERMODE_STOP   ((uint32_t)0x00000000u)
#define DMAALTCH_DMACHCTL_R_XFERMODE_BASIC  ((uint32_t)0x00000001u)
#define DMAALTCH_DMACHCTL_R_XFERMODE_AUTO   ((uint32_t)0x00000002u)
#define DMAALTCH_DMACHCTL_R_XFERMODE_PINGPONG   ((uint32_t)0x00000003u)
#define DMAALTCH_DMACHCTL_R_XFERMODE_MSG    ((uint32_t)0x00000004u)
#define DMAALTCH_DMACHCTL_R_XFERMODE_AMSG   ((uint32_t)0x00000005u)
#define DMAALTCH_DMACHCTL_R_XFERMODE_PSG    ((uint32_t)0x00000006u)
#define DMAALTCH_DMACHCTL_R_XFERMODE_APSG   ((uint32_t)0x00000007u)

#define DMAALTCH_DMACHCTL_XFERMODE_MASK     ((uint32_t)0x00000007u)
#define DMAALTCH_DMACHCTL_XFERMODE_STOP     ((uint32_t)0x00000000u)
#define DMAALTCH_DMACHCTL_XFERMODE_BASIC    ((uint32_t)0x00000001u)
#define DMAALTCH_DMACHCTL_XFERMODE_AUTO     ((uint32_t)0x00000002u)
#define DMAALTCH_DMACHCTL_XFERMODE_PINGPONG ((uint32_t)0x00000003u)
#define DMAALTCH_DMACHCTL_XFERMODE_MSG      ((uint32_t)0x00000004u)
#define DMAALTCH_DMACHCTL_XFERMODE_AMSG     ((uint32_t)0x00000005u)
#define DMAALTCH_DMACHCTL_XFERMODE_PSG      ((uint32_t)0x00000006u)
#define DMAALTCH_DMACHCTL_XFERMODE_APSG     ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define DMAALTCH_DMACHCTL_R_NXTUSEBURST_MASK    ((uint32_t)0x00000008u)
#define DMAALTCH_DMACHCTL_R_NXTUSEBURST_BIT     ((uint32_t)3u)
#define DMAALTCH_DMACHCTL_R_NXTUSEBURST_SINGLE  ((uint32_t)0x00000000u)
#define DMAALTCH_DMACHCTL_R_NXTUSEBURST_BURST   ((uint32_t)0x00000008u)

#define DMAALTCH_DMACHCTL_NXTUSEBURST_MASK      ((uint32_t)0x00000001u)
#define DMAALTCH_DMACHCTL_NXTUSEBURST_SINGLE    ((uint32_t)0x00000000u)
#define DMAALTCH_DMACHCTL_NXTUSEBURST_BURST     ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define DMAALTCH_DMACHCTL_R_XFERSIZE_MASK       ((uint32_t)0x00003FF0u)
#define DMAALTCH_DMACHCTL_R_XFERSIZE_BIT        ((uint32_t)4u)

#define DMAALTCH_DMACHCTL_XFERSIZE_MASK         ((uint32_t)0x000003FFu)
/*--------*/

/*--------*/
#define DMAALTCH_DMACHCTL_R_ARBSIZE_MASK        ((uint32_t)0x0003C000u)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_BIT         ((uint32_t)14u)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_1           ((uint32_t)0x00000000u)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_2           ((uint32_t)0x00004000u)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_4           ((uint32_t)0x00008000u)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_8           ((uint32_t)0x0000C000u)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_16          ((uint32_t)0x00010000u)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_32          ((uint32_t)0x00014000u)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_64          ((uint32_t)0x00018000u)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_128         ((uint32_t)0x0001C000u)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_256         ((uint32_t)0x00020000u)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_512         ((uint32_t)0x00024000u)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_1024        ((uint32_t)0x00028000u)

#define DMAALTCH_DMACHCTL_ARBSIZE_MASK          ((uint32_t)0x0000000Fu)
#define DMAALTCH_DMACHCTL_ARBSIZE_1             ((uint32_t)0x00000000u)
#define DMAALTCH_DMACHCTL_ARBSIZE_2             ((uint32_t)0x00000001u)
#define DMAALTCH_DMACHCTL_ARBSIZE_4             ((uint32_t)0x00000002u)
#define DMAALTCH_DMACHCTL_ARBSIZE_8             ((uint32_t)0x00000003u)
#define DMAALTCH_DMACHCTL_ARBSIZE_16            ((uint32_t)0x00000004u)
#define DMAALTCH_DMACHCTL_ARBSIZE_32            ((uint32_t)0x00000005u)
#define DMAALTCH_DMACHCTL_ARBSIZE_64            ((uint32_t)0x00000006u)
#define DMAALTCH_DMACHCTL_ARBSIZE_128           ((uint32_t)0x00000007u)
#define DMAALTCH_DMACHCTL_ARBSIZE_256           ((uint32_t)0x00000008u)
#define DMAALTCH_DMACHCTL_ARBSIZE_512           ((uint32_t)0x00000009u)
#define DMAALTCH_DMACHCTL_ARBSIZE_1024          ((uint32_t)0x0000000Au)
/*--------*/

/*--------*/
#define DMAALTCH_DMACHCTL_R_SRCSIZE_MASK        ((uint32_t)0x03000000u)
#define DMAALTCH_DMACHCTL_R_SRCSIZE_BIT         ((uint32_t)24u)
#define DMAALTCH_DMACHCTL_R_SRCSIZE_BYTE        ((uint32_t)0x00000000u)
#define DMAALTCH_DMACHCTL_R_SRCSIZE_HWORD       ((uint32_t)0x01000000u)
#define DMAALTCH_DMACHCTL_R_SRCSIZE_WORD        ((uint32_t)0x02000000u)

#define DMAALTCH_DMACHCTL_SRCSIZE_MASK          ((uint32_t)0x00000003u)
#define DMAALTCH_DMACHCTL_SRCSIZE_BYTE          ((uint32_t)0x00000000u)
#define DMAALTCH_DMACHCTL_SRCSIZE_HWORD         ((uint32_t)0x00000001u)
#define DMAALTCH_DMACHCTL_SRCSIZE_WORD          ((uint32_t)0x00000002u)
/*--------*/

/*--------*/
#define DMAALTCH_DMACHCTL_R_SRCINC_MASK         ((uint32_t)0x0C000000u)
#define DMAALTCH_DMACHCTL_R_SRCINC_BIT          ((uint32_t)26u)
#define DMAALTCH_DMACHCTL_R_SRCINC_BYTE         ((uint32_t)0x00000000u)
#define DMAALTCH_DMACHCTL_R_SRCINC_HWORD        ((uint32_t)0x04000000u)
#define DMAALTCH_DMACHCTL_R_SRCINC_WORD         ((uint32_t)0x08000000u)
#define DMAALTCH_DMACHCTL_R_SRCINC_NOINC        ((uint32_t)0x0C000000u)

#define DMAALTCH_DMACHCTL_SRCINC_MASK           ((uint32_t)0x00000003u)
#define DMAALTCH_DMACHCTL_SRCINC_BYTE           ((uint32_t)0x00000000u)
#define DMAALTCH_DMACHCTL_SRCINC_HWORD          ((uint32_t)0x00000001u)
#define DMAALTCH_DMACHCTL_SRCINC_WORD           ((uint32_t)0x00000002u)
#define DMAALTCH_DMACHCTL_SRCINC_NOINC          ((uint32_t)0x00000003u)
/*--------*/

/*--------*/
#define DMAALTCH_DMACHCTL_R_DSTSIZE_MASK        ((uint32_t)0x30000000u)
#define DMAALTCH_DMACHCTL_R_DSTSIZE_BIT         ((uint32_t)28u)
#define DMAALTCH_DMACHCTL_R_DSTSIZE_BYTE        ((uint32_t)0x00000000u)
#define DMAALTCH_DMACHCTL_R_DSTSIZE_HWORD       ((uint32_t)0x10000000u)
#define DMAALTCH_DMACHCTL_R_DSTSIZE_WORD        ((uint32_t)0x20000000u)

#define DMAALTCH_DMACHCTL_DSTSIZE_MASK          ((uint32_t)0x00000003u)
#define DMAALTCH_DMACHCTL_DSTSIZE_BYTE          ((uint32_t)0x00000000u)
#define DMAALTCH_DMACHCTL_DSTSIZE_HWORD         ((uint32_t)0x00000001u)
#define DMAALTCH_DMACHCTL_DSTSIZE_WORD          ((uint32_t)0x00000002u)
/*--------*/


/*--------*/
#define DMAALTCH_DMACHCTL_R_DSTINC_MASK         ((uint32_t)0xC0000000u)
#define DMAALTCH_DMACHCTL_R_DSTINC_BIT          ((uint32_t)30u)
#define DMAALTCH_DMACHCTL_R_DSTINC_BYTE         ((uint32_t)0x00000000u)
#define DMAALTCH_DMACHCTL_R_DSTINC_HWORD        ((uint32_t)0x40000000u)
#define DMAALTCH_DMACHCTL_R_DSTINC_WORD         ((uint32_t)0x80000000u)
#define DMAALTCH_DMACHCTL_R_DSTINC_NOINC        ((uint32_t)0xC0000000u)

#define DMAALTCH_DMACHCTL_DSTINC_MASK           ((uint32_t)0x00000003u)
#define DMAALTCH_DMACHCTL_DSTINC_BYTE           ((uint32_t)0x00000000u)
#define DMAALTCH_DMACHCTL_DSTINC_HWORD          ((uint32_t)0x00000001u)
#define DMAALTCH_DMACHCTL_DSTINC_WORD           ((uint32_t)0x00000002u)
#define DMAALTCH_DMACHCTL_DSTINC_NOINC          ((uint32_t)0x00000003u)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINESCHANNEL_H_ */
