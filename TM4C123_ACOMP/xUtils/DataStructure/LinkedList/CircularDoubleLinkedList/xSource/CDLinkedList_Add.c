/**
 *
 * @file CircularCDLinkedList_Add.c
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
 * @verbatim 11 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Add.h>

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/CDLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Element/CDLinkedList_Element.h>

#include <stdlib.h>


 CDLinkedListElement_TypeDef* CDLinkedList__psAddNext(CDLinkedList_TypeDef* psList, CDLinkedListElement_TypeDef* psElement, void* pvData)
{
     CDLinkedListElement_TypeDef* psNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
     CDLinkedListElement_TypeDef* psElementTemp = (CDLinkedListElement_TypeDef*) 0UL ;
     CDLinkedListElement_TypeDef* psElementNextNode= (CDLinkedListElement_TypeDef*) 0UL ;
     CDLinkedListElement_TypeDef* psHeadNode= (CDLinkedListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0U;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         u32SizeReg = CDLinkedList__u32GetSize(psList);
         if(((uint32_t) 0UL != (uint32_t) psElement) || (0UL == u32SizeReg))
         {
            #if defined (__TI_ARM__ )
             psNewElement = (CDLinkedListElement_TypeDef*) memalign((size_t) 4,(size_t) sizeof(CDLinkedListElement_TypeDef));
            #elif defined (__GNUC__ )
             psNewElement = (CDLinkedListElement_TypeDef*) malloc(sizeof(CDLinkedListElement_TypeDef));
            #endif

            if((uint32_t) 0UL != (uint32_t) psNewElement)
            {
                CDLinkedList__vSetElementData(psNewElement, pvData);

                if(0UL == u32SizeReg)
                {
                    CDLinkedList__vSetHead(psList,psNewElement);
                    psElementTemp = psNewElement;
                    CDLinkedList__vSetElementNextNode(psNewElement, psElementTemp );
                    CDLinkedList__vSetElementPreviousNode(psNewElement,psElementTemp );

                    CDLinkedList__vSetTail(psList,psNewElement);
                }
                else
                {
                    psHeadNode = CDLinkedList__psGetHead(psList);
                    psElementNextNode = CDLinkedList__psGetElementNextNode(psElement);

                    CDLinkedList__vSetElementNextNode(psNewElement,psElementNextNode );
                    CDLinkedList__vSetElementPreviousNode(psNewElement,psElement);
                    if((uint32_t) psHeadNode == (uint32_t) psElementNextNode)
                    {
                        CDLinkedList__vSetTail(psList,psNewElement);
                    }

                    CDLinkedList__vSetElementPreviousNode(psElementNextNode,psNewElement);
                    CDLinkedList__vSetElementNextNode(psElement, psNewElement);
                }

                u32SizeReg++;
                CDLinkedList__vSetSize(psList,u32SizeReg);
            }
        }
    }
    return psNewElement;
}

 CDLinkedListElement_TypeDef* CDLinkedList__psAddPrevious(CDLinkedList_TypeDef* psList, CDLinkedListElement_TypeDef* psElement, void* pvData)
 {
      CDLinkedListElement_TypeDef* psNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
      CDLinkedListElement_TypeDef* psElementTemp = (CDLinkedListElement_TypeDef*) 0UL ;
      CDLinkedListElement_TypeDef* psElementPreviousNode= (CDLinkedListElement_TypeDef*) 0UL ;
      CDLinkedListElement_TypeDef* psTailNode= (CDLinkedListElement_TypeDef*) 0UL ;
      uint32_t u32SizeReg = 0U;
      if(((uint32_t) 0UL != (uint32_t) psList))
      {
          u32SizeReg = CDLinkedList__u32GetSize(psList);
          if(((uint32_t) 0UL != (uint32_t) psElement) || (0UL == u32SizeReg))
          {
             #if defined (__TI_ARM__ )
              psNewElement = (CDLinkedListElement_TypeDef*) memalign((size_t) 4,(size_t) sizeof(CDLinkedListElement_TypeDef));
             #elif defined (__GNUC__ )
              psNewElement = (CDLinkedListElement_TypeDef*) malloc(sizeof(CDLinkedListElement_TypeDef));
             #endif

             if((uint32_t) 0UL != (uint32_t) psNewElement)
             {
                 CDLinkedList__vSetElementData(psNewElement, pvData);

                 if(0UL == u32SizeReg)
                 {
                     CDLinkedList__vSetHead(psList,psNewElement);
                     psElementTemp = psNewElement;
                     CDLinkedList__vSetElementNextNode(psNewElement, psElementTemp );
                     CDLinkedList__vSetElementPreviousNode(psNewElement,psElementTemp );

                     CDLinkedList__vSetTail(psList,psNewElement);
                 }
                 else
                 {
                     psTailNode = CDLinkedList__psGetTail(psList);
                     psElementPreviousNode = CDLinkedList__psGetElementPreviousNode(psElement);

                     CDLinkedList__vSetElementNextNode(psNewElement,psElement );
                     CDLinkedList__vSetElementPreviousNode(psNewElement,psElementPreviousNode);

                     if((uint32_t) psTailNode == (uint32_t) psElementPreviousNode)
                     {
                         CDLinkedList__vSetHead(psList,psNewElement);
                     }

                     CDLinkedList__vSetElementNextNode(psElementPreviousNode,psNewElement);
                     CDLinkedList__vSetElementPreviousNode(psElement, psNewElement);
                 }

                 }
                 u32SizeReg++;
                 CDLinkedList__vSetSize(psList,u32SizeReg);
         }
     }
     return psNewElement;
 }

 CDLinkedListElement_TypeDef*  CDLinkedList__psAddEnd(CDLinkedList_TypeDef* psList, void* pvData)
 {
     CDLinkedListElement_TypeDef* psNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
     CDLinkedListElement_TypeDef* psEndElement = (CDLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         psEndElement = CDLinkedList__psGetTail(psList);
         psNewElement = CDLinkedList__psAddNext(psList, psEndElement, pvData);
     }
     return psNewElement;
 }

 CDLinkedListElement_TypeDef*  CDLinkedList__psAddBegin(CDLinkedList_TypeDef* psList, void* pvData)
 {
     CDLinkedListElement_TypeDef* psNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
     CDLinkedListElement_TypeDef* psBeginElement = (CDLinkedListElement_TypeDef*) 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         psBeginElement = CDLinkedList__psGetHead(psList);
         psNewElement = CDLinkedList__psAddPrevious(psList, psBeginElement, pvData);
     }
     return psNewElement;
 }

 CDLinkedListElement_TypeDef*  CDLinkedList__psAddPos(CDLinkedList_TypeDef* psList, uint32_t u32Position, void* pvData)
 {
     CDLinkedListElement_TypeDef* psNewElement = (CDLinkedListElement_TypeDef*) 0UL ;
     CDLinkedListElement_TypeDef* psElement = (CDLinkedListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     uint32_t u32SizeForward = 0UL;
     uint32_t u32SizeBackward= 0UL;
     uint32_t u32SizeOptimum= 0UL;
     uint32_t u32Direction= 0UL;
     if(((uint32_t) 0UL != (uint32_t) psList))
     {
         u32SizeList = CDLinkedList__u32GetSize(psList);
         if(u32Position <= u32SizeList)
         {
             if(0UL == u32Position) /*Add Head*/
             {
                 psNewElement = CDLinkedList__psAddBegin(psList,pvData);
             }
             else if(u32Position == u32SizeList) /*Add Tail*/
             {
                 psNewElement = CDLinkedList__psAddEnd(psList,pvData);
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
                     psElement = CDLinkedList__psGetHead(psList);
                     u32SizeOptimum --;
                     while(0UL != u32SizeOptimum)
                     {
                         psElement = CDLinkedList__psGetElementNextNode(psElement);
                         u32SizeOptimum--;
                     }
                     psNewElement = CDLinkedList__psAddNext(psList, psElement, pvData);
                 }
                 else /*Backward*/
                 {
                     psElement = CDLinkedList__psGetTail(psList);
                     u32SizeOptimum--;
                     while(0UL != u32SizeOptimum)
                     {
                         psElement = CDLinkedList__psGetElementPreviousNode(psElement);
                         u32SizeOptimum--;
                     }
                     psNewElement = CDLinkedList__psAddPrevious(psList, psElement, pvData);
                 }
             }
         }
     }
     return psNewElement;
 }

