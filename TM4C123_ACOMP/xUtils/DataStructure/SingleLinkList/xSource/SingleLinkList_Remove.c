/**
 *
 * @file SingleLinkList_Remove.c
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

#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Remove.h>

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/SingleLinkList_List.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/Element/SingleLinkList_Element.h>

#include <stdlib.h>


 SingleLinkList_nSTATUS SingleLinkList__enRemoveNext(SingleLinkList_TypeDef* psList,SingleLinkListElement_TypeDef* psElement, void** pvData)
 {
     SingleLinkList_nSTATUS enStatus = SingleLinkList_enSTATUS_ERROR;
     SingleLinkListElement_TypeDef* psOldElement = (SingleLinkListElement_TypeDef*) 0UL ;
     SingleLinkListElement_TypeDef* psHeadNextNode= (SingleLinkListElement_TypeDef*) 0UL ;
     SingleLinkListElement_TypeDef* psHeadData = (SingleLinkListElement_TypeDef*) 0UL ;
     SingleLinkListElement_TypeDef* psElementNextNode= (SingleLinkListElement_TypeDef*) 0UL ;
     SingleLinkListElement_TypeDef* psElementNextNextNode= (SingleLinkListElement_TypeDef*) 0UL ;
     void* psElementNextNodeData= (void*) 0UL ;
     uint32_t u32SizeReg = 0UL;

     if( ((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeReg = SingleLinkList__u32GetSize(psList);
         if(0UL != u32SizeReg)
         {
             if((uint32_t)0UL == (uint32_t)psElement)
             {
                 enStatus = SingleLinkList_enSTATUS_OK;
                 psHeadData = SingleLinkList__psGetHead(psList);
                 *pvData = SingleLinkList__pvGetElementData(psHeadData);
                 psOldElement = psHeadData;
                 psHeadNextNode = SingleLinkList__psGetElementNextNode(psHeadData);
                 SingleLinkList__vSetHead(psList, psHeadNextNode);
                 if(1UL == u32SizeReg)
                 {
                     SingleLinkList__vSetTail(psList,(SingleLinkListElement_TypeDef*)0UL);
                 }
             }
             else
             {
                 if((uint32_t)0UL != (uint32_t)psElement->psNextNode)
                 {
                     enStatus = SingleLinkList_enSTATUS_OK;

                     psElementNextNode = SingleLinkList__psGetElementNextNode(psElement);
                     psElementNextNodeData = SingleLinkList__pvGetElementData(psElementNextNode);
                     *pvData = psElementNextNodeData;
                     psOldElement = psElementNextNode;

                     psElementNextNextNode = SingleLinkList__psGetElementNextNode(psElementNextNode);
                     SingleLinkList__vSetElementNextNode(psElement,psElementNextNextNode);


                     psElementNextNode = SingleLinkList__psGetElementNextNode(psElement);
                     if( (uint32_t)0UL == (uint32_t)psElementNextNode)
                     {
                         SingleLinkList__vSetTail(psList,(SingleLinkListElement_TypeDef*)psElement);
                     }
                 }
             }

             free(psOldElement);

             u32SizeReg--;
             SingleLinkList__vSetSize(psList,u32SizeReg);
         }
     }
     return enStatus;
 }

 SingleLinkList_nSTATUS SingleLinkList__enRemove(SingleLinkList_TypeDef* psList,SingleLinkListElement_TypeDef* psElement, void** pvData)
 {
     SingleLinkList_nSTATUS enStatus = SingleLinkList_enSTATUS_ERROR;
     SingleLinkListElement_TypeDef* psOldElement = (SingleLinkListElement_TypeDef*) 0UL ;
     SingleLinkListElement_TypeDef* psHeadNextNode= (SingleLinkListElement_TypeDef*) 0UL ;
     SingleLinkListElement_TypeDef* psHeadData = (SingleLinkListElement_TypeDef*) 0UL ;
     SingleLinkListElement_TypeDef* psElementNextNode= (SingleLinkListElement_TypeDef*) 0UL ;
     SingleLinkListElement_TypeDef* psElementNextNextNode= (SingleLinkListElement_TypeDef*) 0UL ;
     void* psElementNextNodeData= (void*) 0UL ;
     void* psElementNodeData= (void*) 0UL ;
     uint32_t u32SizeReg = 0UL;

     if( ((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeReg = SingleLinkList__u32GetSize(psList);
         if(0UL != u32SizeReg)
         {
             if((uint32_t)0UL == (uint32_t)psElement)
             {
                 enStatus = SingleLinkList_enSTATUS_OK;
                 psHeadData = SingleLinkList__psGetHead(psList);
                 *pvData = SingleLinkList__pvGetElementData(psHeadData);
                 psOldElement = psHeadData;
                 psHeadNextNode = SingleLinkList__psGetElementNextNode(psHeadData);
                 SingleLinkList__vSetHead(psList, psHeadNextNode);
                 if(1UL == u32SizeReg)
                 {
                     SingleLinkList__vSetTail(psList,(SingleLinkListElement_TypeDef*)0UL);
                 }
             }
             else
             {
                 if((uint32_t)0UL != (uint32_t)psElement->psNextNode)
                 {
                     enStatus = SingleLinkList_enSTATUS_OK;

                     psElementNextNode = SingleLinkList__psGetElementNextNode(psElement);
                     psElementNextNodeData = SingleLinkList__pvGetElementData(psElementNextNode);
                     psElementNodeData = SingleLinkList__pvGetElementData(psElement);
                     *pvData = psElementNodeData;
                     psOldElement = psElementNextNode;

                     psElementNextNextNode = SingleLinkList__psGetElementNextNode(psElementNextNode);
                     SingleLinkList__vSetElementNextNode(psElement,psElementNextNextNode);
                     SingleLinkList__vSetElementData(psElement,psElementNextNodeData);


                     psElementNextNode = SingleLinkList__psGetElementNextNode(psElement);
                     if( (uint32_t)0UL == (uint32_t)psElementNextNode)
                     {
                         SingleLinkList__vSetTail(psList,(SingleLinkListElement_TypeDef*)psElement);
                     }
                 }
             }

             free(psOldElement);

             u32SizeReg--;
             SingleLinkList__vSetSize(psList,u32SizeReg);
         }
     }
     return enStatus;
 }

 SingleLinkList_nSTATUS  SingleLinkList__enRemoveEnd(SingleLinkList_TypeDef* psList, void** pvData)
 {
     SingleLinkList_nSTATUS enStatus = SingleLinkList_enSTATUS_ERROR;
     SingleLinkListElement_TypeDef* psEndElement =(SingleLinkListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         u32SizeList = SingleLinkList__u32GetSize(psList);
         if(1UL <  u32SizeList)
         {
             u32SizeList--;
             psEndElement = SingleLinkList__psGetHead(psList);
             u32SizeList--;
             while( 0UL != u32SizeList)
             {
                 psEndElement = SingleLinkList__psGetElementNextNode(psEndElement);
                 u32SizeList--;
             }
         }
         enStatus = SingleLinkList__enRemoveNext(psList, psEndElement, pvData);
     }
     return enStatus;
 }

 SingleLinkList_nSTATUS  SingleLinkList__enRemoveBegin(SingleLinkList_TypeDef* psList, void** pvData)
 {
     SingleLinkList_nSTATUS enStatus = SingleLinkList_enSTATUS_ERROR;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         enStatus = SingleLinkList__enRemoveNext(psList, (SingleLinkListElement_TypeDef*) 0UL, pvData);
     }
     return enStatus;
 }

 SingleLinkList_nSTATUS  SingleLinkList__enRemovePos(SingleLinkList_TypeDef* psList,uint32_t u32Position, void** pvData)
 {
     SingleLinkList_nSTATUS enStatus = SingleLinkList_enSTATUS_ERROR;
     SingleLinkListElement_TypeDef* psElement =(SingleLinkListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         u32SizeList = SingleLinkList__u32GetSize(psList);
         if(u32Position <= u32SizeList)
         {
             if(0UL !=  u32Position)
             {
                 psElement = SingleLinkList__psGetHead(psList);
                 u32Position--;
                 while( 0UL != u32Position)
                 {
                     psElement = SingleLinkList__psGetElementNextNode(psElement);
                     u32Position--;
                 }
             }
             enStatus = SingleLinkList__enRemoveNext(psList, psElement, pvData);
         }
     }
     return enStatus;
 }
