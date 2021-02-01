/**
 *
 * @file DLinkedList_Reverse.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Reverse.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/DLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Element/DLinkedList_Element.h>

#include <stdlib.h>


 DLinkedList_nSTATUS DLinkedList__enReverse(DLinkedList_TypeDef* psList)
 {
     DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
     DLinkedListElement_TypeDef* psNextElement= (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* psNextNextElement= (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* psNextPreviousElement= (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* psElement = (DLinkedListElement_TypeDef*) 0UL ;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         psElement = DLinkedList__psGetHead(psList);
         DLinkedList__vSetTail(psList,psElement);
         if((uint32_t) 0UL != (uint32_t) psElement)
         {
             psNextElement = DLinkedList__psGetElementNextNode(psElement);
             if((uint32_t) 0UL != (uint32_t) psNextElement)
             {
                 enStatus = DLinkedList_enSTATUS_OK;
                 DLinkedList__vSetElementNextNode(psElement, (DLinkedListElement_TypeDef*)0UL);
                 DLinkedList__vSetElementPreviousNode(psElement,psNextElement);

                 while((uint32_t) 0UL != (uint32_t) psNextElement)
                 {
                     psNextNextElement = DLinkedList__psGetElementNextNode(psNextElement);
                     DLinkedList__vSetElementPreviousNode(psNextElement,psNextNextElement);
                     DLinkedList__vSetElementNextNode(psNextElement,psElement);
                     psNextPreviousElement = DLinkedList__psGetElementPreviousNode(psNextElement);

                     psElement = psNextElement;
                     psNextElement = psNextPreviousElement;
                 }
                 DLinkedList__vSetHead(psList,psElement);
             }
         }
     }
     return enStatus;
 }



