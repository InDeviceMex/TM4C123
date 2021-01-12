/**
 *
 * @file CircularDoubleLinkList_Node.c
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
#include <xUtils/DataStructure/CircularDoubleLinkList/xHeader/CircularDoubleLinkList_Node.h>

#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/List/CircularDoubleLinkList_List.h>
#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/Element/CircularDoubleLinkList_Element.h>



 CircularDoubleLinkListElement_TypeDef*  CircularDoubleLinkList__psGetNodePos(const CircularDoubleLinkList_TypeDef* psList, uint32_t u32Position)
 {
     CircularDoubleLinkListElement_TypeDef* psElement = (CircularDoubleLinkListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     uint32_t u32SizeForward = 0UL;
     uint32_t u32SizeBackward= 0UL;
     uint32_t u32SizeOptimum= 0UL;
     uint32_t u32Direction= 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         u32SizeList = CircularDoubleLinkList__u32GetSize(psList);
          if(u32Position < u32SizeList)
          {
              if(0UL ==u32Position)
              {
                  psElement = CircularDoubleLinkList__psGetHead(psList);
              }
              else if(u32Position == (u32SizeList - 1UL))
              {
                  psElement = CircularDoubleLinkList__psGetTail(psList);
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
                      psElement = CircularDoubleLinkList__psGetHead(psList);
                      while(0UL != u32SizeOptimum)
                      {
                          psElement = CircularDoubleLinkList__psGetElementNextNode(psElement);
                          u32SizeOptimum--;
                      }
                  }
                  else /*Backward*/
                  {
                      psElement = CircularDoubleLinkList__psGetTail(psList);
                      while(0UL != u32SizeOptimum)
                      {
                          psElement = CircularDoubleLinkList__psGetElementPreviousNode(psElement);
                          u32SizeOptimum--;
                      }
                  }
              }
          }
     }
     return psElement;
 }


 CircularDoubleLinkListElement_TypeDef*  CircularDoubleLinkList__psGetNodeEnd(const CircularDoubleLinkList_TypeDef* psList)
 {
     CircularDoubleLinkListElement_TypeDef* psElement = (CircularDoubleLinkListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = CircularDoubleLinkList__psGetTail(psList);
     }
     return psElement;
 }

 CircularDoubleLinkListElement_TypeDef*  CircularDoubleLinkList__psGetNodeBegin(const CircularDoubleLinkList_TypeDef* psList)
 {
     CircularDoubleLinkListElement_TypeDef* psElement = (CircularDoubleLinkListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = CircularDoubleLinkList__psGetHead(psList);
     }
     return psElement;
 }



