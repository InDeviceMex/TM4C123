/**
 *
 * @file CircularSingleLinkList_Node.h
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
 * @verbatim 10 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_NODE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_NODE_H_

#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/xHeader/CircularSingleLinkList_Struct.h>

 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psGetNodePos(const CircularSingleLinkList_TypeDef* psList, uint32_t u32Position);
 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psGetNodeEnd(const CircularSingleLinkList_TypeDef* psList);
 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psGetNodeBegin(const CircularSingleLinkList_TypeDef* psList);

 uint32_t CircularSingleLinkList__u32GetNNode(const CircularSingleLinkList_TypeDef* psList, const void** pvData,uint32_t u32Nodes, uint32_t MaxLength);
 uint32_t CircularSingleLinkList__u32GetAllNode(const CircularSingleLinkList_TypeDef* psList, const void** pvData, uint32_t MaxLength);




#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKLIST_XHEADER_CIRCULARSINGLELINKLIST_NODE_H_ */
