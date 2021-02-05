/**
 *
 * @file SLinkedList_Add.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Add.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/SLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/SLinkedList_Element.h>

#include <stdlib.h>


 SLinkedListElement_TypeDef* SLinkedList__psAddNext(SLinkedList_TypeDef* psList, SLinkedListElement_TypeDef* psElement, void* pvData)
{
     SLinkedListElement_TypeDef* psNewElement = (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* psListHeadNode= (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* psElementNextNode= (SLinkedListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0U;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
        #if defined (__TI_ARM__ )
         psNewElement = (SLinkedListElement_TypeDef*) memalign((size_t) 4,(size_t) sizeof(SLinkedListElement_TypeDef));
        #elif defined (__GNUC__ )
         psNewElement = (SLinkedListElement_TypeDef*) malloc(sizeof(SLinkedListElement_TypeDef));
        #endif

        if((uint32_t) 0UL != (uint32_t) psNewElement)
        {
            SLinkedList__vSetElementData(psNewElement, pvData);

            u32SizeReg = SLinkedList__u32GetSize(psList);
            if((uint32_t) 0UL == (uint32_t) psElement)
            {
                if(0UL == u32SizeReg)
                {
                    SLinkedList__vSetTail(psList, psNewElement);
                }
                psListHeadNode = SLinkedList__psGetHead(psList);
                SLinkedList__vSetElementNextNode(psNewElement, psListHeadNode);
                SLinkedList__vSetHead(psList, psNewElement);
            }
            else
            {
                psElementNextNode = SLinkedList__psGetElementNextNode(psElement);
                if((uint32_t) 0UL == (uint32_t) psElementNextNode)
                {
                    SLinkedList__vSetTail(psList, psNewElement);
                }
                SLinkedList__vSetElementNextNode(psNewElement, psElementNextNode);
                SLinkedList__vSetElementNextNode(psElement, psNewElement);
            }
            u32SizeReg++;
            SLinkedList__vSetSize(psList, u32SizeReg);
        }
    }
    return psNewElement;
}



 SLinkedListElement_TypeDef*  SLinkedList__psAddEnd(SLinkedList_TypeDef* psList, void* pvData)
 {
     SLinkedListElement_TypeDef* psNewElement = (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* psEndElement = (SLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         psEndElement = SLinkedList__psGetTail(psList);
         psNewElement = SLinkedList__psAddNext(psList, psEndElement, pvData);
     }
     return psNewElement;
 }

 SLinkedListElement_TypeDef*  SLinkedList__psAddBegin(SLinkedList_TypeDef* psList, void* pvData)
 {
     SLinkedListElement_TypeDef* psNewElement = (SLinkedListElement_TypeDef*) 0UL ;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         psNewElement = SLinkedList__psAddNext(psList, (SLinkedListElement_TypeDef*) 0UL, pvData);
     }
     return psNewElement;
 }

 SLinkedListElement_TypeDef*  SLinkedList__psAddPos(SLinkedList_TypeDef* psList, uint32_t u32Position, void* pvData)
 {
     SLinkedListElement_TypeDef* psNewElement = (SLinkedListElement_TypeDef*) 0UL ;
     SLinkedListElement_TypeDef* psElement = (SLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         u32SizeList = SLinkedList__u32GetSize(psList);
         if(u32Position <= u32SizeList)
         {
             if(0UL == u32Position)
             {
                 psElement = (SLinkedListElement_TypeDef*) 0UL;
             }
             else if((u32SizeList) == u32Position)
             {
                 psElement = SLinkedList__psGetTail(psList);
             }
             else
             {
                 psElement = SLinkedList__psGetHead(psList);
                 u32Position--;
                 while(0UL != u32Position)
                 {
                     psElement = SLinkedList__psGetElementNextNode(psElement);
                     u32Position--;
                 }
             }
             psNewElement = SLinkedList__psAddNext(psList, psElement, pvData);
         }
     }
     return psNewElement;
 }
