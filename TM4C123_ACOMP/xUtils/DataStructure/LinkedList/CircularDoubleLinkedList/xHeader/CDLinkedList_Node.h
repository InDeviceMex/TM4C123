/**
 *
 * @file CDLinkedList_Node.h
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
 * @verbatim 11 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_NODE_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_NODE_H_


#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

 uint32_t CDLinkedList__u32GetAllNode(const CDLinkedList_TypeDef* psList, const void** pvData, uint32_t u32MaxLength);
 uint32_t CDLinkedList__u32GetAllNodeBackward(const CDLinkedList_TypeDef* psList, const void** pvData, uint32_t u32MaxLength);
 uint32_t CDLinkedList__u32GetNNode(const CDLinkedList_TypeDef* psList, const void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength);
 uint32_t CDLinkedList__u32GetNNodeBackward(const CDLinkedList_TypeDef* psList, const void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength);

 CDLinkedListElement_TypeDef*  CDLinkedList__psGetNodePos(const CDLinkedList_TypeDef* psList, uint32_t u32Position);
 CDLinkedListElement_TypeDef*  CDLinkedList__psGetNodeEnd(const CDLinkedList_TypeDef* psList);
 CDLinkedListElement_TypeDef*  CDLinkedList__psGetNodeBegin(const CDLinkedList_TypeDef* psList);





#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_NODE_H_ */
