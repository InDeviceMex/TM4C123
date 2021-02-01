/**
 *
 * @file CDLinkedList_Remove.c
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

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Remove.h>

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/CDLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Element/CDLinkedList_Element.h>

#include <stdlib.h>


 CDLinkedList_nSTATUS CDLinkedList__enRemove(CDLinkedList_TypeDef* psList,CDLinkedListElement_TypeDef* psElement, void** pvData)
 {
     CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
     CDLinkedListElement_TypeDef* psElementNextNode= (CDLinkedListElement_TypeDef*) 0UL ;
     CDLinkedListElement_TypeDef* psElementPreviousNode= (CDLinkedListElement_TypeDef*) 0UL ;
     CDLinkedListElement_TypeDef* psHeadNode= (CDLinkedListElement_TypeDef*) 0UL ;
     CDLinkedListElement_TypeDef* psTailNode= (CDLinkedListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         u32SizeReg = CDLinkedList__u32GetSize(psList);
         if(((uint32_t) 0UL != (uint32_t) psElement) || (0UL != u32SizeReg))
         {
             enStatus = CDLinkedList_enSTATUS_OK;
             *pvData = CDLinkedList__pvGetElementData(psElement);

             psHeadNode = CDLinkedList__psGetHead(psList);
             psTailNode = CDLinkedList__psGetTail(psList);

             psElementNextNode = CDLinkedList__psGetElementNextNode(psElement);
             psElementPreviousNode = CDLinkedList__psGetElementPreviousNode(psElement);

             if((uint32_t) psHeadNode == (uint32_t) psTailNode)/*Last Element*/
             {
                 CDLinkedList__vSetTail(psList, (CDLinkedListElement_TypeDef*) 0UL);
                 CDLinkedList__vSetHead(psList, (CDLinkedListElement_TypeDef*) 0UL);
             }
             else
             {
                 if((uint32_t) psHeadNode == (uint32_t) psElement)
                 {
                     CDLinkedList__vSetHead(psList,psElementNextNode);
                 }
                 if((uint32_t) psTailNode == (uint32_t) psElement)
                 {
                     CDLinkedList__vSetTail(psList,psElementPreviousNode);
                 }
                 CDLinkedList__vSetElementNextNode(psElementPreviousNode, psElementNextNode);
                 CDLinkedList__vSetElementPreviousNode(psElementNextNode, psElementPreviousNode);
             }

             CDLinkedList__vSetElementNextNode(psElement,  (CDLinkedListElement_TypeDef *) 0UL);
             CDLinkedList__vSetElementPreviousNode(psElement,  (CDLinkedListElement_TypeDef *) 0UL);
             CDLinkedList__vSetElementData(psElement,  (void *) 0UL);
             free(psElement);
             psElement = (CDLinkedListElement_TypeDef*) 0UL;

             u32SizeReg--;
             CDLinkedList__vSetSize(psList,u32SizeReg);
         }
     }
     return enStatus;
 }


 CDLinkedList_nSTATUS CDLinkedList__enRemoveNext(CDLinkedList_TypeDef* psList,const CDLinkedListElement_TypeDef* psElement, void** pvData)
 {
     CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
     CDLinkedListElement_TypeDef* psElementNextNode= (CDLinkedListElement_TypeDef*) 0UL ;

     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) psElement) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         psElementNextNode = CDLinkedList__psGetElementNextNode(psElement);
         enStatus = CDLinkedList__enRemove(psList,psElementNextNode, pvData);
     }
     return enStatus;
 }

 CDLinkedList_nSTATUS CDLinkedList__enRemovePrevious(CDLinkedList_TypeDef* psList, const CDLinkedListElement_TypeDef* psElement, void** pvData)
 {
     CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
     CDLinkedListElement_TypeDef* psElementPreviousNode= (CDLinkedListElement_TypeDef*) 0UL ;

     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) psElement) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         psElementPreviousNode = CDLinkedList__psGetElementPreviousNode(psElement);
         enStatus = CDLinkedList__enRemove(psList,psElementPreviousNode, pvData);
     }
     return enStatus;
 }

 CDLinkedList_nSTATUS  CDLinkedList__enRemoveEnd(CDLinkedList_TypeDef* psList, void** pvData)
 {
     CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
     CDLinkedListElement_TypeDef* psEndElement = (CDLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         psEndElement = CDLinkedList__psGetTail(psList);
         enStatus = CDLinkedList__enRemove(psList, psEndElement, pvData);
     }
     return enStatus;
 }

 CDLinkedList_nSTATUS  CDLinkedList__enRemoveBegin(CDLinkedList_TypeDef* psList, void** pvData)
 {
     CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
     CDLinkedListElement_TypeDef* psEndElement = (CDLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         psEndElement = CDLinkedList__psGetHead(psList);
         enStatus = CDLinkedList__enRemove(psList, psEndElement, pvData);
     }
     return enStatus;
 }

 CDLinkedList_nSTATUS  CDLinkedList__enRemovePos(CDLinkedList_TypeDef* psList,uint32_t u32Position, void** pvData)
 {
     CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
     CDLinkedListElement_TypeDef* psElement = (CDLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     uint32_t u32SizeForward = 0UL;
     uint32_t u32SizeBackward= 0UL;
     uint32_t u32SizeOptimum= 0UL;
     uint32_t u32Direction= 0UL;
     if((uint32_t) 0UL != (uint32_t) psList)
     {
         u32SizeList = CDLinkedList__u32GetSize(psList);
          if(u32Position < u32SizeList)
          {
              if(0UL == u32Position) /*Remove Head*/
              {
                  enStatus = CDLinkedList__enRemoveBegin(psList,pvData);
              }
              else if(u32Position == (u32SizeList - 1UL)) /*Remove Tail*/
              {
                  enStatus = CDLinkedList__enRemoveEnd(psList,pvData);
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
                      psElement = CDLinkedList__psGetHead(psList);
                      while(0UL != u32SizeOptimum)
                      {
                          psElement = CDLinkedList__psGetElementNextNode(psElement);
                          u32SizeOptimum--;
                      }
                      enStatus = CDLinkedList__enRemove(psList, psElement, pvData);
                  }
                  else /*Backward*/
                  {
                      psElement = CDLinkedList__psGetTail(psList);
                      while(0UL != u32SizeOptimum)
                      {
                          psElement = CDLinkedList__psGetElementPreviousNode(psElement);
                          u32SizeOptimum--;
                      }
                      enStatus = CDLinkedList__enRemove(psList, psElement, pvData);
                  }
              }
          }
     }
     return enStatus;
 }


