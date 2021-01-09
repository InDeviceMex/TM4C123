/**
 *
 * @file DoubleLinkList_Add.c
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
#include <xUtils/DataStructure/DoubleLinkList/xHeader/DoubleLinkList_Add.h>

#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/List/DoubleLinkList_List.h>
#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/Element/DoubleLinkList_Element.h>

#include <stdlib.h>


 DoubleLinkListElement_TypeDef* DoubleLinkList__psAddNext(DoubleLinkList_TypeDef* psList, DoubleLinkListElement_TypeDef* psElement, void* pvData)
{
     DoubleLinkListElement_TypeDef* psNewElement = (DoubleLinkListElement_TypeDef*) 0UL ;
     DoubleLinkListElement_TypeDef* psElementNextNode= (DoubleLinkListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0U;
     if(((uint32_t)0UL != (uint32_t)psList)  &&((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeReg = DoubleLinkList__u32GetSize(psList);
         if(((uint32_t)0UL != (uint32_t)psElement) || (0UL == u32SizeReg))
         {
            #if defined ( __TI_ARM__ )
             psNewElement = (DoubleLinkListElement_TypeDef*) memalign((size_t)4,(size_t)sizeof(DoubleLinkListElement_TypeDef));
            #elif defined ( __GNUC__ )
             psNewElement = (DoubleLinkListElement_TypeDef*) malloc(sizeof(DoubleLinkListElement_TypeDef));
            #endif

            if((uint32_t)0UL != (uint32_t)psNewElement)
            {
                DoubleLinkList__vSetElementData(psNewElement, pvData);

                if( 0UL == u32SizeReg)
                {
                    DoubleLinkList__vSetHead(psList,psNewElement);

                    DoubleLinkList__vSetElementNextNode(psNewElement, (DoubleLinkListElement_TypeDef*) 0UL );
                    DoubleLinkList__vSetElementPreviousNode(psNewElement, (DoubleLinkListElement_TypeDef*) 0UL );

                    DoubleLinkList__vSetTail(psList,psNewElement);
                }
                else
                {
                    psElementNextNode = DoubleLinkList__psGetElementNextNode(psElement);

                    DoubleLinkList__vSetElementNextNode(psNewElement,psElementNextNode );
                    DoubleLinkList__vSetElementPreviousNode(psNewElement,psElement);

                    if( (uint32_t)0UL == (uint32_t)psElementNextNode)
                    {
                        DoubleLinkList__vSetTail(psList,psNewElement);
                    }
                    else
                    {
                        DoubleLinkList__vSetElementPreviousNode(psElementNextNode,psNewElement);
                    }
                    DoubleLinkList__vSetElementNextNode(psElement, psNewElement);
                }

                }
                u32SizeReg++;
                DoubleLinkList__vSetSize(psList,u32SizeReg);
        }
    }
    return psNewElement;
}

 DoubleLinkListElement_TypeDef* DoubleLinkList__psAddPrevious(DoubleLinkList_TypeDef* psList, DoubleLinkListElement_TypeDef* psElement, void* pvData)
{
     DoubleLinkListElement_TypeDef* psNewElement = (DoubleLinkListElement_TypeDef*) 0UL ;
     DoubleLinkListElement_TypeDef* psElementPreviousNode= (DoubleLinkListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0U;
     if(((uint32_t)0UL != (uint32_t)psList)  &&((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeReg = DoubleLinkList__u32GetSize(psList);
         if(((uint32_t)0UL != (uint32_t)psElement) || (0UL == u32SizeReg))
         {
            #if defined ( __TI_ARM__ )
             psNewElement = (DoubleLinkListElement_TypeDef*) memalign((size_t)4,(size_t)sizeof(DoubleLinkListElement_TypeDef));
            #elif defined ( __GNUC__ )
             psNewElement = (DoubleLinkListElement_TypeDef*) malloc(sizeof(DoubleLinkListElement_TypeDef));
            #endif

            if((uint32_t)0UL != (uint32_t)psNewElement)
            {
                DoubleLinkList__vSetElementData(psNewElement, pvData);

                if( 0UL == u32SizeReg)
                {
                    DoubleLinkList__vSetHead(psList,psNewElement);

                    DoubleLinkList__vSetElementNextNode(psNewElement, (DoubleLinkListElement_TypeDef*) 0UL );
                    DoubleLinkList__vSetElementPreviousNode(psNewElement, (DoubleLinkListElement_TypeDef*) 0UL );

                    DoubleLinkList__vSetTail(psList,psNewElement);
                }
                else
                {
                    psElementPreviousNode = DoubleLinkList__psGetElementPreviousNode(psElement);

                    DoubleLinkList__vSetElementNextNode(psNewElement,psElement );
                    DoubleLinkList__vSetElementPreviousNode(psNewElement,psElementPreviousNode);

                    if( (uint32_t)0UL == (uint32_t)psElementPreviousNode)
                    {
                        DoubleLinkList__vSetHead(psList,psNewElement);
                    }
                    else
                    {
                        DoubleLinkList__vSetElementNextNode(psElementPreviousNode,psNewElement);
                    }
                    DoubleLinkList__vSetElementPreviousNode(psElement, psNewElement);
                }

                }
                u32SizeReg++;
                DoubleLinkList__vSetSize(psList,u32SizeReg);
        }
    }
    return psNewElement;
}

 DoubleLinkListElement_TypeDef*  DoubleLinkList__psAddEnd(DoubleLinkList_TypeDef* psList, void* pvData)
 {
     DoubleLinkListElement_TypeDef* psNewElement = (DoubleLinkListElement_TypeDef*) 0UL ;
     DoubleLinkListElement_TypeDef* psEndElement =(DoubleLinkListElement_TypeDef*) 0UL;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         psEndElement =  DoubleLinkList__psGetTail(psList);
         psNewElement = DoubleLinkList__psAddNext(psList, psEndElement, pvData);
     }
     return psNewElement;
 }

 DoubleLinkListElement_TypeDef*  DoubleLinkList__psAddBegin(DoubleLinkList_TypeDef* psList, void* pvData)
 {
     DoubleLinkListElement_TypeDef* psNewElement = (DoubleLinkListElement_TypeDef*) 0UL ;
     DoubleLinkListElement_TypeDef* psBeginElement =(DoubleLinkListElement_TypeDef*) 0UL;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         psBeginElement =  DoubleLinkList__psGetHead(psList);
         psNewElement = DoubleLinkList__psAddPrevious(psList, psBeginElement, pvData);
     }
     return psNewElement;
 }

 DoubleLinkListElement_TypeDef*  DoubleLinkList__psAddPos(DoubleLinkList_TypeDef* psList, uint32_t u32Position, void* pvData)
 {
     DoubleLinkListElement_TypeDef* psNewElement = (DoubleLinkListElement_TypeDef*) 0UL ;
     DoubleLinkListElement_TypeDef* psElement = (DoubleLinkListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     uint32_t u32SizeForward = 0UL;
     uint32_t u32SizeBackward= 0UL;
     uint32_t u32SizeOptimum= 0UL;
     uint32_t u32Direction= 0UL;
     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != (uint32_t)pvData))
     {
         u32SizeList = DoubleLinkList__u32GetSize(psList);
         if(u32Position <= u32SizeList)
         {
             if(0UL ==u32Position) /*Add Head*/
             {
                 psNewElement = DoubleLinkList__psAddBegin(psList,pvData);
             }
             else if(u32Position == u32SizeList) /*Add Tail*/
             {
                 psNewElement = DoubleLinkList__psAddEnd(psList,pvData);
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
                     psElement = DoubleLinkList__psGetHead(psList);
                     u32SizeOptimum --;
                     while(0UL != u32SizeOptimum)
                     {
                         psElement = DoubleLinkList__psGetElementNextNode(psElement);
                         u32SizeOptimum--;
                     }
                     psNewElement = DoubleLinkList__psAddNext(psList, psElement, pvData);
                 }
                 else /*Backward*/
                 {
                     psElement = DoubleLinkList__psGetTail(psList);
                     u32SizeOptimum--;
                     while(0UL != u32SizeOptimum)
                     {
                         psElement = DoubleLinkList__psGetElementPreviousNode(psElement);
                         u32SizeOptimum--;
                     }
                     psNewElement = DoubleLinkList__psAddPrevious(psList, psElement, pvData);
                 }
             }
         }
     }
     return psNewElement;
 }



