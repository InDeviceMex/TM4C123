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
                    psElementNextNode = CircularDoubleLinkList__psGetElementNextNode(psElement);

                    CircularDoubleLinkList__vSetElementNextNode(psNewElement,psElementNextNode );
                    CircularDoubleLinkList__vSetElementPreviousNode(psNewElement,psElement);
                    psHeadNode = CircularDoubleLinkList__psGetHead(psList);
                    if( (uint32_t)psHeadNode == (uint32_t)psElementNextNode)
                    {
                        CircularDoubleLinkList__vSetTail(psList,psNewElement);
                    }
                    else
                    {
                        CircularDoubleLinkList__vSetElementPreviousNode(psElementNextNode,psNewElement);
                    }
                    CircularDoubleLinkList__vSetElementNextNode(psElement, psNewElement);
                }

                u32SizeReg++;
                CircularDoubleLinkList__vSetSize(psList,u32SizeReg);
            }
        }
    }
    return psNewElement;
}



