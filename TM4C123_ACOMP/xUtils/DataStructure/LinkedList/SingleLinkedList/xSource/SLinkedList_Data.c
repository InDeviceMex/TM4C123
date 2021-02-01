/**
 *
 * @file SLinkedList_Data.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Data.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Node.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/SLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/SLinkedList_Element.h>



 void* SLinkedList__pvGetNodeDataPos(const SLinkedList_TypeDef* psList, uint32_t u32Position)
 {
     SLinkedListElement_TypeDef* psElement = (SLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) psList)
     {
         psElement = SLinkedList__psGetNodePos(psList,u32Position);
         if((uint32_t) 0UL != (uint32_t) psElement)
         {
             pvElementData = SLinkedList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }


 void* SLinkedList__pvGetNodeDataEnd(const SLinkedList_TypeDef* psList)
 {
     SLinkedListElement_TypeDef* psElement = (SLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) psList)
     {
         psElement = SLinkedList__psGetNodeEnd(psList);
         if((uint32_t) 0UL != (uint32_t) psElement)
         {
             pvElementData = SLinkedList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }

 void* SLinkedList__pvGetNodeDataBegin(const SLinkedList_TypeDef* psList)
 {
     SLinkedListElement_TypeDef* psElement = (SLinkedListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t) 0UL != (uint32_t) psList)
     {
         psElement = SLinkedList__psGetNodeBegin(psList);
         if((uint32_t) 0UL != (uint32_t) psElement)
         {
             pvElementData = SLinkedList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }



