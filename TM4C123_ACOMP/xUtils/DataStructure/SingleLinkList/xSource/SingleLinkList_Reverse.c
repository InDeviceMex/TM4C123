/**
 *
 * @file SingleLinkList_Reverse.c
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
#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Reverse.h>

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/SingleLinkList_List.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/Element/SingleLinkList_Element.h>

#include <stdlib.h>


 SingleLinkList_nSTATUS SingleLinkList__enReverse(SingleLinkList_TypeDef* psList)
 {
     SingleLinkList_nSTATUS enStatus = SingleLinkList_enSTATUS_ERROR;
     SingleLinkListElement_TypeDef* psPreviousElement= (SingleLinkListElement_TypeDef*) 0UL ;
     SingleLinkListElement_TypeDef* psNextElement= (SingleLinkListElement_TypeDef*) 0UL ;
     SingleLinkListElement_TypeDef* psHeadElement = (SingleLinkListElement_TypeDef*) 0UL ;
     if( ((uint32_t)0UL != (uint32_t)psList))
     {
         psHeadElement = SingleLinkList__psGetHead(psList);
         SingleLinkList__vSetTail(psList, psHeadElement);
         while((uint32_t)0UL != psHeadElement)
         {
             psNextElement = SingleLinkList__psGetElementNextNode(psHeadElement);
             SingleLinkList__vSetElementNextNode(psHeadElement,psPreviousElement);
             psPreviousElement = psHeadElement;
             psHeadElement = psNextElement;
         }
         psHeadElement = psPreviousElement;
         SingleLinkList__vSetHead(psList, psHeadElement);
     }
     return enStatus;
 }


