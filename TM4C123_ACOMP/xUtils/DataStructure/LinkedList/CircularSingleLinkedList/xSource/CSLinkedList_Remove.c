/**
 *
 * @file CSLinkedList_Remove.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Remove.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/CSLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/Element/CSLinkedList_Element.h>

#include <stdlib.h>


 CSLinkedList_nSTATUS CSLinkedList__enRemoveNext(CSLinkedList_TypeDef* psList, CSLinkedListElement_TypeDef* psElement, void** pvData)
 {
     CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
     CSLinkedListElement_TypeDef* psOldElement = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psTailNode= (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psHeadElement = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psElementNextNode= (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psElementNextNextNode= (CSLinkedListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         u32SizeReg = CSLinkedList__u32GetSize(psList);
         if(0UL != u32SizeReg)
         {

             enStatus = CSLinkedList_enSTATUS_OK;

             if((uint32_t) 0UL == (uint32_t) psElement) /* Remove Head*/
             {
                 psElement = CSLinkedList__psGetTail(psList);
             }

             psElementNextNode = CSLinkedList__psGetElementNextNode(psElement);
             *pvData = CSLinkedList__pvGetElementData(psElementNextNode);
             psOldElement = psElementNextNode;

             if((uint32_t) psElement == (uint32_t) psElementNextNode) /*Remove Last element*/
             {
                 CSLinkedList__vSetTail(psList,(CSLinkedListElement_TypeDef*)0UL);
                 CSLinkedList__vSetHead(psList,(CSLinkedListElement_TypeDef*)0UL);
             }
             else
             {
                 psElementNextNextNode = CSLinkedList__psGetElementNextNode(psElementNextNode);
                 CSLinkedList__vSetElementNextNode(psElement, psElementNextNextNode);

                 psHeadElement = CSLinkedList__psGetHead(psList);
                 psTailNode = CSLinkedList__psGetTail(psList);
                 if((uint32_t) psElementNextNode == (uint32_t) psHeadElement)
                 {
                     CSLinkedList__vSetHead(psList, psElementNextNextNode);
                 }
                 if((uint32_t) psElementNextNode == (uint32_t) psTailNode)
                 {
                     CSLinkedList__vSetTail(psList, psElement);
                 }
             }

             CSLinkedList__vSetElementNextNode(psOldElement,  (CSLinkedListElement_TypeDef *) 0UL);
             CSLinkedList__vSetElementData(psOldElement,  (void *) 0UL);
             free(psOldElement);
             psOldElement = (CSLinkedListElement_TypeDef*) 0UL;

             u32SizeReg--;
             CSLinkedList__vSetSize(psList, u32SizeReg);
         }
     }
     return enStatus;
 }



 CSLinkedList_nSTATUS CSLinkedList__enRemove(CSLinkedList_TypeDef* psList, CSLinkedListElement_TypeDef* psElement, void** pvData)
 {
     CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
     CSLinkedListElement_TypeDef* psOldElement = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psHeadNextNode= (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psHeadElement = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psTailElement = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psElementNextNode= (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psElementNextNextNode= (CSLinkedListElement_TypeDef*) 0UL ;
     void* psElementNextNodeData= (void*) 0UL ;
     void* psElementNodeData= (void*) 0UL ;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         u32SizeReg = CSLinkedList__u32GetSize(psList);
         if(0UL != u32SizeReg)
         {
             if((uint32_t) 0UL == (uint32_t) psElement)
             {
                 enStatus = CSLinkedList_enSTATUS_OK;
                 psHeadElement = CSLinkedList__psGetHead(psList);

                 psHeadNextNode = CSLinkedList__psGetElementNextNode(psHeadElement);
                 *pvData = CSLinkedList__pvGetElementData(psHeadElement);
                 psOldElement = psHeadElement;

                 if((uint32_t) psHeadElement == (uint32_t) psHeadNextNode) /*Remove Last element*/
                 {
                     CSLinkedList__vSetHead(psList, (CSLinkedListElement_TypeDef*) 0UL);
                     CSLinkedList__vSetTail(psList, (CSLinkedListElement_TypeDef*) 0UL);
                 }
                 else
                 {
                     psTailElement = CSLinkedList__psGetTail(psList);
                     CSLinkedList__vSetHead(psList, psHeadNextNode);
                     CSLinkedList__vSetElementNextNode(psTailElement, psHeadNextNode);
                 }

             }
             else
             {
                 psTailElement = CSLinkedList__psGetTail(psList);
                 if(((uint32_t) psElement != (uint32_t) psTailElement) || (1UL == u32SizeReg))
                 {

                     enStatus = CSLinkedList_enSTATUS_OK;

                     psElementNextNode = CSLinkedList__psGetElementNextNode(psElement);
                     psElementNextNodeData = CSLinkedList__pvGetElementData(psElementNextNode);
                     psElementNodeData = CSLinkedList__pvGetElementData(psElement);
                     *pvData = psElementNodeData;
                     psOldElement = psElementNextNode;

                     psElementNextNextNode = CSLinkedList__psGetElementNextNode(psElementNextNode);
                     if((uint32_t) psElementNextNode == (uint32_t) psElementNextNextNode) /*Last node*/
                     {
                         CSLinkedList__vSetHead(psList, (CSLinkedListElement_TypeDef*) 0UL);
                         CSLinkedList__vSetTail(psList, (CSLinkedListElement_TypeDef*) 0UL);
                     }
                     else
                     {
                         CSLinkedList__vSetElementNextNode(psElement, psElementNextNextNode);
                         CSLinkedList__vSetElementData(psElement, psElementNextNodeData);

                         if((uint32_t) psTailElement == (uint32_t) psElementNextNode)
                         {
                             CSLinkedList__vSetTail(psList, psElement);
                         }
                     }
                 }
             }

             if(CSLinkedList_enSTATUS_OK == enStatus)
             {
                 CSLinkedList__vSetElementNextNode(psOldElement,  (CSLinkedListElement_TypeDef *) 0UL);
                 CSLinkedList__vSetElementData(psOldElement,  (void *) 0UL);
                 free(psOldElement);
                 psOldElement = (CSLinkedListElement_TypeDef*) 0UL;

                 u32SizeReg--;
                 CSLinkedList__vSetSize(psList, u32SizeReg);
             }
         }
     }
     return enStatus;
 }

 CSLinkedList_nSTATUS  CSLinkedList__enRemoveEnd(CSLinkedList_TypeDef* psList, void** pvData)
 {
     CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
     CSLinkedListElement_TypeDef* psEndElement = (CSLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         u32SizeList = CSLinkedList__u32GetSize(psList);
         if(1UL <  u32SizeList)
         {
             u32SizeList--;
             psEndElement = CSLinkedList__psGetHead(psList);
             u32SizeList--;
             while(0UL != u32SizeList)
             {
                 psEndElement = CSLinkedList__psGetElementNextNode(psEndElement);
                 u32SizeList--;
             }
         }
         enStatus = CSLinkedList__enRemoveNext(psList, psEndElement, pvData);
     }
     return enStatus;
 }

 CSLinkedList_nSTATUS  CSLinkedList__enRemoveBegin(CSLinkedList_TypeDef* psList, void** pvData)
 {
     CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         enStatus = CSLinkedList__enRemoveNext(psList, (CSLinkedListElement_TypeDef*) 0UL, pvData);
     }
     return enStatus;
 }



 CSLinkedList_nSTATUS  CSLinkedList__enRemovePos(CSLinkedList_TypeDef* psList, uint32_t u32Position, void** pvData)
 {
     CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
     CSLinkedListElement_TypeDef* psElement = (CSLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList) && ((uint32_t) 0UL != (uint32_t) pvData))
     {
         u32SizeList = CSLinkedList__u32GetSize(psList);
         if(u32Position < u32SizeList)
         {
             if(0UL != u32Position)
             {
                 psElement = CSLinkedList__psGetHead(psList);
                 u32Position--;
                 while(0UL != u32Position)
                 {
                     psElement = CSLinkedList__psGetElementNextNode(psElement);
                     u32Position--;
                 }
             }
             enStatus = CSLinkedList__enRemoveNext(psList, psElement, pvData);
         }
     }
     return enStatus;
 }


