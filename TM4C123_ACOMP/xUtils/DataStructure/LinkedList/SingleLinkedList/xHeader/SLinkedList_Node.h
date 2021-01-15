/**
 *
 * @file SLinkedList_Node.h
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
 * @verbatim 7 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_NODE_H_
#define XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_NODE_H_

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/xHeader/SLinkedList_Struct.h>

 uint32_t SLinkedList__u32GetNNode(const SLinkedList_TypeDef* psList, const void** pvData,uint32_t u32Nodes, uint32_t u32MaxLength);
 uint32_t SLinkedList__u32GetAllNode(const SLinkedList_TypeDef* psList, const void** pvData, uint32_t u32MaxLength);

 SLinkedListElement_TypeDef*  SLinkedList__psGetNodePos(const SLinkedList_TypeDef* psList, uint32_t u32Position);
 SLinkedListElement_TypeDef*  SLinkedList__psGetNodeEnd(const SLinkedList_TypeDef* psList);
 SLinkedListElement_TypeDef*  SLinkedList__psGetNodeBegin(const SLinkedList_TypeDef* psList);

#endif /* XUTILS_DATASTRUCTURE_SINGLELINKEDLIST_XHEADER_SLINKEDLIST_NODE_H_ */
