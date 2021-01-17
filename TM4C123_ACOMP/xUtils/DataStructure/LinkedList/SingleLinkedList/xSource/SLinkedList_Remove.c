/**
 *
 * @file SLinkedList_Remove.c
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
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Remove.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/SLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/SLinkedList_Element.h>

#include <stdlib.h>


 SLinkedList_nSTATUS SLinkedList__enRemoveNext(SLinkedList_TypeDef* psList,SLinkedListElement_TypeDef* psElement, void** pvData)
 {
     SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* psOldElement = (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* psHeadNextNode= (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* psHeadData = (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* psElementNextNode= (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* psElementNextNextNode= (SLinkedListElement_TypeDef*) 0UL ;
     void* psElementNextNodeData= (void*) 0UL ;
     uint32_t u32SizeReg = 0UL;

     if( ((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeReg = SLinkedList__u32GetSize(psList);
         if(0UL != u32SizeReg)
         {
             if((uint32_t)0UL == (uint32_t)psElement)
             {
                 enStatus = SLinkedList_enSTATUS_OK;
                 psHeadData = SLinkedList__psGetHead(psList);
                 *pvData = SLinkedList__pvGetElementData(psHeadData);
                 psOldElement = psHeadData;
                 psHeadNextNode = SLinkedList__psGetElementNextNode(psHeadData);
                 SLinkedList__vSetHead(psList, psHeadNextNode);
                 if(1UL == u32SizeReg)
                 {
                     SLinkedList__vSetTail(psList,(SLinkedListElement_TypeDef*)0UL);
                 }
             }
             else
             {
                 if((uint32_t)0UL != (uint32_t)psElement->psNextNode)
                 {
                     enStatus = SLinkedList_enSTATUS_OK;

                     psElementNextNode = SLinkedList__psGetElementNextNode(psElement);
                     psElementNextNodeData = SLinkedList__pvGetElementData(psElementNextNode);
                     *pvData = psElementNextNodeData;
                     psOldElement = psElementNextNode;

                     psElementNextNextNode = SLinkedList__psGetElementNextNode(psElementNextNode);
                     SLinkedList__vSetElementNextNode(psElement,psElementNextNextNode);


                     psElementNextNode = SLinkedList__psGetElementNextNode(psElement);
                     if( (uint32_t)0UL == (uint32_t)psElementNextNode)
                     {
                         SLinkedList__vSetTail(psList,(SLinkedListElement_TypeDef*)psElement);
                     }
                 }
             }

             if(SLinkedList_enSTATUS_OK == enStatus)
             {
                 SLinkedList__vSetElementNextNode(psOldElement,  (SLinkedListElement_TypeDef *) 0UL);
                 SLinkedList__vSetElementData(psOldElement,  (void *) 0UL);
                 free(psOldElement);
                 psOldElement = (SLinkedListElement_TypeDef*) 0UL;

                 u32SizeReg--;
                 SLinkedList__vSetSize(psList,u32SizeReg);
             }
         }
     }
     return enStatus;
 }

 SLinkedList_nSTATUS SLinkedList__enRemove(SLinkedList_TypeDef* psList,SLinkedListElement_TypeDef* psElement, void** pvData)
 {
     SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* psOldElement = (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* psHeadNextNode= (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* psHeadData = (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* psElementNextNode= (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* psElementNextNextNode= (SLinkedListElement_TypeDef*) 0UL ;
     void* psElementNextNodeData= (void*) 0UL ;
     void* psElementNodeData= (void*) 0UL ;
     uint32_t u32SizeReg = 0UL;

     if( ((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeReg = SLinkedList__u32GetSize(psList);
         if(0UL != u32SizeReg)
         {
             if((uint32_t)0UL == (uint32_t)psElement)
             {
                 enStatus = SLinkedList_enSTATUS_OK;
                 psHeadData = SLinkedList__psGetHead(psList);
                 *pvData = SLinkedList__pvGetElementData(psHeadData);
                 psOldElement = psHeadData;
                 psHeadNextNode = SLinkedList__psGetElementNextNode(psHeadData);
                 SLinkedList__vSetHead(psList, psHeadNextNode);
                 if(1UL == u32SizeReg)
                 {
                     SLinkedList__vSetTail(psList,(SLinkedListElement_TypeDef*)0UL);
                 }
             }
             else
             {
                 if((uint32_t)0UL != (uint32_t)psElement->psNextNode)
                 {
                     enStatus = SLinkedList_enSTATUS_OK;

                     psElementNextNode = SLinkedList__psGetElementNextNode(psElement);
                     psElementNextNodeData = SLinkedList__pvGetElementData(psElementNextNode);
                     psElementNodeData = SLinkedList__pvGetElementData(psElement);
                     *pvData = psElementNodeData;
                     psOldElement = psElementNextNode;

                     psElementNextNextNode = SLinkedList__psGetElementNextNode(psElementNextNode);
                     SLinkedList__vSetElementNextNode(psElement,psElementNextNextNode);
                     SLinkedList__vSetElementData(psElement,psElementNextNodeData);


                     psElementNextNode = SLinkedList__psGetElementNextNode(psElement);
                     if( (uint32_t)0UL == (uint32_t)psElementNextNode)
                     {
                         SLinkedList__vSetTail(psList,(SLinkedListElement_TypeDef*)psElement);
                     }
                 }
             }

             if( SLinkedList_enSTATUS_OK  == enStatus)
             {
                 SLinkedList__vSetElementNextNode(psOldElement,  (SLinkedListElement_TypeDef *) 0UL);
                 SLinkedList__vSetElementData(psOldElement,  (void *) 0UL);
                 free(psOldElement);
                 psOldElement = (SLinkedListElement_TypeDef*) 0UL;

                 u32SizeReg--;
                 SLinkedList__vSetSize(psList,u32SizeReg);
             }
         }
     }
     return enStatus;
 }

 SLinkedList_nSTATUS  SLinkedList__enRemoveEnd(SLinkedList_TypeDef* psList, void** pvData)
 {
     SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* psEndElement =(SLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeList = SLinkedList__u32GetSize(psList);
         if(1UL <  u32SizeList)
         {
             u32SizeList--;
             psEndElement = SLinkedList__psGetHead(psList);
             u32SizeList--;
             while( 0UL != u32SizeList)
             {
                 psEndElement = SLinkedList__psGetElementNextNode(psEndElement);
                 u32SizeList--;
             }
         }
         enStatus = SLinkedList__enRemoveNext(psList, psEndElement, pvData);
     }
     return enStatus;
 }

 SLinkedList_nSTATUS  SLinkedList__enRemoveBegin(SLinkedList_TypeDef* psList, void** pvData)
 {
     SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         enStatus = SLinkedList__enRemoveNext(psList, (SLinkedListElement_TypeDef*) 0UL, pvData);
     }
     return enStatus;
 }

 SLinkedList_nSTATUS  SLinkedList__enRemovePos(SLinkedList_TypeDef* psList,uint32_t u32Position, void** pvData)
 {
     SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* psElement =(SLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeList = SLinkedList__u32GetSize(psList);
         if(u32Position < u32SizeList)
         {
             if(0UL !=  u32Position)
             {
                 psElement = SLinkedList__psGetHead(psList);
                 u32Position--;
                 while( 0UL != u32Position)
                 {
                     psElement = SLinkedList__psGetElementNextNode(psElement);
                     u32Position--;
                 }
             }
             enStatus = SLinkedList__enRemoveNext(psList, psElement, pvData);
         }
     }
     return enStatus;
 }

