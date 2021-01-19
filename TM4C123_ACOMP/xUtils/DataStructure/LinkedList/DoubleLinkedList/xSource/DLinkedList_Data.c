/**
 *
 * @file DLinkedList_Data.c
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

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Data.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Node.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/DLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Element/DLinkedList_Element.h>



 void* DLinkedList__pvGetNodeDataPos(const DLinkedList_TypeDef* psList, uint32_t u32Position)
 {
     DLinkedListElement_TypeDef* psElement = (DLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = DLinkedList__psGetNodePos(psList,u32Position);
         if((uint32_t)0UL != (uint32_t)psElement)
         {
             pvElementData = DLinkedList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }


 void* DLinkedList__pvGetNodeDataEnd(const DLinkedList_TypeDef* psList)
 {
     DLinkedListElement_TypeDef* psElement = (DLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = DLinkedList__psGetNodeEnd(psList);
         if((uint32_t)0UL != (uint32_t)psElement)
         {
             pvElementData = DLinkedList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }

 void* DLinkedList__pvGetNodeDataBegin(const DLinkedList_TypeDef* psList)
 {
     DLinkedListElement_TypeDef* psElement = (DLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = DLinkedList__psGetNodeBegin(psList);
         if((uint32_t)0UL != (uint32_t)psElement)
         {
             pvElementData = DLinkedList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }


