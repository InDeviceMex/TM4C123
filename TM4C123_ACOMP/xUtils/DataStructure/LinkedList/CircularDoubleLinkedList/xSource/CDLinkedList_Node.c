/**
 *
 * @file CDLinkedList_Node.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Node.h>

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/CDLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Element/CDLinkedList_Element.h>



 CDLinkedListElement_TypeDef*  CDLinkedList__psGetNodePos(const CDLinkedList_TypeDef* psList, uint32_t u32Position)
 {
     CDLinkedListElement_TypeDef* psElement = (CDLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     uint32_t u32SizeForward = 0UL;
     uint32_t u32SizeBackward= 0UL;
     uint32_t u32SizeOptimum= 0UL;
     uint32_t u32Direction= 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         u32SizeList = CDLinkedList__u32GetSize(psList);
          if(u32Position < u32SizeList)
          {
              if(0UL ==u32Position)
              {
                  psElement = CDLinkedList__psGetHead(psList);
              }
              else if(u32Position == (u32SizeList - 1UL))
              {
                  psElement = CDLinkedList__psGetTail(psList);
              }
              else
              {
                  u32SizeBackward = u32SizeList - u32Position;

                  u32SizeForward = u32Position;

                  if( u32SizeForward > u32SizeBackward)
                  {
                      u32SizeOptimum = u32SizeBackward;
                      u32Direction = 1UL;
                  }
                  else
                  {
                      u32SizeOptimum = u32SizeForward;
                      u32Direction = 0UL;
                  }

                  if( u32Direction == 0UL) /*Forward*/
                  {
                      psElement = CDLinkedList__psGetHead(psList);
                      while(0UL != u32SizeOptimum)
                      {
                          psElement = CDLinkedList__psGetElementNextNode(psElement);
                          u32SizeOptimum--;
                      }
                  }
                  else /*Backward*/
                  {
                      psElement = CDLinkedList__psGetTail(psList);
                      while(0UL != u32SizeOptimum)
                      {
                          psElement = CDLinkedList__psGetElementPreviousNode(psElement);
                          u32SizeOptimum--;
                      }
                  }
              }
          }
     }
     return psElement;
 }


 CDLinkedListElement_TypeDef*  CDLinkedList__psGetNodeEnd(const CDLinkedList_TypeDef* psList)
 {
     CDLinkedListElement_TypeDef* psElement = (CDLinkedListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = CDLinkedList__psGetTail(psList);
     }
     return psElement;
 }

 CDLinkedListElement_TypeDef*  CDLinkedList__psGetNodeBegin(const CDLinkedList_TypeDef* psList)
 {
     CDLinkedListElement_TypeDef* psElement = (CDLinkedListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = CDLinkedList__psGetHead(psList);
     }
     return psElement;
 }


 uint32_t CDLinkedList__u32GetAllNode(const CDLinkedList_TypeDef* psList, const void** pvData, uint32_t u32MaxLength)
 {
     CDLinkedListElement_TypeDef *psMember = (CDLinkedListElement_TypeDef*) 0UL;
     CDLinkedListElement_TypeDef *psMemberTemp = (CDLinkedListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     uint32_t u32SizeList = 0UL;

     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != pvData ) && (0UL != u32MaxLength))
     {
         psMember = CDLinkedList__psGetHead(psList);
         u32SizeList = CDLinkedList__u32GetSize(psList);
          while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList))
          {
              pvDataMember=CDLinkedList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              u32MaxLength--;
              psMemberTemp = CDLinkedList__psGetElementNextNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

 uint32_t CDLinkedList__u32GetAllNodeBackward(const CDLinkedList_TypeDef* psList, const void** pvData, uint32_t u32MaxLength)
 {
     CDLinkedListElement_TypeDef *psMember = (CDLinkedListElement_TypeDef*) 0UL;
     CDLinkedListElement_TypeDef *psMemberTemp = (CDLinkedListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     uint32_t u32SizeList = 0UL;

     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != pvData ) && (0UL != u32MaxLength))
     {
         psMember = CDLinkedList__psGetTail(psList);
         u32SizeList = CDLinkedList__u32GetSize(psList);
          while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList))
          {
              pvDataMember=CDLinkedList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              u32MaxLength--;
              psMemberTemp = CDLinkedList__psGetElementPreviousNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

 uint32_t CDLinkedList__u32GetNNode(const CDLinkedList_TypeDef* psList, const void** pvData,uint32_t u32Nodes, uint32_t u32MaxLength)
 {
     CDLinkedListElement_TypeDef *psMember = (CDLinkedListElement_TypeDef*) 0UL;
     CDLinkedListElement_TypeDef *psMemberTemp = (CDLinkedListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     uint32_t u32SizeList = 0UL;

     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != pvData ) && (0UL != u32MaxLength)&& (0UL != u32Nodes))
     {
         psMember = CDLinkedList__psGetHead(psList);
         u32SizeList = CDLinkedList__u32GetSize(psList);
          while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList)&& (0UL != u32Nodes))
          {
              pvDataMember=CDLinkedList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              u32MaxLength--;
              u32Nodes--;
              psMemberTemp = CDLinkedList__psGetElementNextNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

 uint32_t CDLinkedList__u32GetNNodeBackward(const CDLinkedList_TypeDef* psList, const void** pvData,uint32_t u32Nodes, uint32_t u32MaxLength)
 {
     CDLinkedListElement_TypeDef *psMember = (CDLinkedListElement_TypeDef*) 0UL;
     CDLinkedListElement_TypeDef *psMemberTemp = (CDLinkedListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     uint32_t u32SizeList = 0UL;

     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != pvData ) && (0UL != u32MaxLength)&& (0UL != u32Nodes))
     {
         psMember = CDLinkedList__psGetTail(psList);
         u32SizeList = CDLinkedList__u32GetSize(psList);
          while((0UL != u32MaxLength) && (u32SizeReg != u32SizeList)&& (0UL != u32Nodes))
          {
              pvDataMember=CDLinkedList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              u32MaxLength--;
              u32Nodes--;
              psMemberTemp = CDLinkedList__psGetElementPreviousNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }



