/**
 *
 * @file CDLinkedList_Data.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Data.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Node.h>

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/CDLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Element/CDLinkedList_Element.h>



 void* CDLinkedList__pvGetNodeDataPos(const CDLinkedList_TypeDef* psList, uint32_t u32Position)
 {
     CDLinkedListElement_TypeDef* psElement = (CDLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) psList)
     {
         psElement = CDLinkedList__psGetNodePos(psList, u32Position);
         if((uint32_t) 0UL != (uint32_t) psElement)
         {
             pvElementData = CDLinkedList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }


 void* CDLinkedList__pvGetNodeDataEnd(const CDLinkedList_TypeDef* psList)
 {
     CDLinkedListElement_TypeDef* psElement = (CDLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) psList)
     {
         psElement = CDLinkedList__psGetNodeEnd(psList);
         if((uint32_t) psElement != (uint32_t) 0UL)
         {
             pvElementData = CDLinkedList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }

 void* CDLinkedList__pvGetNodeDataBegin(const CDLinkedList_TypeDef* psList)
 {
     CDLinkedListElement_TypeDef* psElement = (CDLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) psList)
     {
         psElement = CDLinkedList__psGetNodeBegin(psList);
         if((uint32_t) psElement != (uint32_t) 0UL)
         {
             pvElementData = CDLinkedList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }



