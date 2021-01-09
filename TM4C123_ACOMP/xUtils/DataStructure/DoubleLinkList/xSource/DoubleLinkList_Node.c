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
              if(0UL ==u32Position) /*Remove Head*/
              {
                  psElement = DoubleLinkList__psGetHead(psList);
              }
              else if(u32Position == (u32SizeList - 1UL)) /*Remove Tail*/
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
     uint32_t u32SizeList = 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         u32SizeList = DoubleLinkList__u32GetSize(psList);
         if(0UL != u32SizeList)
         {
             u32SizeList --;
             psElement = DoubleLinkList__psGetNodePos(psList, u32SizeList);
         }
     }
     return psElement;
 }

 DoubleLinkListElement_TypeDef*  DoubleLinkList__psGetNodeBegin(const DoubleLinkList_TypeDef* psList)
 {
     DoubleLinkListElement_TypeDef* psElement = (DoubleLinkListElement_TypeDef*) 0UL ;
     uint32_t u32SizeList = 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         u32SizeList = DoubleLinkList__u32GetSize(psList);
         if(0UL != u32SizeList)
         {
             psElement = DoubleLinkList__psGetNodePos(psList, 0UL );
         }
     }
     return psElement;
 }



