/**
 *
 * @file DLinkedList_Add.h
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
#ifndef XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_ADD_H_
#define XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_ADD_H_

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/xHeader/DLinkedList_Struct.h>

 DLinkedListElement_TypeDef* DLinkedList__psAddNext(DLinkedList_TypeDef* psList, DLinkedListElement_TypeDef* psElement, void* pvData);
 DLinkedListElement_TypeDef* DLinkedList__psAddPrevious(DLinkedList_TypeDef* psList, DLinkedListElement_TypeDef* psElement, void* pvData);
 DLinkedListElement_TypeDef*  DLinkedList__psAddEnd(DLinkedList_TypeDef* psList, void* pvData);
 DLinkedListElement_TypeDef*  DLinkedList__psAddBegin(DLinkedList_TypeDef* psList, void* pvData);
 DLinkedListElement_TypeDef*  DLinkedList__psAddPos(DLinkedList_TypeDef* psList, uint32_t u32Position, void* pvData);



#endif /* XUTILS_DATASTRUCTURE_DOUBLELINKEDLIST_XHEADER_DLINKEDLIST_ADD_H_ */
