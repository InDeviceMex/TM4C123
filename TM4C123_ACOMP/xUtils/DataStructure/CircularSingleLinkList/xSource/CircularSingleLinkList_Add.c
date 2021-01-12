/**
 *
 * @file CircularSingleLinkList_Add.c
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
 * @file CircularSingleLinkList_Add.c
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
#include <xUtils/DataStructure/CircularSingleLinkList/xHeader/CircularSingleLinkList_Add.h>

#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/List/CircularSingleLinkList_List.h>
#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/Element/CircularSingleLinkList_Element.h>

#include <stdlib.h>


 CircularSingleLinkListElement_TypeDef* CircularSingleLinkList__psAddNext(CircularSingleLinkList_TypeDef* psList, CircularSingleLinkListElement_TypeDef* psElement, void* pvData)
{
     CircularSingleLinkList_nSTATUS enStatus = CircularSingleLinkList_enSTATUS_ERROR;
     CircularSingleLinkListElement_TypeDef* psNewElement = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psNextElement = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psNewElement1 = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psListHeadNode= (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psListTailNode= (CircularSingleLinkListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0U;
     if(((uint32_t)0UL != (uint32_t)psList))
     {
        #if defined ( __TI_ARM__ )
         psNewElement = (CircularSingleLinkListElement_TypeDef*) memalign((size_t)4,(size_t)sizeof(CircularSingleLinkListElement_TypeDef));
        #elif defined ( __GNUC__ )
         psNewElement = (CircularSingleLinkListElement_TypeDef*) malloc(sizeof(CircularSingleLinkListElement_TypeDef));
        #endif

        if((uint32_t)0UL != (uint32_t)psNewElement)
        {
            CircularSingleLinkList__vSetElementData(psNewElement, pvData);

            u32SizeReg = CircularSingleLinkList__u32GetSize(psList);
            if( 0UL == u32SizeReg) /*Empty List*/
            {
                psNewElement1 = psNewElement;
                CircularSingleLinkList__vSetElementNextNode(psNewElement, psNewElement1);
                CircularSingleLinkList__vSetHead(psList,psNewElement);
                CircularSingleLinkList__vSetTail(psList,psNewElement);
            }
            else if((uint32_t)0UL == (uint32_t) psElement) /*Insert to head*/
            {
                    psListTailNode = CircularSingleLinkList__psGetTail(psList);
                    psListHeadNode = CircularSingleLinkList__psGetHead(psList);
                    CircularSingleLinkList__vSetElementNextNode(psNewElement, psListHeadNode);
                    CircularSingleLinkList__vSetElementNextNode(psListTailNode, psNewElement);
                    CircularSingleLinkList__vSetHead(psList,psNewElement);
            }
            else /*Insert beetween nodes*/
            {
                enStatus = CircularSingleLinkList__enIsTail(psList,psElement);
                if((uint32_t) CircularSingleLinkList_enSTATUS_OK == (uint32_t) enStatus)
                {
                    CircularSingleLinkList__vSetTail(psList,psNewElement);
                }
                psNextElement = CircularSingleLinkList__psGetElementNextNode(psElement);
                CircularSingleLinkList__vSetElementNextNode(psNewElement, psNextElement);
                CircularSingleLinkList__vSetElementNextNode(psElement, psNewElement);
            }
            u32SizeReg++;
            CircularSingleLinkList__vSetSize(psList,u32SizeReg);
        }
    }
    return psNewElement;
}



 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psAddEnd(CircularSingleLinkList_TypeDef* psList, void* pvData)
 {
     CircularSingleLinkListElement_TypeDef* psNewElement = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psEndElement =(CircularSingleLinkListElement_TypeDef*) 0UL;
     if(((uint32_t)0UL != (uint32_t)psList))
     {
         psEndElement =  CircularSingleLinkList__psGetTail(psList);
         psNewElement = CircularSingleLinkList__psAddNext(psList, psEndElement, pvData);
     }
     return psNewElement;
 }

 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psAddBegin(CircularSingleLinkList_TypeDef* psList, void* pvData)
 {
     CircularSingleLinkListElement_TypeDef* psNewElement = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     if(((uint32_t)0UL != (uint32_t)psList))
     {
         psNewElement = CircularSingleLinkList__psAddNext(psList, (CircularSingleLinkListElement_TypeDef*) 0UL, pvData);
     }
     return psNewElement;
 }

 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psAddPos(CircularSingleLinkList_TypeDef* psList, uint32_t u32Position, void* pvData)
 {
     CircularSingleLinkListElement_TypeDef* psNewElement = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     CircularSingleLinkListElement_TypeDef* psElement = (CircularSingleLinkListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if(((uint32_t)0UL != (uint32_t)psList))
     {
         u32SizeList = CircularSingleLinkList__u32GetSize(psList);
         if(u32Position <= u32SizeList)
         {
             if(0UL == u32Position)
             {
                 psNewElement = CircularSingleLinkList__psAddBegin(psList, pvData);
             }
             else if (u32Position == u32SizeList)
             {
                 psNewElement = CircularSingleLinkList__psAddEnd(psList, pvData);
             }
             else
             {
                 psElement = CircularSingleLinkList__psGetHead(psList);
                 u32Position--;
                 while(0UL != u32Position)
                 {
                     psElement = CircularSingleLinkList__psGetElementNextNode(psElement);
                     u32Position--;
                 }
                 psNewElement = CircularSingleLinkList__psAddNext(psList, psElement, pvData);
             }
         }
     }
     return psNewElement;
 }



