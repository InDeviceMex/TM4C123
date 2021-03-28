/**
 *
 * @file CSLinkedList_Add.c
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
 * @verbatim 9 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
/**
 *
 * @file CSLinkedList_Add.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Add.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/CSLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/Element/CSLinkedList_Element.h>

#include <stdlib.h>


 CSLinkedListElement_TypeDef* CSLinkedList__psAddNext(CSLinkedList_TypeDef* psList, CSLinkedListElement_TypeDef* psElement, void* pvData)
{
     CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
     CSLinkedListElement_TypeDef* psNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psNextElement = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psNewElement1 = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psListHeadNode = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psListTailNode = (CSLinkedListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0U;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
        #if defined (__TI_ARM__ )
         psNewElement = (CSLinkedListElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CSLinkedListElement_TypeDef));
        #elif defined (__GNUC__ )
         psNewElement = (CSLinkedListElement_TypeDef*) malloc(sizeof(CSLinkedListElement_TypeDef));
        #endif

        if((uint32_t) 0UL != (uint32_t) psNewElement)
        {
            CSLinkedList__vSetElementData(psNewElement, pvData);

            u32SizeReg = CSLinkedList__u32GetSize(psList);
            if(0UL == u32SizeReg) /*Empty List*/
            {
                psNewElement1 = psNewElement;
                CSLinkedList__vSetElementNextNode(psNewElement, psNewElement1);
                CSLinkedList__vSetHead(psList, psNewElement);
                CSLinkedList__vSetTail(psList, psNewElement);
            }
            else if((uint32_t) 0UL == (uint32_t) psElement) /*Insert to head*/
            {
                    psListTailNode = CSLinkedList__psGetTail(psList);
                    psListHeadNode = CSLinkedList__psGetHead(psList);
                    CSLinkedList__vSetElementNextNode(psNewElement, psListHeadNode);
                    CSLinkedList__vSetElementNextNode(psListTailNode, psNewElement);
                    CSLinkedList__vSetHead(psList, psNewElement);
            }
            else /*Insert beetween nodes*/
            {
                enStatus = CSLinkedList__enIsTail(psList, psElement);
                if((uint32_t) CSLinkedList_enSTATUS_OK == (uint32_t) enStatus)
                {
                    CSLinkedList__vSetTail(psList, psNewElement);
                }
                psNextElement = CSLinkedList__psGetElementNextNode(psElement);
                CSLinkedList__vSetElementNextNode(psNewElement, psNextElement);
                CSLinkedList__vSetElementNextNode(psElement, psNewElement);
            }
            u32SizeReg++;
            CSLinkedList__vSetSize(psList, u32SizeReg);
        }
    }
    return psNewElement;
}



 CSLinkedListElement_TypeDef*  CSLinkedList__psAddEnd(CSLinkedList_TypeDef* psList, void* pvData)
 {
     CSLinkedListElement_TypeDef* psNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psEndElement = (CSLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         psEndElement = CSLinkedList__psGetTail(psList);
         psNewElement = CSLinkedList__psAddNext(psList, psEndElement, pvData);
     }
     return psNewElement;
 }

 CSLinkedListElement_TypeDef*  CSLinkedList__psAddBegin(CSLinkedList_TypeDef* psList, void* pvData)
 {
     CSLinkedListElement_TypeDef* psNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         psNewElement = CSLinkedList__psAddNext(psList, (CSLinkedListElement_TypeDef*) 0UL, pvData);
     }
     return psNewElement;
 }

 CSLinkedListElement_TypeDef*  CSLinkedList__psAddPos(CSLinkedList_TypeDef* psList, uint32_t u32Position, void* pvData)
 {
     CSLinkedListElement_TypeDef* psNewElement = (CSLinkedListElement_TypeDef*) 0UL ;
     CSLinkedListElement_TypeDef* psElement = (CSLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         u32SizeList = CSLinkedList__u32GetSize(psList);
         if(u32Position <= u32SizeList)
         {
             if(0UL == u32Position)
             {
                 psNewElement = CSLinkedList__psAddBegin(psList, pvData);
             }
             else if (u32Position == u32SizeList)
             {
                 psNewElement = CSLinkedList__psAddEnd(psList, pvData);
             }
             else
             {
                 psElement = CSLinkedList__psGetHead(psList);
                 u32Position--;
                 while(0UL != u32Position)
                 {
                     psElement = CSLinkedList__psGetElementNextNode(psElement);
                     u32Position--;
                 }
                 psNewElement = CSLinkedList__psAddNext(psList, psElement, pvData);
             }
         }
     }
     return psNewElement;
 }



