/**
 *
 * @file CircularSingleLinkList_Remove.c
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
 * @verbatim 10 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/CircularSingleLinkList/xHeader/CircularSingleLinkList_Remove.h>

#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/List/CircularSingleLinkList_List.h>
#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/Element/CircularSingleLinkList_Element.h>

#include <stdlib.h>


 CircularSingleLinkList_nSTATUS CircularSingleLinkList__enRemoveNext(CircularSingleLinkList_TypeDef* psList,CircularSingleLinkListElement_TypeDef* psElement, void** pvData)
 {
     CircularSingleLinkList_nSTATUS enStatus = CircularSingleLinkList_enSTATUS_ERROR;
     CircularSingleLinkListElement_TypeDef* psOldElement = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psTailNode= (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psHeadElement = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psElementNextNode= (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psElementNextNextNode= (CircularSingleLinkListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0UL;

     if( ((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeReg = CircularSingleLinkList__u32GetSize(psList);
         if(0UL != u32SizeReg)
         {

             enStatus = CircularSingleLinkList_enSTATUS_OK;

             if((uint32_t)0UL == (uint32_t)psElement) /* Remove Head*/
             {
                 psElement =  CircularSingleLinkList__psGetTail(psList);
             }

             psElementNextNode = CircularSingleLinkList__psGetElementNextNode(psElement);
             *pvData = CircularSingleLinkList__pvGetElementData(psElementNextNode);
             psOldElement = psElementNextNode;

             if((uint32_t)psElement == (uint32_t)psElementNextNode) /*Remove Last element*/
             {
                 CircularSingleLinkList__vSetTail(psList,(CircularSingleLinkListElement_TypeDef*)0UL);
                 CircularSingleLinkList__vSetHead(psList,(CircularSingleLinkListElement_TypeDef*)0UL);
             }
             else
             {
                 psElementNextNextNode = CircularSingleLinkList__psGetElementNextNode(psElementNextNode);
                 CircularSingleLinkList__vSetElementNextNode(psElement,psElementNextNextNode);

                 psHeadElement = CircularSingleLinkList__psGetHead(psList);
                 psTailNode =  CircularSingleLinkList__psGetTail(psList);
                 if((uint32_t)psElementNextNode == (uint32_t)psHeadElement)
                 {
                     CircularSingleLinkList__vSetHead(psList, psElementNextNextNode);
                 }
                 if((uint32_t)psElementNextNode == (uint32_t)psTailNode)
                 {
                     CircularSingleLinkList__vSetTail(psList, psElement);
                 }
             }

             CircularSingleLinkList__vSetElementNextNode(psOldElement,  (CircularSingleLinkListElement_TypeDef *) 0UL);
             CircularSingleLinkList__vSetElementData(psOldElement,  (void *) 0UL);
             free(psOldElement);

             u32SizeReg--;
             CircularSingleLinkList__vSetSize(psList,u32SizeReg);
         }
     }
     return enStatus;
 }



 CircularSingleLinkList_nSTATUS CircularSingleLinkList__enRemove(CircularSingleLinkList_TypeDef* psList,CircularSingleLinkListElement_TypeDef* psElement, void** pvData)
 {
     CircularSingleLinkList_nSTATUS enStatus = CircularSingleLinkList_enSTATUS_ERROR;
     CircularSingleLinkListElement_TypeDef* psOldElement = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psHeadNextNode= (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psHeadElement = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psTailElement = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psElementNextNode= (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psElementNextNextNode= (CircularSingleLinkListElement_TypeDef*) 0UL ;
     void* psElementNextNodeData= (void*) 0UL ;
     void* psElementNodeData= (void*) 0UL ;
     uint32_t u32SizeReg = 0UL;

     if( ((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeReg = CircularSingleLinkList__u32GetSize(psList);
         if(0UL != u32SizeReg)
         {
             if((uint32_t)0UL == (uint32_t)psElement)
             {
                 enStatus = CircularSingleLinkList_enSTATUS_OK;
                 psHeadElement = CircularSingleLinkList__psGetHead(psList);

                 psHeadNextNode = CircularSingleLinkList__psGetElementNextNode(psHeadElement);
                 *pvData = CircularSingleLinkList__pvGetElementData(psHeadElement);
                 psOldElement = psHeadElement;

                 if((uint32_t)psHeadElement == (uint32_t)psHeadNextNode) /*Remove Last element*/
                 {
                     CircularSingleLinkList__vSetHead(psList, (CircularSingleLinkListElement_TypeDef*) 0UL);
                     CircularSingleLinkList__vSetTail(psList, (CircularSingleLinkListElement_TypeDef*) 0UL);
                 }
                 else
                 {
                     psTailElement = CircularSingleLinkList__psGetTail(psList);
                     CircularSingleLinkList__vSetHead(psList, psHeadNextNode);
                     CircularSingleLinkList__vSetElementNextNode(psTailElement,psHeadNextNode);
                 }

             }
             else
             {
                 psTailElement = CircularSingleLinkList__psGetTail(psList);
                 if(((uint32_t)psElement != (uint32_t)psTailElement) || (1UL == u32SizeReg))
                 {

                     enStatus = CircularSingleLinkList_enSTATUS_OK;

                     psElementNextNode = CircularSingleLinkList__psGetElementNextNode(psElement);
                     psElementNextNodeData = CircularSingleLinkList__pvGetElementData(psElementNextNode);
                     psElementNodeData = CircularSingleLinkList__pvGetElementData(psElement);
                     *pvData = psElementNodeData;
                     psOldElement = psElementNextNode;

                     psElementNextNextNode = CircularSingleLinkList__psGetElementNextNode(psElementNextNode);
                     if((uint32_t)psElementNextNode == (uint32_t) psElementNextNextNode) /*Last node*/
                     {
                         CircularSingleLinkList__vSetHead(psList, (CircularSingleLinkListElement_TypeDef*) 0UL);
                         CircularSingleLinkList__vSetTail(psList, (CircularSingleLinkListElement_TypeDef*) 0UL);
                     }
                     else
                     {
                         CircularSingleLinkList__vSetElementNextNode(psElement,psElementNextNextNode);
                         CircularSingleLinkList__vSetElementData(psElement,psElementNextNodeData);

                         if( (uint32_t)psTailElement == (uint32_t)psElementNextNode)
                         {
                             CircularSingleLinkList__vSetTail(psList,psElement);
                         }
                     }
                 }
             }

             if( CircularSingleLinkList_enSTATUS_OK == enStatus)
             {
                 CircularSingleLinkList__vSetElementNextNode(psOldElement,  (CircularSingleLinkListElement_TypeDef *) 0UL);
                 CircularSingleLinkList__vSetElementData(psOldElement,  (void *) 0UL);
                 free(psOldElement);

                 u32SizeReg--;
                 CircularSingleLinkList__vSetSize(psList,u32SizeReg);
             }
         }
     }
     return enStatus;
 }

 CircularSingleLinkList_nSTATUS  CircularSingleLinkList__enRemoveEnd(CircularSingleLinkList_TypeDef* psList, void** pvData)
 {
     CircularSingleLinkList_nSTATUS enStatus = CircularSingleLinkList_enSTATUS_ERROR;
     CircularSingleLinkListElement_TypeDef* psEndElement =(CircularSingleLinkListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeList = CircularSingleLinkList__u32GetSize(psList);
         if(1UL <  u32SizeList)
         {
             u32SizeList--;
             psEndElement = CircularSingleLinkList__psGetHead(psList);
             u32SizeList--;
             while( 0UL != u32SizeList)
             {
                 psEndElement = CircularSingleLinkList__psGetElementNextNode(psEndElement);
                 u32SizeList--;
             }
         }
         enStatus = CircularSingleLinkList__enRemoveNext(psList, psEndElement, pvData);
     }
     return enStatus;
 }

 CircularSingleLinkList_nSTATUS  CircularSingleLinkList__enRemoveBegin(CircularSingleLinkList_TypeDef* psList, void** pvData)
 {
     CircularSingleLinkList_nSTATUS enStatus = CircularSingleLinkList_enSTATUS_ERROR;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         enStatus = CircularSingleLinkList__enRemoveNext(psList, (CircularSingleLinkListElement_TypeDef*) 0UL, pvData);
     }
     return enStatus;
 }



 CircularSingleLinkList_nSTATUS  CircularSingleLinkList__enRemovePos(CircularSingleLinkList_TypeDef* psList,uint32_t u32Position, void** pvData)
 {
     CircularSingleLinkList_nSTATUS enStatus = CircularSingleLinkList_enSTATUS_ERROR;
     CircularSingleLinkListElement_TypeDef* psElement =(CircularSingleLinkListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeList = CircularSingleLinkList__u32GetSize(psList);
         if(u32Position < u32SizeList)
         {
             if(0UL !=  u32Position)
             {
                 psElement = CircularSingleLinkList__psGetHead(psList);
                 u32Position--;
                 while( 0UL != u32Position)
                 {
                     psElement = CircularSingleLinkList__psGetElementNextNode(psElement);
                     u32Position--;
                 }
             }
             enStatus = CircularSingleLinkList__enRemoveNext(psList, psElement, pvData);
         }
     }
     return enStatus;
 }


