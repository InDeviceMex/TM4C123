/**
 *
 * @file CDLinkedList_Add.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_ADD_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_ADD_H_

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

 CDLinkedListElement_TypeDef* CDLinkedList__psAddNext(CDLinkedList_TypeDef* psList, CDLinkedListElement_TypeDef* psElement, void* pvData);
 CDLinkedListElement_TypeDef* CDLinkedList__psAddPrevious(CDLinkedList_TypeDef* psList, CDLinkedListElement_TypeDef* psElement, void* pvData);
 CDLinkedListElement_TypeDef*  CDLinkedList__psAddEnd(CDLinkedList_TypeDef* psList, void* pvData);
 CDLinkedListElement_TypeDef*  CDLinkedList__psAddBegin(CDLinkedList_TypeDef* psList, void* pvData);
 CDLinkedListElement_TypeDef*  CDLinkedList__psAddPos(CDLinkedList_TypeDef* psList, uint32_t u32Position, void* pvData);




#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_XHEADER_CIRCULARDLINKEDLIST_ADD_H_ */
