/**
 *
 * @file DoubleLinkList_Remove.c
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
#include <xUtils/DataStructure/DoubleLinkList/xHeader/DoubleLinkList_Remove.h>

#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/List/DoubleLinkList_List.h>
#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/Element/DoubleLinkList_Element.h>

#include <stdlib.h>


 DoubleLinkList_nSTATUS DoubleLinkList__enRemove(DoubleLinkList_TypeDef* psList,DoubleLinkListElement_TypeDef* psElement, void** pvData)
 {
     DoubleLinkList_nSTATUS enStatus = DoubleLinkList_enSTATUS_ERROR;
     DoubleLinkListElement_TypeDef* psHeadElement = (DoubleLinkListElement_TypeDef*) 0UL ;
     DoubleLinkListElement_TypeDef* psElementNextNode= (DoubleLinkListElement_TypeDef*) 0UL ;
     DoubleLinkListElement_TypeDef* psElementPreviousNode= (DoubleLinkListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0UL;

     if( ((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeReg = DoubleLinkList__u32GetSize(psList);
         if(((uint32_t)0UL != (uint32_t)psElement) || (0UL != u32SizeReg))
         {
             enStatus = DoubleLinkList_enSTATUS_OK;
             *pvData = DoubleLinkList__pvGetElementData(psElement);
             psHeadElement = DoubleLinkList__psGetHead(psList);
             if((uint32_t)psElement == (uint32_t)psHeadElement)
             {
                 psElementNextNode = DoubleLinkList__psGetElementNextNode(psElement);
                 DoubleLinkList__vSetHead(psList, psElementNextNode);

                 if((uint32_t)0UL == psElementNextNode)
                 {
                     DoubleLinkList__vSetTail(psList, (DoubleLinkListElement_TypeDef*) 0UL);
                 }
                 else
                 {
                     DoubleLinkList__vSetElementPreviousNode(psElementNextNode, (DoubleLinkListElement_TypeDef*) 0UL);
                 }
             }
             else
             {
                 psElementNextNode = DoubleLinkList__psGetElementNextNode(psElement);
                 psElementPreviousNode = DoubleLinkList__psGetElementPreviousNode(psElement);

                 DoubleLinkList__vSetElementNextNode(psElementPreviousNode, psElementNextNode);

                 if((uint32_t)0UL == psElementNextNode)
                 {
                     DoubleLinkList__vSetTail(psList,psElementPreviousNode);
                 }
                 else
                 {
                     DoubleLinkList__vSetElementPreviousNode(psElementNextNode, psElementPreviousNode);
                 }
             }

             free(psElement);

             psElement->psNextNode = (DoubleLinkListElement_TypeDef *) 0UL;
             psElement->pvDataContainer = (void *) 0UL;
             u32SizeReg--;
             DoubleLinkList__vSetSize(psList,u32SizeReg);
         }
     }
     return enStatus;
 }


 DoubleLinkList_nSTATUS DoubleLinkList__enRemoveNext(DoubleLinkList_TypeDef* psList,const DoubleLinkListElement_TypeDef* psElement, void** pvData)
 {
     DoubleLinkList_nSTATUS enStatus = DoubleLinkList_enSTATUS_ERROR;
     DoubleLinkListElement_TypeDef* psElementNextNode= (DoubleLinkListElement_TypeDef*) 0UL ;

     if( ((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)psElement)&& ((uint32_t)0UL != (uint32_t)pvData))
     {
         psElementNextNode = DoubleLinkList__psGetElementNextNode(psElement);
         enStatus = DoubleLinkList__enRemove(psList,psElementNextNode, pvData);
     }
     return enStatus;
 }

 DoubleLinkList_nSTATUS DoubleLinkList__enRemovePrevious(DoubleLinkList_TypeDef* psList, const DoubleLinkListElement_TypeDef* psElement, void** pvData)
 {
     DoubleLinkList_nSTATUS enStatus = DoubleLinkList_enSTATUS_ERROR;
     DoubleLinkListElement_TypeDef* psElementPreviousNode= (DoubleLinkListElement_TypeDef*) 0UL ;

     if( ((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)psElement)&& ((uint32_t)0UL != (uint32_t)pvData))
     {
         psElementPreviousNode = DoubleLinkList__psGetElementPreviousNode(psElement);
         enStatus = DoubleLinkList__enRemove(psList,psElementPreviousNode, pvData);
     }
     return enStatus;
 }

 DoubleLinkList_nSTATUS  DoubleLinkList__enRemoveEnd(DoubleLinkList_TypeDef* psList, void** pvData)
 {
     DoubleLinkList_nSTATUS enStatus = DoubleLinkList_enSTATUS_ERROR;
     DoubleLinkListElement_TypeDef* psEndElement =(DoubleLinkListElement_TypeDef*) 0UL;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         psEndElement =  DoubleLinkList__psGetTail(psList);
         enStatus = DoubleLinkList__enRemove(psList, psEndElement, pvData);
     }
     return enStatus;
 }

 DoubleLinkList_nSTATUS  DoubleLinkList__enRemoveBegin(DoubleLinkList_TypeDef* psList, void** pvData)
 {
     DoubleLinkList_nSTATUS enStatus = DoubleLinkList_enSTATUS_ERROR;
     DoubleLinkListElement_TypeDef* psEndElement =(DoubleLinkListElement_TypeDef*) 0UL;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         psEndElement =  DoubleLinkList__psGetHead(psList);
         enStatus = DoubleLinkList__enRemove(psList, psEndElement, pvData);
     }
     return enStatus;
 }

 DoubleLinkList_nSTATUS  DoubleLinkList__enRemovePos(DoubleLinkList_TypeDef* psList,uint32_t u32Position, void** pvData)
 {
     DoubleLinkList_nSTATUS enStatus = DoubleLinkList_enSTATUS_ERROR;
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
                  enStatus = DoubleLinkList__enRemoveBegin(psList,pvData);
              }
              else if(u32Position == (u32SizeList - 1UL)) /*Remove Tail*/
              {
                  enStatus = DoubleLinkList__enRemoveEnd(psList,pvData);
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
                      enStatus = DoubleLinkList__enRemove(psList, psElement, pvData);
                  }
                  else /*Backward*/
                  {
                      psElement = DoubleLinkList__psGetTail(psList);
                      while(0UL != u32SizeOptimum)
                      {
                          psElement = DoubleLinkList__psGetElementPreviousNode(psElement);
                          u32SizeOptimum--;
                      }
                      enStatus = DoubleLinkList__enRemove(psList, psElement, pvData);
                  }
              }
          }
     }
     return enStatus;
 }


