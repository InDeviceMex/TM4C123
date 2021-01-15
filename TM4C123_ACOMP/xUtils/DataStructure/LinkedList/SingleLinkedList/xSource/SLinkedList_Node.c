/**
 *
 * @file SLinkedList_Node.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Node.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/SLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/SLinkedList_Element.h>



 SLinkedListElement_TypeDef*  SLinkedList__psGetNodePos(const SLinkedList_TypeDef* psList, uint32_t u32Position)
 {
     SLinkedListElement_TypeDef* psElement = (SLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         u32SizeList = SLinkedList__u32GetSize(psList);
         if(u32Position < u32SizeList)
         {
             if(0UL == u32Position)
             {
                 psElement = SLinkedList__psGetHead(psList);
             }
             else if((u32SizeList -1UL) == u32Position)
             {
                 psElement = SLinkedList__psGetTail(psList);
             }
             else
             {
                 psElement = SLinkedList__psGetHead(psList);
                 while(0UL != u32Position)
                 {
                     psElement = SLinkedList__psGetElementNextNode(psElement);
                     u32Position--;
                 }
             }
         }
     }
     return psElement;
 }


 SLinkedListElement_TypeDef*  SLinkedList__psGetNodeEnd(const SLinkedList_TypeDef* psList)
 {
     SLinkedListElement_TypeDef* psElement = (SLinkedListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = SLinkedList__psGetTail(psList);
     }
     return psElement;
 }

 SLinkedListElement_TypeDef*  SLinkedList__psGetNodeBegin(const SLinkedList_TypeDef* psList)
 {
     SLinkedListElement_TypeDef* psElement = (SLinkedListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = SLinkedList__psGetHead(psList);
     }
     return psElement;
 }

 uint32_t SLinkedList__u32GetAllNode(const SLinkedList_TypeDef* psList, const void** pvData, uint32_t u32MaxLength)
 {
     SLinkedListElement_TypeDef *psMember = (SLinkedListElement_TypeDef*) 0UL;
     SLinkedListElement_TypeDef *psMemberTemp = (SLinkedListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != pvData ) && (0UL != u32MaxLength))
     {
         psMember = SLinkedList__psGetHead(psList);
          while(((uint32_t)0UL != (uint32_t)psMember) && (0UL != u32MaxLength))
          {
              pvDataMember=SLinkedList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              u32MaxLength--;
              psMemberTemp = SLinkedList__psGetElementNextNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

 uint32_t SLinkedList__u32GetNNode(const SLinkedList_TypeDef* psList, const void** pvData,uint32_t u32Nodes, uint32_t u32MaxLength)
 {
     SLinkedListElement_TypeDef *psMember = (SLinkedListElement_TypeDef*) 0UL;
     SLinkedListElement_TypeDef *psMemberTemp = (SLinkedListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != pvData ) && (0UL != u32MaxLength)&& (0UL != u32Nodes))
     {
         psMember = SLinkedList__psGetHead(psList);
          while(((uint32_t)0UL != (uint32_t)psMember) && (0UL != u32MaxLength) && (0UL != u32Nodes))
          {
              pvDataMember=SLinkedList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              u32MaxLength--;
              u32Nodes--;
              psMemberTemp = SLinkedList__psGetElementNextNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

