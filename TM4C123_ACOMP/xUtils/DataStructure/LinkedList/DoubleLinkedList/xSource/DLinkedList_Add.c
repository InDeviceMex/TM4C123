/**
 *
 * @file DLinkedList_Add.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Add.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/DLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Element/DLinkedList_Element.h>

#include <stdlib.h>


 DLinkedListElement_TypeDef* DLinkedList__psAddNext(DLinkedList_TypeDef* psList, DLinkedListElement_TypeDef* psElement, void* pvData)
{
     DLinkedListElement_TypeDef* psNewElement = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* psElementNextNode= (DLinkedListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0U;

     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         u32SizeReg = DLinkedList__u32GetSize(psList);
         if(((uint32_t) 0UL != (uint32_t) psElement) || (0UL == u32SizeReg))
         {
            #if defined (__TI_ARM__ )
             psNewElement = (DLinkedListElement_TypeDef*) memalign((size_t) 4,(size_t) sizeof(DLinkedListElement_TypeDef));
            #elif defined (__GNUC__ )
             psNewElement = (DLinkedListElement_TypeDef*) malloc(sizeof(DLinkedListElement_TypeDef));
            #endif

            if((uint32_t) 0UL != (uint32_t) psNewElement)
            {
                DLinkedList__vSetElementData(psNewElement, pvData);

                if(0UL == u32SizeReg)
                {
                    DLinkedList__vSetHead(psList,psNewElement);

                    DLinkedList__vSetElementNextNode(psNewElement, (DLinkedListElement_TypeDef*) 0UL );
                    DLinkedList__vSetElementPreviousNode(psNewElement, (DLinkedListElement_TypeDef*) 0UL );

                    DLinkedList__vSetTail(psList,psNewElement);
                }
                else
                {
                    psElementNextNode = DLinkedList__psGetElementNextNode(psElement);

                    DLinkedList__vSetElementNextNode(psNewElement,psElementNextNode );
                    DLinkedList__vSetElementPreviousNode(psNewElement,psElement);

                    if((uint32_t) 0UL == (uint32_t) psElementNextNode)
                    {
                        DLinkedList__vSetTail(psList,psNewElement);
                    }
                    else
                    {
                        DLinkedList__vSetElementPreviousNode(psElementNextNode,psNewElement);
                    }
                    DLinkedList__vSetElementNextNode(psElement, psNewElement);
                }

                u32SizeReg++;
                DLinkedList__vSetSize(psList,u32SizeReg);
            }
        }
    }
    return psNewElement;
}

 DLinkedListElement_TypeDef* DLinkedList__psAddPrevious(DLinkedList_TypeDef* psList, DLinkedListElement_TypeDef* psElement, void* pvData)
{
     DLinkedListElement_TypeDef* psNewElement = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* psElementPreviousNode= (DLinkedListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0U;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         u32SizeReg = DLinkedList__u32GetSize(psList);
         if(((uint32_t) 0UL != (uint32_t) psElement) || (0UL == u32SizeReg))
         {
            #if defined (__TI_ARM__ )
             psNewElement = (DLinkedListElement_TypeDef*) memalign((size_t) 4,(size_t) sizeof(DLinkedListElement_TypeDef));
            #elif defined (__GNUC__ )
             psNewElement = (DLinkedListElement_TypeDef*) malloc(sizeof(DLinkedListElement_TypeDef));
            #endif

            if((uint32_t) 0UL != (uint32_t) psNewElement)
            {
                DLinkedList__vSetElementData(psNewElement, pvData);

                if(0UL == u32SizeReg)
                {
                    DLinkedList__vSetHead(psList,psNewElement);

                    DLinkedList__vSetElementNextNode(psNewElement, (DLinkedListElement_TypeDef*) 0UL );
                    DLinkedList__vSetElementPreviousNode(psNewElement, (DLinkedListElement_TypeDef*) 0UL );

                    DLinkedList__vSetTail(psList,psNewElement);
                }
                else
                {
                    psElementPreviousNode = DLinkedList__psGetElementPreviousNode(psElement);

                    DLinkedList__vSetElementNextNode(psNewElement,psElement );
                    DLinkedList__vSetElementPreviousNode(psNewElement,psElementPreviousNode);

                    if((uint32_t) 0UL == (uint32_t) psElementPreviousNode)
                    {
                        DLinkedList__vSetHead(psList,psNewElement);
                    }
                    else
                    {
                        DLinkedList__vSetElementNextNode(psElementPreviousNode,psNewElement);
                    }
                    DLinkedList__vSetElementPreviousNode(psElement, psNewElement);
                }
                u32SizeReg++;
                DLinkedList__vSetSize(psList,u32SizeReg);

                }
        }
    }
    return psNewElement;
}

 DLinkedListElement_TypeDef*  DLinkedList__psAddEnd(DLinkedList_TypeDef* psList, void* pvData)
 {
     DLinkedListElement_TypeDef* psNewElement = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* psEndElement = (DLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         psEndElement = DLinkedList__psGetTail(psList);
         psNewElement = DLinkedList__psAddNext(psList, psEndElement, pvData);
     }
     return psNewElement;
 }

 DLinkedListElement_TypeDef*  DLinkedList__psAddBegin(DLinkedList_TypeDef* psList, void* pvData)
 {
     DLinkedListElement_TypeDef* psNewElement = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* psBeginElement = (DLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         psBeginElement = DLinkedList__psGetHead(psList);
         psNewElement = DLinkedList__psAddPrevious(psList, psBeginElement, pvData);
     }
     return psNewElement;
 }

 DLinkedListElement_TypeDef*  DLinkedList__psAddPos(DLinkedList_TypeDef* psList, uint32_t u32Position, void* pvData)
 {
     DLinkedListElement_TypeDef* psNewElement = (DLinkedListElement_TypeDef*) 0UL ;
     DLinkedListElement_TypeDef* psElement = (DLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     uint32_t u32SizeForward = 0UL;
     uint32_t u32SizeBackward= 0UL;
     uint32_t u32SizeOptimum= 0UL;
     uint32_t u32Direction= 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         u32SizeList = DLinkedList__u32GetSize(psList);
         if(u32Position <= u32SizeList)
         {
             if(0UL == u32Position) /*Add Head*/
             {
                 psNewElement = DLinkedList__psAddBegin(psList,pvData);
             }
             else if(u32Position == u32SizeList) /*Add Tail*/
             {
                 psNewElement = DLinkedList__psAddEnd(psList,pvData);
             }
             else
             {
                 u32SizeBackward = u32SizeList - u32Position;

                 u32SizeForward = u32Position;

                 if(u32SizeForward > u32SizeBackward)
                 {
                     u32SizeOptimum = u32SizeBackward;
                     u32Direction = 1UL;
                 }
                 else
                 {
                     u32SizeOptimum = u32SizeForward;
                     u32Direction = 0UL;
                 }

                 if(u32Direction == 0UL) /*Forward*/
                 {
                     psElement = DLinkedList__psGetHead(psList);
                     u32SizeOptimum --;
                     while(0UL != u32SizeOptimum)
                     {
                         psElement = DLinkedList__psGetElementNextNode(psElement);
                         u32SizeOptimum--;
                     }
                     psNewElement = DLinkedList__psAddNext(psList, psElement, pvData);
                 }
                 else /*Backward*/
                 {
                     psElement = DLinkedList__psGetTail(psList);
                     u32SizeOptimum--;
                     while(0UL != u32SizeOptimum)
                     {
                         psElement = DLinkedList__psGetElementPreviousNode(psElement);
                         u32SizeOptimum--;
                     }
                     psNewElement = DLinkedList__psAddPrevious(psList, psElement, pvData);
                 }
             }
         }
     }
     return psNewElement;
 }



