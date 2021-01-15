/**
 *
 * @file DoubleLinkList_Node.c
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
#include <xUtils/DataStructure/DoubleLinkList/xHeader/DoubleLinkList_Node.h>

#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/List/DoubleLinkList_List.h>
#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/Element/DoubleLinkList_Element.h>



 DoubleLinkListElement_TypeDef*  DoubleLinkList__psGetNodePos(const DoubleLinkList_TypeDef* psList, uint32_t u32Position)
 {
     DoubleLinkListElement_TypeDef* psElement = (DoubleLinkListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     uint32_t u32SizeForward = 0UL;
     uint32_t u32SizeBackward= 0UL;
     uint32_t u32SizeOptimum= 0UL;
     uint32_t u32Direction= 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         u32SizeList = DoubleLinkList__u32GetSize(psList);
          if(u32Position < u32SizeList)
          {
              if(0UL ==u32Position)
              {
                  psElement = DoubleLinkList__psGetHead(psList);
              }
              else if(u32Position == (u32SizeList - 1UL))
              {
                  psElement = DoubleLinkList__psGetTail(psList);
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
                      psElement = DoubleLinkList__psGetHead(psList);
                      while(0UL != u32SizeOptimum)
                      {
                          psElement = DoubleLinkList__psGetElementNextNode(psElement);
                          u32SizeOptimum--;
                      }
                  }
                  else /*Backward*/
                  {
                      psElement = DoubleLinkList__psGetTail(psList);
                      while(0UL != u32SizeOptimum)
                      {
                          psElement = DoubleLinkList__psGetElementPreviousNode(psElement);
                          u32SizeOptimum--;
                      }
                  }
              }
          }
     }
     return psElement;
 }


 DoubleLinkListElement_TypeDef*  DoubleLinkList__psGetNodeEnd(const DoubleLinkList_TypeDef* psList)
 {
     DoubleLinkListElement_TypeDef* psElement = (DoubleLinkListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = DoubleLinkList__psGetTail(psList);
     }
     return psElement;
 }

 DoubleLinkListElement_TypeDef*  DoubleLinkList__psGetNodeBegin(const DoubleLinkList_TypeDef* psList)
 {
     DoubleLinkListElement_TypeDef* psElement = (DoubleLinkListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = DoubleLinkList__psGetHead(psList);
     }
     return psElement;
 }

 uint32_t DoubleLinkList__u32GetAllNode(const DoubleLinkList_TypeDef* psList, const void** pvData, uint32_t MaxLength)
 {
     DoubleLinkListElement_TypeDef *psMember = (DoubleLinkListElement_TypeDef*) 0UL;
     DoubleLinkListElement_TypeDef *psMemberTemp = (DoubleLinkListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != pvData ) && (0UL != MaxLength))
     {
         psMember = DoubleLinkList__psGetHead(psList);
          while(((uint32_t)0UL != (uint32_t)psMember) && (0UL != MaxLength))
          {
              pvDataMember=DoubleLinkList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              MaxLength--;
              psMemberTemp = DoubleLinkList__psGetElementNextNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

 uint32_t DoubleLinkList__u32GetAllNodeBackward(const DoubleLinkList_TypeDef* psList, const void** pvData, uint32_t MaxLength)
 {
     DoubleLinkListElement_TypeDef *psMember = (DoubleLinkListElement_TypeDef*) 0UL;
     DoubleLinkListElement_TypeDef *psMemberTemp = (DoubleLinkListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != pvData ) && (0UL != MaxLength))
     {
         psMember = DoubleLinkList__psGetTail(psList);
          while(((uint32_t)0UL != (uint32_t)psMember) && (0UL != MaxLength))
          {
              pvDataMember=DoubleLinkList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              MaxLength--;
              psMemberTemp = DoubleLinkList__psGetElementPreviousNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

 uint32_t DoubleLinkList__u32GetNNode(const DoubleLinkList_TypeDef* psList, const void** pvData,uint32_t u32Nodes, uint32_t MaxLength)
 {
     DoubleLinkListElement_TypeDef *psMember = (DoubleLinkListElement_TypeDef*) 0UL;
     DoubleLinkListElement_TypeDef *psMemberTemp = (DoubleLinkListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != pvData ) && (0UL != MaxLength)&& (0UL != u32Nodes))
     {
         psMember = DoubleLinkList__psGetHead(psList);
          while(((uint32_t)0UL != (uint32_t)psMember) && (0UL != MaxLength) && (0UL != u32Nodes))
          {
              pvDataMember=DoubleLinkList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              MaxLength--;
              u32Nodes--;
              psMemberTemp = DoubleLinkList__psGetElementNextNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

 uint32_t DoubleLinkList__u32GetNNodeBackward(const DoubleLinkList_TypeDef* psList, const void** pvData,uint32_t u32Nodes, uint32_t MaxLength)
 {
     DoubleLinkListElement_TypeDef *psMember = (DoubleLinkListElement_TypeDef*) 0UL;
     DoubleLinkListElement_TypeDef *psMemberTemp = (DoubleLinkListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != pvData ) && (0UL != MaxLength)&& (0UL != u32Nodes))
     {
         psMember = DoubleLinkList__psGetTail(psList);
          while(((uint32_t)0UL != (uint32_t)psMember) && (0UL != MaxLength) && (0UL != u32Nodes))
          {
              pvDataMember=DoubleLinkList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              MaxLength--;
              u32Nodes--;
              psMemberTemp = DoubleLinkList__psGetElementPreviousNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

