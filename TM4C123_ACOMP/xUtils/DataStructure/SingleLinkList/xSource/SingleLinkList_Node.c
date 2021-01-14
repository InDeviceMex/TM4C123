/**
 *
 * @file SingleLinkList_Node.c
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
 * @verbatim 7 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Node.h>

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/SingleLinkList_List.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/Element/SingleLinkList_Element.h>



 SingleLinkListElement_TypeDef*  SingleLinkList__psGetNodePos(const SingleLinkList_TypeDef* psList, uint32_t u32Position)
 {
     SingleLinkListElement_TypeDef* psElement = (SingleLinkListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         u32SizeList = SingleLinkList__u32GetSize(psList);
         if(u32Position < u32SizeList)
         {
             if(0UL == u32Position)
             {
                 psElement = SingleLinkList__psGetHead(psList);
             }
             else if((u32SizeList -1UL) == u32Position)
             {
                 psElement = SingleLinkList__psGetTail(psList);
             }
             else
             {
                 psElement = SingleLinkList__psGetHead(psList);
                 while(0UL != u32Position)
                 {
                     psElement = SingleLinkList__psGetElementNextNode(psElement);
                     u32Position--;
                 }
             }
         }
     }
     return psElement;
 }


 SingleLinkListElement_TypeDef*  SingleLinkList__psGetNodeEnd(const SingleLinkList_TypeDef* psList)
 {
     SingleLinkListElement_TypeDef* psElement = (SingleLinkListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = SingleLinkList__psGetTail(psList);
     }
     return psElement;
 }

 SingleLinkListElement_TypeDef*  SingleLinkList__psGetNodeBegin(const SingleLinkList_TypeDef* psList)
 {
     SingleLinkListElement_TypeDef* psElement = (SingleLinkListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = SingleLinkList__psGetHead(psList);
     }
     return psElement;
 }


