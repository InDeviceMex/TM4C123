/**
 *
 * @file DLinkedList_Remove.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Remove.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/DLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Element/DLinkedList_Element.h>

#include <stdlib.h>


 DLinkedList_nSTATUS DLinkedList__enRemove(DLinkedList_TypeDef* psList, DLinkedListElement_TypeDef* psElement, void** pvData)
 {
     DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
     DLinkedListElement_TypeDef* psHeadElement = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* psElementNextNode = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* psElementPreviousNode = (DLinkedListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         u32SizeReg = DLinkedList__u32GetSize(psList);
         if(((uint32_t) 0UL != (uint32_t) psElement) || (0UL != u32SizeReg))
         {
             enStatus = DLinkedList_enSTATUS_OK;
             *pvData = DLinkedList__pvGetElementData(psElement);
             psHeadElement = DLinkedList__psGetHead(psList);
             if((uint32_t) psElement == (uint32_t) psHeadElement)
             {
                 psElementNextNode = DLinkedList__psGetElementNextNode(psElement);
                 DLinkedList__vSetHead(psList, psElementNextNode);

                 if((uint32_t) 0UL == (uint32_t) psElementNextNode)
                 {
                     DLinkedList__vSetTail(psList, (DLinkedListElement_TypeDef*) 0UL);
                 }
                 else
                 {
                     DLinkedList__vSetElementPreviousNode(psElementNextNode, (DLinkedListElement_TypeDef*) 0UL);
                 }
             }
             else
             {
                 psElementNextNode = DLinkedList__psGetElementNextNode(psElement);
                 psElementPreviousNode = DLinkedList__psGetElementPreviousNode(psElement);

                 DLinkedList__vSetElementNextNode(psElementPreviousNode, psElementNextNode);

                 if((uint32_t) 0UL == (uint32_t) psElementNextNode)
                 {
                     DLinkedList__vSetTail(psList, psElementPreviousNode);
                 }
                 else
                 {
                     DLinkedList__vSetElementPreviousNode(psElementNextNode, psElementPreviousNode);
                 }
             }

             DLinkedList__vSetElementNextNode(psElement,  (DLinkedListElement_TypeDef *) 0UL);
             DLinkedList__vSetElementPreviousNode(psElement,  (DLinkedListElement_TypeDef *) 0UL);
             DLinkedList__vSetElementData(psElement,  (void *) 0UL);
             free(psElement);
             psElement = (DLinkedListElement_TypeDef*) 0UL;

             u32SizeReg--;
             DLinkedList__vSetSize(psList, u32SizeReg);
         }
     }
     return enStatus;
 }


 DLinkedList_nSTATUS DLinkedList__enRemoveNext(DLinkedList_TypeDef* psList, const DLinkedListElement_TypeDef* psElement, void** pvData)
 {
     DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
     DLinkedListElement_TypeDef* psElementNextNode = (DLinkedListElement_TypeDef*) 0UL ;

     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) psElement) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         psElementNextNode = DLinkedList__psGetElementNextNode(psElement);
         enStatus = DLinkedList__enRemove(psList, psElementNextNode, pvData);
     }
     return enStatus;
 }

 DLinkedList_nSTATUS DLinkedList__enRemovePrevious(DLinkedList_TypeDef* psList, const DLinkedListElement_TypeDef* psElement, void** pvData)
 {
     DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
     DLinkedListElement_TypeDef* psElementPreviousNode = (DLinkedListElement_TypeDef*) 0UL ;

     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) psElement) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         psElementPreviousNode = DLinkedList__psGetElementPreviousNode(psElement);
         enStatus = DLinkedList__enRemove(psList, psElementPreviousNode, pvData);
     }
     return enStatus;
 }

 DLinkedList_nSTATUS  DLinkedList__enRemoveEnd(DLinkedList_TypeDef* psList, void** pvData)
 {
     DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
     DLinkedListElement_TypeDef* psEndElement = (DLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         psEndElement = DLinkedList__psGetTail(psList);
         enStatus = DLinkedList__enRemove(psList, psEndElement, pvData);
     }
     return enStatus;
 }

 DLinkedList_nSTATUS  DLinkedList__enRemoveBegin(DLinkedList_TypeDef* psList, void** pvData)
 {
     DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
     DLinkedListElement_TypeDef* psEndElement = (DLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         psEndElement = DLinkedList__psGetHead(psList);
         enStatus = DLinkedList__enRemove(psList, psEndElement, pvData);
     }
     return enStatus;
 }

 DLinkedList_nSTATUS  DLinkedList__enRemovePos(DLinkedList_TypeDef* psList, uint32_t u32Position, void** pvData)
 {
     DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
     DLinkedListElement_TypeDef* psElement = (DLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     uint32_t u32SizeForward = 0UL;
     uint32_t u32SizeBackward = 0UL;
     uint32_t u32SizeOptimum = 0UL;
     uint32_t u32Direction = 0UL;
     if((uint32_t) 0UL != (uint32_t) psList)
     {
         u32SizeList = DLinkedList__u32GetSize(psList);
          if(u32Position < u32SizeList)
          {
              if(0UL == u32Position) /*Remove Head*/
              {
                  enStatus = DLinkedList__enRemoveBegin(psList, pvData);
              }
              else if(u32Position == (u32SizeList - 1UL)) /*Remove Tail*/
              {
                  enStatus = DLinkedList__enRemoveEnd(psList, pvData);
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
                      enStatus = DLinkedList__enRemove(psList, psElement, pvData);
                  }
                  else /*Backward*/
                  {
                      psElement = DLinkedList__psGetTail(psList);
                      while(0UL != u32SizeOptimum)
                      {
                          psElement = DLinkedList__psGetElementPreviousNode(psElement);
                          u32SizeOptimum--;
                      }
                      enStatus = DLinkedList__enRemove(psList, psElement, pvData);
                  }
              }
          }
     }
     return enStatus;
 }


