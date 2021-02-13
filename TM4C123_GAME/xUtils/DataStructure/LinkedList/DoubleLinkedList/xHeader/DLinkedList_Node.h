/**
 *
 * @file DLinkedList_Node.h
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
 * @verbatim 8 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_NODE_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_NODE_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

 uint32_t DLinkedList__u32GetAllNode(const DLinkedList_TypeDef* psList, const void** pvData, uint32_t u32MaxLength);
 uint32_t DLinkedList__u32GetAllNodeBackward(const DLinkedList_TypeDef* psList, const void** pvData, uint32_t u32MaxLength);
 uint32_t DLinkedList__u32GetNNodeBackward(const DLinkedList_TypeDef* psList, const void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength);
 uint32_t DLinkedList__u32GetNNode(const DLinkedList_TypeDef* psList, const void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength);

 DLinkedListElement_TypeDef*  DLinkedList__psGetNodePos(const DLinkedList_TypeDef* psList, uint32_t u32Position);
 DLinkedListElement_TypeDef*  DLinkedList__psGetNodeEnd(const DLinkedList_TypeDef* psList);
 DLinkedListElement_TypeDef*  DLinkedList__psGetNodeBegin(const DLinkedList_TypeDef* psList);




#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_NODE_H_ */
