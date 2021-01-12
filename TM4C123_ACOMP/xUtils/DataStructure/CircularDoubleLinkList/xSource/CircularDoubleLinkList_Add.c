/**
 *
 * @file CircularCircularDoubleLinkList_Add.c
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
#include <xUtils/DataStructure/CircularDoubleLinkList/xHeader/CircularDoubleLinkList_Add.h>

#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/List/CircularDoubleLinkList_List.h>
#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/Element/CircularDoubleLinkList_Element.h>

#include <stdlib.h>


 CircularDoubleLinkListElement_TypeDef* CircularDoubleLinkList__psAddNext(CircularDoubleLinkList_TypeDef* psList, CircularDoubleLinkListElement_TypeDef* psElement, void* pvData)
{
     CircularDoubleLinkListElement_TypeDef* psNewElement = (CircularDoubleLinkListElement_TypeDef*) 0UL ;
     CircularDoubleLinkListElement_TypeDef* psElementNextNode= (CircularDoubleLinkListElement_TypeDef*) 0UL ;
     CircularDoubleLinkListElement_TypeDef* psHeadNode= (CircularDoubleLinkListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0U;
     if(((uint32_t)0UL != (uint32_t)psList)  &&((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeReg = CircularDoubleLinkList__u32GetSize(psList);
         if(((uint32_t)0UL != (uint32_t)psElement) || (0UL == u32SizeReg))
         {
            #if defined ( __TI_ARM__ )
             psNewElement = (CircularDoubleLinkListElement_TypeDef*) memalign((size_t)4,(size_t)sizeof(CircularDoubleLinkListElement_TypeDef));
            #elif defined ( __GNUC__ )
             psNewElement = (CircularDoubleLinkListElement_TypeDef*) malloc(sizeof(CircularDoubleLinkListElement_TypeDef));
            #endif

            if((uint32_t)0UL != (uint32_t)psNewElement)
            {
                CircularDoubleLinkList__vSetElementData(psNewElement, pvData);

                if( 0UL == u32SizeReg)
                {
                    CircularDoubleLinkList__vSetHead(psList,psNewElement);

                    CircularDoubleLinkList__vSetElementNextNode(psNewElement, psNewElement );
                    CircularDoubleLinkList__vSetElementPreviousNode(psNewElement,psNewElement );

                    CircularDoubleLinkList__vSetTail(psList,psNewElement);
                }
                else
                {
                    psHeadNode = CircularDoubleLinkList__psGetHead(psList);
                    psElementNextNode = CircularDoubleLinkList__psGetElementNextNode(psElement);

                    CircularDoubleLinkList__vSetElementNextNode(psNewElement,psElementNextNode );
                    CircularDoubleLinkList__vSetElementPreviousNode(psNewElement,psElement);
                    if( (uint32_t)psHeadNode == (uint32_t)psElementNextNode)
                    {
                        CircularDoubleLinkList__vSetTail(psList,psNewElement);
                    }

                    CircularDoubleLinkList__vSetElementPreviousNode(psElementNextNode,psNewElement);
                    CircularDoubleLinkList__vSetElementNextNode(psElement, psNewElement);
                }

                u32SizeReg++;
                CircularDoubleLinkList__vSetSize(psList,u32SizeReg);
            }
        }
    }
    return psNewElement;
}

 CircularDoubleLinkListElement_TypeDef* CircularDoubleLinkList__psAddPrevious(CircularDoubleLinkList_TypeDef* psList, CircularDoubleLinkListElement_TypeDef* psElement, void* pvData)
 {
      CircularDoubleLinkListElement_TypeDef* psNewElement = (CircularDoubleLinkListElement_TypeDef*) 0UL ;
      CircularDoubleLinkListElement_TypeDef* psElementPreviousNode= (CircularDoubleLinkListElement_TypeDef*) 0UL ;
      CircularDoubleLinkListElement_TypeDef* psTailNode= (CircularDoubleLinkListElement_TypeDef*) 0UL ;
      uint32_t u32SizeReg = 0U;
      if(((uint32_t)0UL != (uint32_t)psList)  &&((uint32_t)0UL != (uint32_t)pvData))
      {
          u32SizeReg = CircularDoubleLinkList__u32GetSize(psList);
          if(((uint32_t)0UL != (uint32_t)psElement) || (0UL == u32SizeReg))
          {
             #if defined ( __TI_ARM__ )
              psNewElement = (CircularDoubleLinkListElement_TypeDef*) memalign((size_t)4,(size_t)sizeof(CircularDoubleLinkListElement_TypeDef));
             #elif defined ( __GNUC__ )
              psNewElement = (CircularDoubleLinkListElement_TypeDef*) malloc(sizeof(CircularDoubleLinkListElement_TypeDef));
             #endif

             if((uint32_t)0UL != (uint32_t)psNewElement)
             {
                 CircularDoubleLinkList__vSetElementData(psNewElement, pvData);

                 if( 0UL == u32SizeReg)
                 {
                     CircularDoubleLinkList__vSetHead(psList,psNewElement);

                     CircularDoubleLinkList__vSetElementNextNode(psNewElement, psNewElement );
                     CircularDoubleLinkList__vSetElementPreviousNode(psNewElement,psNewElement );

                     CircularDoubleLinkList__vSetTail(psList,psNewElement);
                 }
                 else
                 {
                     psTailNode = CircularDoubleLinkList__psGetTail(psList);
                     psElementPreviousNode = CircularDoubleLinkList__psGetElementPreviousNode(psElement);

                     CircularDoubleLinkList__vSetElementNextNode(psNewElement,psElement );
                     CircularDoubleLinkList__vSetElementPreviousNode(psNewElement,psElementPreviousNode);

                     if( (uint32_t)psTailNode == (uint32_t)psElementPreviousNode)
                     {
                         CircularDoubleLinkList__vSetHead(psList,psNewElement);
                     }

                     CircularDoubleLinkList__vSetElementNextNode(psElementPreviousNode,psNewElement);
                     CircularDoubleLinkList__vSetElementPreviousNode(psElement, psNewElement);
                 }

                 }
                 u32SizeReg++;
                 CircularDoubleLinkList__vSetSize(psList,u32SizeReg);
         }
     }
     return psNewElement;
 }

 CircularDoubleLinkListElement_TypeDef*  CircularDoubleLinkList__psAddEnd(CircularDoubleLinkList_TypeDef* psList, void* pvData)
 {
     CircularDoubleLinkListElement_TypeDef* psNewElement = (CircularDoubleLinkListElement_TypeDef*) 0UL ;
     CircularDoubleLinkListElement_TypeDef* psEndElement =(CircularDoubleLinkListElement_TypeDef*) 0UL;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         psEndElement =  CircularDoubleLinkList__psGetTail(psList);
         psNewElement = CircularDoubleLinkList__psAddNext(psList, psEndElement, pvData);
     }
     return psNewElement;
 }

 CircularDoubleLinkListElement_TypeDef*  CircularDoubleLinkList__psAddBegin(CircularDoubleLinkList_TypeDef* psList, void* pvData)
 {
     CircularDoubleLinkListElement_TypeDef* psNewElement = (CircularDoubleLinkListElement_TypeDef*) 0UL ;
     CircularDoubleLinkListElement_TypeDef* psBeginElement =(CircularDoubleLinkListElement_TypeDef*) 0UL;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         psBeginElement =  CircularDoubleLinkList__psGetHead(psList);
         psNewElement = CircularDoubleLinkList__psAddPrevious(psList, psBeginElement, pvData);
     }
     return psNewElement;
 }

 CircularDoubleLinkListElement_TypeDef*  CircularDoubleLinkList__psAddPos(CircularDoubleLinkList_TypeDef* psList, uint32_t u32Position, void* pvData)
 {
     CircularDoubleLinkListElement_TypeDef* psNewElement = (CircularDoubleLinkListElement_TypeDef*) 0UL ;
     CircularDoubleLinkListElement_TypeDef* psElement = (CircularDoubleLinkListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     uint32_t u32SizeForward = 0UL;
     uint32_t u32SizeBackward= 0UL;
     uint32_t u32SizeOptimum= 0UL;
     uint32_t u32Direction= 0UL;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeList = CircularDoubleLinkList__u32GetSize(psList);
         if(u32Position <= u32SizeList)
         {
             if(0UL ==u32Position) /*Add Head*/
             {
                 psNewElement = CircularDoubleLinkList__psAddBegin(psList,pvData);
             }
             else if(u32Position == u32SizeList) /*Add Tail*/
             {
                 psNewElement = CircularDoubleLinkList__psAddEnd(psList,pvData);
             }
             else
             {
                 u32SizeBackward = u32SizeList - u32Position;

                 u32SizeForward = u32Position;

                 if( u32SizeForward > u32SizeBackward)
                 {
                     u32SizeOptimum = u32SizeBackward;
                     u32Direction = 1UL;
                 }
                 else
                 {
                     u32SizeOptimum = u32SizeForward;
                     u32Direction = 0UL;
                 }

                 if( u32Direction == 0UL) /*Forward*/
                 {
                     psElement = CircularDoubleLinkList__psGetHead(psList);
                     u32SizeOptimum --;
                     while(0UL != u32SizeOptimum)
                     {
                         psElement = CircularDoubleLinkList__psGetElementNextNode(psElement);
                         u32SizeOptimum--;
                     }
                     psNewElement = CircularDoubleLinkList__psAddNext(psList, psElement, pvData);
                 }
                 else /*Backward*/
                 {
                     psElement = CircularDoubleLinkList__psGetTail(psList);
                     u32SizeOptimum--;
                     while(0UL != u32SizeOptimum)
                     {
                         psElement = CircularDoubleLinkList__psGetElementPreviousNode(psElement);
                         u32SizeOptimum--;
                     }
                     psNewElement = CircularDoubleLinkList__psAddPrevious(psList, psElement, pvData);
                 }
             }
         }
     }
     return psNewElement;
 }

