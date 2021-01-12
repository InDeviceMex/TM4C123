/**
 *
 * @file CircularSingleLinkList_Node.c
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
#include <xUtils/DataStructure/CircularSingleLinkList/xHeader/CircularSingleLinkList_Node.h>

#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/List/CircularSingleLinkList_List.h>
#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/Element/CircularSingleLinkList_Element.h>



 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psGetNodePos(const CircularSingleLinkList_TypeDef* psList, uint32_t u32Position)
 {
     CircularSingleLinkListElement_TypeDef* psElement = (CircularSingleLinkListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         u32SizeList = CircularSingleLinkList__u32GetSize(psList);
         if(u32Position < u32SizeList)
         {
             if(0UL == u32Position)
             {
                 psElement = CircularSingleLinkList__psGetHead(psList);
             }
             else if((u32SizeList -1UL) == u32Position)
             {
                 psElement = CircularSingleLinkList__psGetTail(psList);
             }
             else
             {
                 psElement = CircularSingleLinkList__psGetHead(psList);
                 while(0UL != u32Position)
                 {
                     psElement = CircularSingleLinkList__psGetElementNextNode(psElement);
                     u32Position--;
                 }
             }
         }
     }
     return psElement;
 }


 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psGetNodeEnd(const CircularSingleLinkList_TypeDef* psList)
 {
     CircularSingleLinkListElement_TypeDef* psElement = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = CircularSingleLinkList__psGetTail(psList);
     }
     return psElement;
 }

 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psGetNodeBegin(const CircularSingleLinkList_TypeDef* psList)
 {
     CircularSingleLinkListElement_TypeDef* psElement = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = CircularSingleLinkList__psGetHead(psList);
     }
     return psElement;
 }



