/**
 *
 * @file DoubleLinkList_Reverse.c
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
#include <xUtils/DataStructure/DoubleLinkList/xHeader/DoubleLinkList_Reverse.h>

#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/List/DoubleLinkList_List.h>
#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/Element/DoubleLinkList_Element.h>

#include <stdlib.h>


 DoubleLinkList_nSTATUS DoubleLinkList__enReverse(DoubleLinkList_TypeDef* psList)
 {
     DoubleLinkList_nSTATUS enStatus = DoubleLinkList_enSTATUS_ERROR;
     DoubleLinkListElement_TypeDef* psNextElement= (DoubleLinkListElement_TypeDef*) 0UL ;
     DoubleLinkListElement_TypeDef* psNextNextElement= (DoubleLinkListElement_TypeDef*) 0UL ;
     DoubleLinkListElement_TypeDef* psNextPreviousElement= (DoubleLinkListElement_TypeDef*) 0UL ;
     DoubleLinkListElement_TypeDef* psElement = (DoubleLinkListElement_TypeDef*) 0UL ;
     if( ((uint32_t)0UL != (uint32_t)psList))
     {
         psElement = DoubleLinkList__psGetHead(psList);
         DoubleLinkList__vSetTail(psList,psElement);
         if((uint32_t)0UL != (uint32_t)psElement)
         {
             psNextElement =DoubleLinkList__psGetElementNextNode(psElement);
             if((uint32_t)0UL != (uint32_t)psNextElement)
             {
                 enStatus = DoubleLinkList_enSTATUS_OK;
                 DoubleLinkList__vSetElementNextNode(psElement, (DoubleLinkListElement_TypeDef*)0UL);
                 DoubleLinkList__vSetElementPreviousNode(psElement,psNextElement);

                 while((uint32_t)0UL != psNextElement)
                 {
                     psNextNextElement =DoubleLinkList__psGetElementNextNode(psNextElement);
                     DoubleLinkList__vSetElementPreviousNode(psNextElement,psNextNextElement);
                     DoubleLinkList__vSetElementNextNode(psNextElement,psElement);
                     psNextPreviousElement = DoubleLinkList__psGetElementPreviousNode(psNextElement);

                     psElement = psNextElement;
                     psNextElement = psNextPreviousElement;
                 }
                 DoubleLinkList__vSetHead(psList,psElement);
             }
         }
     }
     return enStatus;
 }



