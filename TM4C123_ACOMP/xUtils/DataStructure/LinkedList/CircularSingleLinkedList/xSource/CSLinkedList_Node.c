/**
 *
 * @file CSLinkedList_Node.c
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
 * @verbatim 10 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Node.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/CSLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/Element/CSLinkedList_Element.h>



 CSLinkedListElement_TypeDef*  CSLinkedList__psGetNodePos(const CSLinkedList_TypeDef* psList, uint32_t u32Position)
 {
     CSLinkedListElement_TypeDef* psElement = (CSLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if((uint32_t) 0UL != (uint32_t) psList)
     {
         u32SizeList = CSLinkedList__u32GetSize(psList);
         if(u32Position < u32SizeList)
         {
             if(0UL == u32Position)
             {
                 psElement = CSLinkedList__psGetHead(psList);
             }
             else if((u32SizeList -1UL) == u32Position)
             {
                 psElement = CSLinkedList__psGetTail(psList);
             }
             else
             {
                 psElement = CSLinkedList__psGetHead(psList);
                 while(0UL != u32Position)
                 {
                     psElement = CSLinkedList__psGetElementNextNode(psElement);
                     u32Position--;
                 }
             }
         }
     }
     return psElement;
 }


 CSLinkedListElement_TypeDef*  CSLinkedList__psGetNodeEnd(const CSLinkedList_TypeDef* psList)
 {
     CSLinkedListElement_TypeDef* psElement = (CSLinkedListElement_TypeDef*) 0UL ;
     if((uint32_t) 0UL != (uint32_t) psList)
     {
         psElement = CSLinkedList__psGetTail(psList);
     }
     return psElement;
 }

 CSLinkedListElement_TypeDef*  CSLinkedList__psGetNodeBegin(const CSLinkedList_TypeDef* psList)
 {
     CSLinkedListElement_TypeDef* psElement = (CSLinkedListElement_TypeDef*) 0UL ;
     if((uint32_t) 0UL != (uint32_t) psList)
     {
         psElement = CSLinkedList__psGetHead(psList);
     }
     return psElement;
 }

 uint32_t CSLinkedList__u32GetAllNode(const CSLinkedList_TypeDef* psList, const void** pvData, uint32_t u32MaxLength)
 {
     CSLinkedListElement_TypeDef *psMember = (CSLinkedListElement_TypeDef*) 0UL;
     CSLinkedListElement_TypeDef *psMemberTemp = (CSLinkedListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     uint32_t u32SizeList = 0UL;

     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength))
     {
         psMember = CSLinkedList__psGetHead(psList);
         u32SizeList = CSLinkedList__u32GetSize(psList);
          while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList))
          {
              pvDataMember = CSLinkedList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              u32MaxLength--;
              psMemberTemp = CSLinkedList__psGetElementNextNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

 uint32_t CSLinkedList__u32GetNNode(const CSLinkedList_TypeDef* psList, const void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength)
 {
     CSLinkedListElement_TypeDef *psMember = (CSLinkedListElement_TypeDef*) 0UL;
     CSLinkedListElement_TypeDef *psMemberTemp = (CSLinkedListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     uint32_t u32SizeList = 0UL;

     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
     {
         psMember = CSLinkedList__psGetHead(psList);
         u32SizeList = CSLinkedList__u32GetSize(psList);
          while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList) && (0UL != u32Nodes))
          {
              pvDataMember = CSLinkedList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              u32MaxLength--;
              u32Nodes--;
              psMemberTemp = CSLinkedList__psGetElementNextNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }



