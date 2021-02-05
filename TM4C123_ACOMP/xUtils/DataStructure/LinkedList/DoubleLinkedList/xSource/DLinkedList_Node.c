/**
 *
 * @file DLinkedList_Node.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Node.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/DLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Element/DLinkedList_Element.h>



 DLinkedListElement_TypeDef*  DLinkedList__psGetNodePos(const DLinkedList_TypeDef* psList, uint32_t u32Position)
 {
     DLinkedListElement_TypeDef* psElement = (DLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     uint32_t u32SizeForward = 0UL;
     uint32_t u32SizeBackward= 0UL;
     uint32_t u32SizeOptimum= 0UL;
     uint32_t u32Direction= 0UL;
     if((uint32_t) 0UL != (uint32_t) psList)
     {
         u32SizeList = DLinkedList__u32GetSize(psList);
          if(u32Position < u32SizeList)
          {
              if(0UL == u32Position)
              {
                  psElement = DLinkedList__psGetHead(psList);
              }
              else if(u32Position == (u32SizeList - 1UL))
              {
                  psElement = DLinkedList__psGetTail(psList);
              }
              else
              {
                  u32SizeBackward = u32SizeList - u32Position;

                  u32SizeForward = u32Position;

                  if(u32SizeForward > u32SizeBackward)
                  {
                      u32SizeOptimum = u32SizeBackward;
                      u32Direction = 1UL;
                  }
                  else
                  {
                      u32SizeOptimum = u32SizeForward;
                      u32Direction = 0UL;
                  }

                  if(u32Direction == 0UL) /*Forward*/
                  {
                      psElement = DLinkedList__psGetHead(psList);
                      while(0UL != u32SizeOptimum)
                      {
                          psElement = DLinkedList__psGetElementNextNode(psElement);
                          u32SizeOptimum--;
                      }
                  }
                  else /*Backward*/
                  {
                      psElement = DLinkedList__psGetTail(psList);
                      while(0UL != u32SizeOptimum)
                      {
                          psElement = DLinkedList__psGetElementPreviousNode(psElement);
                          u32SizeOptimum--;
                      }
                  }
              }
          }
     }
     return psElement;
 }


 DLinkedListElement_TypeDef*  DLinkedList__psGetNodeEnd(const DLinkedList_TypeDef* psList)
 {
     DLinkedListElement_TypeDef* psElement = (DLinkedListElement_TypeDef*) 0UL ;
     if((uint32_t) 0UL != (uint32_t) psList)
     {
         psElement = DLinkedList__psGetTail(psList);
     }
     return psElement;
 }

 DLinkedListElement_TypeDef*  DLinkedList__psGetNodeBegin(const DLinkedList_TypeDef* psList)
 {
     DLinkedListElement_TypeDef* psElement = (DLinkedListElement_TypeDef*) 0UL ;
     if((uint32_t) 0UL != (uint32_t) psList)
     {
         psElement = DLinkedList__psGetHead(psList);
     }
     return psElement;
 }

 uint32_t DLinkedList__u32GetAllNode(const DLinkedList_TypeDef* psList, const void** pvData, uint32_t u32MaxLength)
 {
     DLinkedListElement_TypeDef *psMember = (DLinkedListElement_TypeDef*) 0UL;
     DLinkedListElement_TypeDef *psMemberTemp = (DLinkedListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength))
     {
         psMember = DLinkedList__psGetHead(psList);
          while(((uint32_t) 0UL != (uint32_t) psMember) && (0UL != u32MaxLength))
          {
              pvDataMember=DLinkedList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              u32MaxLength--;
              psMemberTemp = DLinkedList__psGetElementNextNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

 uint32_t DLinkedList__u32GetAllNodeBackward(const DLinkedList_TypeDef* psList, const void** pvData, uint32_t u32MaxLength)
 {
     DLinkedListElement_TypeDef *psMember = (DLinkedListElement_TypeDef*) 0UL;
     DLinkedListElement_TypeDef *psMemberTemp = (DLinkedListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength))
     {
         psMember = DLinkedList__psGetTail(psList);
          while(((uint32_t) 0UL != (uint32_t) psMember) && (0UL != u32MaxLength))
          {
              pvDataMember=DLinkedList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              u32MaxLength--;
              psMemberTemp = DLinkedList__psGetElementPreviousNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

 uint32_t DLinkedList__u32GetNNode(const DLinkedList_TypeDef* psList, const void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength)
 {
     DLinkedListElement_TypeDef *psMember = (DLinkedListElement_TypeDef*) 0UL;
     DLinkedListElement_TypeDef *psMemberTemp = (DLinkedListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
     {
         psMember = DLinkedList__psGetHead(psList);
          while(((uint32_t) 0UL != (uint32_t) psMember) && (0UL != u32MaxLength) && (0UL != u32Nodes))
          {
              pvDataMember=DLinkedList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              u32MaxLength--;
              u32Nodes--;
              psMemberTemp = DLinkedList__psGetElementNextNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

 uint32_t DLinkedList__u32GetNNodeBackward(const DLinkedList_TypeDef* psList, const void** pvData, uint32_t u32Nodes, uint32_t u32MaxLength)
 {
     DLinkedListElement_TypeDef *psMember = (DLinkedListElement_TypeDef*) 0UL;
     DLinkedListElement_TypeDef *psMemberTemp = (DLinkedListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData ) && (0UL != u32MaxLength) && (0UL != u32Nodes))
     {
         psMember = DLinkedList__psGetTail(psList);
          while(((uint32_t) 0UL != (uint32_t) psMember) && (0UL != u32MaxLength) && (0UL != u32Nodes))
          {
              pvDataMember=DLinkedList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              u32MaxLength--;
              u32Nodes--;
              psMemberTemp = DLinkedList__psGetElementPreviousNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

