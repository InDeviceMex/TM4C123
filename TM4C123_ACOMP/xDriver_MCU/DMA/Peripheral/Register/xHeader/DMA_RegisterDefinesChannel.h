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
#define DMACH_DMASRCENDP_R_ADDR_MASK        ((uint32_t)0xFFFFFFFFU)
#define DMACH_DMASRCENDP_R_ADDR_BIT         ((uint32_t)0U)

#define DMACH_DMASRCENDP_ADDR_MASK          ((uint32_t)0xFFFFFFFFU)
/*--------*/

/*--------*/
#define DMAALTCH_DMASRCENDP_R_ADDR_MASK     ((uint32_t)0xFFFFFFFFU)
#define DMAALTCH_DMASRCENDP_R_ADDR_BIT      ((uint32_t)0U)

#define DMAALTCH_DMASRCENDP_ADDR_MASK       ((uint32_t)0xFFFFFFFFU)
/*--------*/

/********************************************************************************************
************************************** 2 DMADSTENDP **********************************************
********************************************************************************************/

/*--------*/
#define DMACH_DMADSTENDP_R_ADDR_MASK        ((uint32_t)0xFFFFFFFFU)
#define DMACH_DMADSTENDP_R_ADDR_BIT         ((uint32_t)0U)

#define DMACH_DMADSTENDP_ADDR_MASK          ((uint32_t)0xFFFFFFFFU)
/*--------*/

/*--------*/
#define DMAALTCH_DMADSTENDP_R_ADDR_MASK     ((uint32_t)0xFFFFFFFFU)
#define DMAALTCH_DMADSTENDP_R_ADDR_BIT      ((uint32_t)0U)

#define DMAALTCH_DMADSTENDP_ADDR_MASK       ((uint32_t)0xFFFFFFFFU)
/*--------*/

/********************************************************************************************
************************************** 3 DMACHCTL **********************************************
********************************************************************************************/

/*--------*/
#define DMACH_DMACHCTL_R_XFERMODE_MASK      ((uint32_t)0x00000007U)
#define DMACH_DMACHCTL_R_XFERMODE_BIT       ((uint32_t)0U)
#define DMACH_DMACHCTL_R_XFERMODE_STOP      ((uint32_t)0x00000000U)
#define DMACH_DMACHCTL_R_XFERMODE_BASIC     ((uint32_t)0x00000001U)
#define DMACH_DMACHCTL_R_XFERMODE_AUTO      ((uint32_t)0x00000002U)
#define DMACH_DMACHCTL_R_XFERMODE_PINGPONG  ((uint32_t)0x00000003U)
#define DMACH_DMACHCTL_R_XFERMODE_MSG       ((uint32_t)0x00000004U)
#define DMACH_DMACHCTL_R_XFERMODE_AMSG      ((uint32_t)0x00000005U)
#define DMACH_DMACHCTL_R_XFERMODE_PSG       ((uint32_t)0x00000006U)
#define DMACH_DMACHCTL_R_XFERMODE_APSG      ((uint32_t)0x00000007U)

#define DMACH_DMACHCTL_XFERMODE_MASK        ((uint32_t)0x00000007U)
#define DMACH_DMACHCTL_XFERMODE_STOP        ((uint32_t)0x00000000U)
#define DMACH_DMACHCTL_XFERMODE_BASIC       ((uint32_t)0x00000001U)
#define DMACH_DMACHCTL_XFERMODE_AUTO        ((uint32_t)0x00000002U)
#define DMACH_DMACHCTL_XFERMODE_PINGPONG    ((uint32_t)0x00000003U)
#define DMACH_DMACHCTL_XFERMODE_MSG         ((uint32_t)0x00000004U)
#define DMACH_DMACHCTL_XFERMODE_AMSG        ((uint32_t)0x00000005U)
#define DMACH_DMACHCTL_XFERMODE_PSG         ((uint32_t)0x00000006U)
#define DMACH_DMACHCTL_XFERMODE_APSG        ((uint32_t)0x00000007U)
/*--------*/

/*--------*/
#define DMACH_DMACHCTL_R_NXTUSEBURST_MASK   ((uint32_t)0x00000008U)
#define DMACH_DMACHCTL_R_NXTUSEBURST_BIT    ((uint32_t)3U)
#define DMACH_DMACHCTL_R_NXTUSEBURST_SINGLE ((uint32_t)0x00000000U)
#define DMACH_DMACHCTL_R_NXTUSEBURST_BURST  ((uint32_t)0x00000008U)

#define DMACH_DMACHCTL_NXTUSEBURST_MASK     ((uint32_t)0x00000001U)
#define DMACH_DMACHCTL_NXTUSEBURST_SINGLE   ((uint32_t)0x00000000U)
#define DMACH_DMACHCTL_NXTUSEBURST_BURST    ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define DMACH_DMACHCTL_R_XFERSIZE_MASK      ((uint32_t)0x00003FF0U)
#define DMACH_DMACHCTL_R_XFERSIZE_BIT       ((uint32_t)4U)

#define DMACH_DMACHCTL_XFERSIZE_MASK        ((uint32_t)0x000003FFU)
/*--------*/

/*--------*/
#define DMACH_DMACHCTL_R_ARBSIZE_MASK       ((uint32_t)0x0003C000U)
#define DMACH_DMACHCTL_R_ARBSIZE_BIT        ((uint32_t)14U)
#define DMACH_DMACHCTL_R_ARBSIZE_1          ((uint32_t)0x00000000U)
#define DMACH_DMACHCTL_R_ARBSIZE_2          ((uint32_t)0x00004000U)
#define DMACH_DMACHCTL_R_ARBSIZE_4          ((uint32_t)0x00008000U)
#define DMACH_DMACHCTL_R_ARBSIZE_8          ((uint32_t)0x0000C000U)
#define DMACH_DMACHCTL_R_ARBSIZE_16         ((uint32_t)0x00010000U)
#define DMACH_DMACHCTL_R_ARBSIZE_32         ((uint32_t)0x00014000U)
#define DMACH_DMACHCTL_R_ARBSIZE_64         ((uint32_t)0x00018000U)
#define DMACH_DMACHCTL_R_ARBSIZE_128        ((uint32_t)0x0001C000U)
#define DMACH_DMACHCTL_R_ARBSIZE_256        ((uint32_t)0x00020000U)
#define DMACH_DMACHCTL_R_ARBSIZE_512        ((uint32_t)0x00024000U)
#define DMACH_DMACHCTL_R_ARBSIZE_1024       ((uint32_t)0x00028000U)

#define DMACH_DMACHCTL_ARBSIZE_MASK         ((uint32_t)0x0000000FU)
#define DMACH_DMACHCTL_ARBSIZE_1            ((uint32_t)0x00000000U)
#define DMACH_DMACHCTL_ARBSIZE_2            ((uint32_t)0x00000001U)
#define DMACH_DMACHCTL_ARBSIZE_4            ((uint32_t)0x00000002U)
#define DMACH_DMACHCTL_ARBSIZE_8            ((uint32_t)0x00000003U)
#define DMACH_DMACHCTL_ARBSIZE_16           ((uint32_t)0x00000004U)
#define DMACH_DMACHCTL_ARBSIZE_32           ((uint32_t)0x00000005U)
#define DMACH_DMACHCTL_ARBSIZE_64           ((uint32_t)0x00000006U)
#define DMACH_DMACHCTL_ARBSIZE_128          ((uint32_t)0x00000007U)
#define DMACH_DMACHCTL_ARBSIZE_256          ((uint32_t)0x00000008U)
#define DMACH_DMACHCTL_ARBSIZE_512          ((uint32_t)0x00000009U)
#define DMACH_DMACHCTL_ARBSIZE_1024         ((uint32_t)0x0000000AU)
/*--------*/

/*--------*/
#define DMACH_DMACHCTL_R_SRCSIZE_MASK       ((uint32_t)0x03000000U)
#define DMACH_DMACHCTL_R_SRCSIZE_BIT        ((uint32_t)24U)
#define DMACH_DMACHCTL_R_SRCSIZE_BYTE       ((uint32_t)0x00000000U)
#define DMACH_DMACHCTL_R_SRCSIZE_HWORD      ((uint32_t)0x01000000U)
#define DMACH_DMACHCTL_R_SRCSIZE_WORD       ((uint32_t)0x02000000U)

#define DMACH_DMACHCTL_SRCSIZE_MASK         ((uint32_t)0x00000003U)
#define DMACH_DMACHCTL_SRCSIZE_BYTE         ((uint32_t)0x00000000U)
#define DMACH_DMACHCTL_SRCSIZE_HWORD        ((uint32_t)0x00000001U)
#define DMACH_DMACHCTL_SRCSIZE_WORD         ((uint32_t)0x00000002U)
/*--------*/

/*--------*/
#define DMACH_DMACHCTL_R_SRCINC_MASK        ((uint32_t)0x0C000000U)
#define DMACH_DMACHCTL_R_SRCINC_BIT         ((uint32_t)26U)
#define DMACH_DMACHCTL_R_SRCINC_BYTE        ((uint32_t)0x00000000U)
#define DMACH_DMACHCTL_R_SRCINC_HWORD       ((uint32_t)0x04000000U)
#define DMACH_DMACHCTL_R_SRCINC_WORD        ((uint32_t)0x08000000U)
#define DMACH_DMACHCTL_R_SRCINC_NOINC       ((uint32_t)0x0C000000U)

#define DMACH_DMACHCTL_SRCINC_MASK          ((uint32_t)0x00000003U)
#define DMACH_DMACHCTL_SRCINC_BYTE          ((uint32_t)0x00000000U)
#define DMACH_DMACHCTL_SRCINC_HWORD         ((uint32_t)0x00000001U)
#define DMACH_DMACHCTL_SRCINC_WORD          ((uint32_t)0x00000002U)
#define DMACH_DMACHCTL_SRCINC_NOINC         ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMACH_DMACHCTL_R_DSTSIZE_MASK       ((uint32_t)0x30000000U)
#define DMACH_DMACHCTL_R_DSTSIZE_BIT        ((uint32_t)28U)
#define DMACH_DMACHCTL_R_DSTSIZE_BYTE       ((uint32_t)0x00000000U)
#define DMACH_DMACHCTL_R_DSTSIZE_HWORD      ((uint32_t)0x10000000U)
#define DMACH_DMACHCTL_R_DSTSIZE_WORD       ((uint32_t)0x20000000U)

#define DMACH_DMACHCTL_DSTSIZE_MASK         ((uint32_t)0x00000003U)
#define DMACH_DMACHCTL_DSTSIZE_BYTE         ((uint32_t)0x00000000U)
#define DMACH_DMACHCTL_DSTSIZE_HWORD        ((uint32_t)0x00000001U)
#define DMACH_DMACHCTL_DSTSIZE_WORD         ((uint32_t)0x00000002U)
/*--------*/

/*--------*/
#define DMACH_DMACHCTL_R_DSTINC_MASK        ((uint32_t)0xC0000000U)
#define DMACH_DMACHCTL_R_DSTINC_BIT         ((uint32_t)30U)
#define DMACH_DMACHCTL_R_DSTINC_BYTE        ((uint32_t)0x00000000U)
#define DMACH_DMACHCTL_R_DSTINC_HWORD       ((uint32_t)0x40000000U)
#define DMACH_DMACHCTL_R_DSTINC_WORD        ((uint32_t)0x80000000U)
#define DMACH_DMACHCTL_R_DSTINC_NOINC       ((uint32_t)0xC0000000U)

#define DMACH_DMACHCTL_DSTINC_MASK          ((uint32_t)0x00000003U)
#define DMACH_DMACHCTL_DSTINC_BYTE          ((uint32_t)0x00000000U)
#define DMACH_DMACHCTL_DSTINC_HWORD         ((uint32_t)0x00000001U)
#define DMACH_DMACHCTL_DSTINC_WORD          ((uint32_t)0x00000002U)
#define DMACH_DMACHCTL_DSTINC_NOINC         ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMAALTCH_DMACHCTL_R_XFERMODE_MASK   ((uint32_t)0x00000007U)
#define DMAALTCH_DMACHCTL_R_XFERMODE_BIT    ((uint32_t)0U)
#define DMAALTCH_DMACHCTL_R_XFERMODE_STOP   ((uint32_t)0x00000000U)
#define DMAALTCH_DMACHCTL_R_XFERMODE_BASIC  ((uint32_t)0x00000001U)
#define DMAALTCH_DMACHCTL_R_XFERMODE_AUTO   ((uint32_t)0x00000002U)
#define DMAALTCH_DMACHCTL_R_XFERMODE_PINGPONG   ((uint32_t)0x00000003U)
#define DMAALTCH_DMACHCTL_R_XFERMODE_MSG    ((uint32_t)0x00000004U)
#define DMAALTCH_DMACHCTL_R_XFERMODE_AMSG   ((uint32_t)0x00000005U)
#define DMAALTCH_DMACHCTL_R_XFERMODE_PSG    ((uint32_t)0x00000006U)
#define DMAALTCH_DMACHCTL_R_XFERMODE_APSG   ((uint32_t)0x00000007U)

#define DMAALTCH_DMACHCTL_XFERMODE_MASK     ((uint32_t)0x00000007U)
#define DMAALTCH_DMACHCTL_XFERMODE_STOP     ((uint32_t)0x00000000U)
#define DMAALTCH_DMACHCTL_XFERMODE_BASIC    ((uint32_t)0x00000001U)
#define DMAALTCH_DMACHCTL_XFERMODE_AUTO     ((uint32_t)0x00000002U)
#define DMAALTCH_DMACHCTL_XFERMODE_PINGPONG ((uint32_t)0x00000003U)
#define DMAALTCH_DMACHCTL_XFERMODE_MSG      ((uint32_t)0x00000004U)
#define DMAALTCH_DMACHCTL_XFERMODE_AMSG     ((uint32_t)0x00000005U)
#define DMAALTCH_DMACHCTL_XFERMODE_PSG      ((uint32_t)0x00000006U)
#define DMAALTCH_DMACHCTL_XFERMODE_APSG     ((uint32_t)0x00000007U)
/*--------*/

/*--------*/
#define DMAALTCH_DMACHCTL_R_NXTUSEBURST_MASK    ((uint32_t)0x00000008U)
#define DMAALTCH_DMACHCTL_R_NXTUSEBURST_BIT     ((uint32_t)3U)
#define DMAALTCH_DMACHCTL_R_NXTUSEBURST_SINGLE  ((uint32_t)0x00000000U)
#define DMAALTCH_DMACHCTL_R_NXTUSEBURST_BURST   ((uint32_t)0x00000008U)

#define DMAALTCH_DMACHCTL_NXTUSEBURST_MASK      ((uint32_t)0x00000001U)
#define DMAALTCH_DMACHCTL_NXTUSEBURST_SINGLE    ((uint32_t)0x00000000U)
#define DMAALTCH_DMACHCTL_NXTUSEBURST_BURST     ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define DMAALTCH_DMACHCTL_R_XFERSIZE_MASK       ((uint32_t)0x00003FF0U)
#define DMAALTCH_DMACHCTL_R_XFERSIZE_BIT        ((uint32_t)4U)

#define DMAALTCH_DMACHCTL_XFERSIZE_MASK         ((uint32_t)0x000003FFU)
/*--------*/

/*--------*/
#define DMAALTCH_DMACHCTL_R_ARBSIZE_MASK        ((uint32_t)0x0003C000U)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_BIT         ((uint32_t)14U)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_1           ((uint32_t)0x00000000U)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_2           ((uint32_t)0x00004000U)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_4           ((uint32_t)0x00008000U)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_8           ((uint32_t)0x0000C000U)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_16          ((uint32_t)0x00010000U)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_32          ((uint32_t)0x00014000U)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_64          ((uint32_t)0x00018000U)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_128         ((uint32_t)0x0001C000U)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_256         ((uint32_t)0x00020000U)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_512         ((uint32_t)0x00024000U)
#define DMAALTCH_DMACHCTL_R_ARBSIZE_1024        ((uint32_t)0x00028000U)

#define DMAALTCH_DMACHCTL_ARBSIZE_MASK          ((uint32_t)0x0000000FU)
#define DMAALTCH_DMACHCTL_ARBSIZE_1             ((uint32_t)0x00000000U)
#define DMAALTCH_DMACHCTL_ARBSIZE_2             ((uint32_t)0x00000001U)
#define DMAALTCH_DMACHCTL_ARBSIZE_4             ((uint32_t)0x00000002U)
#define DMAALTCH_DMACHCTL_ARBSIZE_8             ((uint32_t)0x00000003U)
#define DMAALTCH_DMACHCTL_ARBSIZE_16            ((uint32_t)0x00000004U)
#define DMAALTCH_DMACHCTL_ARBSIZE_32            ((uint32_t)0x00000005U)
#define DMAALTCH_DMACHCTL_ARBSIZE_64            ((uint32_t)0x00000006U)
#define DMAALTCH_DMACHCTL_ARBSIZE_128           ((uint32_t)0x00000007U)
#define DMAALTCH_DMACHCTL_ARBSIZE_256           ((uint32_t)0x00000008U)
#define DMAALTCH_DMACHCTL_ARBSIZE_512           ((uint32_t)0x00000009U)
#define DMAALTCH_DMACHCTL_ARBSIZE_1024          ((uint32_t)0x0000000AU)
/*--------*/

/*--------*/
#define DMAALTCH_DMACHCTL_R_SRCSIZE_MASK        ((uint32_t)0x03000000U)
#define DMAALTCH_DMACHCTL_R_SRCSIZE_BIT         ((uint32_t)24U)
#define DMAALTCH_DMACHCTL_R_SRCSIZE_BYTE        ((uint32_t)0x00000000U)
#define DMAALTCH_DMACHCTL_R_SRCSIZE_HWORD       ((uint32_t)0x01000000U)
#define DMAALTCH_DMACHCTL_R_SRCSIZE_WORD        ((uint32_t)0x02000000U)

#define DMAALTCH_DMACHCTL_SRCSIZE_MASK          ((uint32_t)0x00000003U)
#define DMAALTCH_DMACHCTL_SRCSIZE_BYTE          ((uint32_t)0x00000000U)
#define DMAALTCH_DMACHCTL_SRCSIZE_HWORD         ((uint32_t)0x00000001U)
#define DMAALTCH_DMACHCTL_SRCSIZE_WORD          ((uint32_t)0x00000002U)
/*--------*/

/*--------*/
#define DMAALTCH_DMACHCTL_R_SRCINC_MASK         ((uint32_t)0x0C000000U)
#define DMAALTCH_DMACHCTL_R_SRCINC_BIT          ((uint32_t)26U)
#define DMAALTCH_DMACHCTL_R_SRCINC_BYTE         ((uint32_t)0x00000000U)
#define DMAALTCH_DMACHCTL_R_SRCINC_HWORD        ((uint32_t)0x04000000U)
#define DMAALTCH_DMACHCTL_R_SRCINC_WORD         ((uint32_t)0x08000000U)
#define DMAALTCH_DMACHCTL_R_SRCINC_NOINC        ((uint32_t)0x0C000000U)

#define DMAALTCH_DMACHCTL_SRCINC_MASK           ((uint32_t)0x00000003U)
#define DMAALTCH_DMACHCTL_SRCINC_BYTE           ((uint32_t)0x00000000U)
#define DMAALTCH_DMACHCTL_SRCINC_HWORD          ((uint32_t)0x00000001U)
#define DMAALTCH_DMACHCTL_SRCINC_WORD           ((uint32_t)0x00000002U)
#define DMAALTCH_DMACHCTL_SRCINC_NOINC          ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMAALTCH_DMACHCTL_R_DSTSIZE_MASK        ((uint32_t)0x30000000U)
#define DMAALTCH_DMACHCTL_R_DSTSIZE_BIT         ((uint32_t)28U)
#define DMAALTCH_DMACHCTL_R_DSTSIZE_BYTE        ((uint32_t)0x00000000U)
#define DMAALTCH_DMACHCTL_R_DSTSIZE_HWORD       ((uint32_t)0x10000000U)
#define DMAALTCH_DMACHCTL_R_DSTSIZE_WORD        ((uint32_t)0x20000000U)

#define DMAALTCH_DMACHCTL_DSTSIZE_MASK          ((uint32_t)0x00000003U)
#define DMAALTCH_DMACHCTL_DSTSIZE_BYTE          ((uint32_t)0x00000000U)
#define DMAALTCH_DMACHCTL_DSTSIZE_HWORD         ((uint32_t)0x00000001U)
#define DMAALTCH_DMACHCTL_DSTSIZE_WORD          ((uint32_t)0x00000002U)
/*--------*/


/*--------*/
#define DMAALTCH_DMACHCTL_R_DSTINC_MASK         ((uint32_t)0xC0000000U)
#define DMAALTCH_DMACHCTL_R_DSTINC_BIT          ((uint32_t)30U)
#define DMAALTCH_DMACHCTL_R_DSTINC_BYTE         ((uint32_t)0x00000000U)
#define DMAALTCH_DMACHCTL_R_DSTINC_HWORD        ((uint32_t)0x40000000U)
#define DMAALTCH_DMACHCTL_R_DSTINC_WORD         ((uint32_t)0x80000000U)
#define DMAALTCH_DMACHCTL_R_DSTINC_NOINC        ((uint32_t)0xC0000000U)

#define DMAALTCH_DMACHCTL_DSTINC_MASK           ((uint32_t)0x00000003U)
#define DMAALTCH_DMACHCTL_DSTINC_BYTE           ((uint32_t)0x00000000U)
#define DMAALTCH_DMACHCTL_DSTINC_HWORD          ((uint32_t)0x00000001U)
#define DMAALTCH_DMACHCTL_DSTINC_WORD           ((uint32_t)0x00000002U)
#define DMAALTCH_DMACHCTL_DSTINC_NOINC          ((uint32_t)0x00000003U)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINESCHANNEL_H_ */
