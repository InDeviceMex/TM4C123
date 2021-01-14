/**
 *
 * @file CircularDoubleLinkList_Remove.c
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

#include <xUtils/DataStructure/CircularDoubleLinkList/xHeader/CircularDoubleLinkList_Remove.h>

#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/List/CircularDoubleLinkList_List.h>
#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/Element/CircularDoubleLinkList_Element.h>

#include <stdlib.h>


 CircularDoubleLinkList_nSTATUS CircularDoubleLinkList__enRemove(CircularDoubleLinkList_TypeDef* psList,CircularDoubleLinkListElement_TypeDef* psElement, void** pvData)
 {
     CircularDoubleLinkList_nSTATUS enStatus = CircularDoubleLinkList_enSTATUS_ERROR;
     CircularDoubleLinkListElement_TypeDef* psHeadElement = (CircularDoubleLinkListElement_TypeDef*) 0UL ;
     CircularDoubleLinkListElement_TypeDef* psElementNextNode= (CircularDoubleLinkListElement_TypeDef*) 0UL ;
     CircularDoubleLinkListElement_TypeDef* psElementPreviousNode= (CircularDoubleLinkListElement_TypeDef*) 0UL ;
     CircularDoubleLinkListElement_TypeDef* psHeadNode= (CircularDoubleLinkListElement_TypeDef*) 0UL ;
     CircularDoubleLinkListElement_TypeDef* psTailNode= (CircularDoubleLinkListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0UL;

     if( ((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeReg = CircularDoubleLinkList__u32GetSize(psList);
         if(((uint32_t)0UL != (uint32_t)psElement) || (0UL != u32SizeReg))
         {
             enStatus = CircularDoubleLinkList_enSTATUS_OK;
             *pvData = CircularDoubleLinkList__pvGetElementData(psElement);

             psHeadNode = CircularDoubleLinkList__psGetHead(psList);
             psTailNode = CircularDoubleLinkList__psGetTail(psList);

             psElementNextNode = CircularDoubleLinkList__psGetElementNextNode(psElement);
             psElementPreviousNode = CircularDoubleLinkList__psGetElementPreviousNode(psElement);

             if((uint32_t)psHeadNode == (uint32_t)psTailNode)/*Last Element*/
             {
                 CircularDoubleLinkList__vSetTail(psList, (CircularDoubleLinkListElement_TypeDef*) 0UL);
                 CircularDoubleLinkList__vSetHead(psList, (CircularDoubleLinkListElement_TypeDef*) 0UL);
             }
             else
             {
                 if((uint32_t)psHeadNode == (uint32_t)psElement)
                 {
                     CircularDoubleLinkList__vSetHead(psList,psElementNextNode);
                 }
                 if((uint32_t)psTailNode == (uint32_t)psElement)
                 {
                     CircularDoubleLinkList__vSetTail(psList,psElementPreviousNode);
                 }
                 CircularDoubleLinkList__vSetElementNextNode(psElementPreviousNode, psElementNextNode);
                 CircularDoubleLinkList__vSetElementPreviousNode(psElementNextNode, psElementPreviousNode);
             }

             CircularDoubleLinkList__vSetElementNextNode(psElement,  (CircularDoubleLinkListElement_TypeDef *) 0UL);
             CircularDoubleLinkList__vSetElementPreviousNode(psElement,  (CircularDoubleLinkListElement_TypeDef *) 0UL);
             CircularDoubleLinkList__vSetElementData(psElement,  (void *) 0UL);
             free(psElement);

             u32SizeReg--;
             CircularDoubleLinkList__vSetSize(psList,u32SizeReg);
         }
     }
     return enStatus;
 }


 CircularDoubleLinkList_nSTATUS CircularDoubleLinkList__enRemoveNext(CircularDoubleLinkList_TypeDef* psList,const CircularDoubleLinkListElement_TypeDef* psElement, void** pvData)
 {
     CircularDoubleLinkList_nSTATUS enStatus = CircularDoubleLinkList_enSTATUS_ERROR;
     CircularDoubleLinkListElement_TypeDef* psElementNextNode= (CircularDoubleLinkListElement_TypeDef*) 0UL ;

     if( ((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)psElement)&& ((uint32_t)0UL != (uint32_t)pvData))
     {
         psElementNextNode = CircularDoubleLinkList__psGetElementNextNode(psElement);
         enStatus = CircularDoubleLinkList__enRemove(psList,psElementNextNode, pvData);
     }
     return enStatus;
 }

 CircularDoubleLinkList_nSTATUS CircularDoubleLinkList__enRemovePrevious(CircularDoubleLinkList_TypeDef* psList, const CircularDoubleLinkListElement_TypeDef* psElement, void** pvData)
 {
     CircularDoubleLinkList_nSTATUS enStatus = CircularDoubleLinkList_enSTATUS_ERROR;
     CircularDoubleLinkListElement_TypeDef* psElementPreviousNode= (CircularDoubleLinkListElement_TypeDef*) 0UL ;

     if( ((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)psElement)&& ((uint32_t)0UL != (uint32_t)pvData))
     {
         psElementPreviousNode = CircularDoubleLinkList__psGetElementPreviousNode(psElement);
         enStatus = CircularDoubleLinkList__enRemove(psList,psElementPreviousNode, pvData);
     }
     return enStatus;
 }

 CircularDoubleLinkList_nSTATUS  CircularDoubleLinkList__enRemoveEnd(CircularDoubleLinkList_TypeDef* psList, void** pvData)
 {
     CircularDoubleLinkList_nSTATUS enStatus = CircularDoubleLinkList_enSTATUS_ERROR;
     CircularDoubleLinkListElement_TypeDef* psEndElement =(CircularDoubleLinkListElement_TypeDef*) 0UL;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         psEndElement =  CircularDoubleLinkList__psGetTail(psList);
         enStatus = CircularDoubleLinkList__enRemove(psList, psEndElement, pvData);
     }
     return enStatus;
 }

 CircularDoubleLinkList_nSTATUS  CircularDoubleLinkList__enRemoveBegin(CircularDoubleLinkList_TypeDef* psList, void** pvData)
 {
     CircularDoubleLinkList_nSTATUS enStatus = CircularDoubleLinkList_enSTATUS_ERROR;
     CircularDoubleLinkListElement_TypeDef* psEndElement =(CircularDoubleLinkListElement_TypeDef*) 0UL;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         psEndElement =  CircularDoubleLinkList__psGetHead(psList);
         enStatus = CircularDoubleLinkList__enRemove(psList, psEndElement, pvData);
     }
     return enStatus;
 }

 CircularDoubleLinkList_nSTATUS  CircularDoubleLinkList__enRemovePos(CircularDoubleLinkList_TypeDef* psList,uint32_t u32Position, void** pvData)
 {
     CircularDoubleLinkList_nSTATUS enStatus = CircularDoubleLinkList_enSTATUS_ERROR;
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
              if(0UL ==u32Position) /*Remove Head*/
              {
                  enStatus = CircularDoubleLinkList__enRemoveBegin(psList,pvData);
              }
              else if(u32Position == (u32SizeList - 1UL)) /*Remove Tail*/
              {
                  enStatus = CircularDoubleLinkList__enRemoveEnd(psList,pvData);
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
                      enStatus = CircularDoubleLinkList__enRemove(psList, psElement, pvData);
                  }
                  else /*Backward*/
                  {
                      psElement = CircularDoubleLinkList__psGetTail(psList);
                      while(0UL != u32SizeOptimum)
                      {
                          psElement = CircularDoubleLinkList__psGetElementPreviousNode(psElement);
                          u32SizeOptimum--;
                      }
                      enStatus = CircularDoubleLinkList__enRemove(psList, psElement, pvData);
                  }
              }
          }
     }
     return enStatus;
 }


