/**
 *
 * @file SLinkedList_Reverse.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Reverse.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/SLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/SLinkedList_Element.h>

#include <stdlib.h>


 SLinkedList_nSTATUS SLinkedList__enReverse(SLinkedList_TypeDef* psList)
 {
     SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* psPreviousElement= (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* psNextElement= (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* psHeadElement = (SLinkedListElement_TypeDef*) 0UL ;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         psHeadElement = SLinkedList__psGetHead(psList);
         SLinkedList__vSetTail(psList, psHeadElement);
         while((uint32_t) 0UL != (uint32_t) psHeadElement)
         {
             psNextElement = SLinkedList__psGetElementNextNode(psHeadElement);
             SLinkedList__vSetElementNextNode(psHeadElement,psPreviousElement);
             psPreviousElement = psHeadElement;
             psHeadElement = psNextElement;
         }
         psHeadElement = psPreviousElement;
         SLinkedList__vSetHead(psList, psHeadElement);
     }
     return enStatus;
 }


