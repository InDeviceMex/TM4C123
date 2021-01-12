/**
 *
 * @file SingleLinkList_Add.c
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
#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Add.h>

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/SingleLinkList_List.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/Element/SingleLinkList_Element.h>

#include <stdlib.h>


 SingleLinkListElement_TypeDef* SingleLinkList__psAddNext(SingleLinkList_TypeDef* psList, SingleLinkListElement_TypeDef* psElement, void* pvData)
{
     SingleLinkListElement_TypeDef* psNewElement = (SingleLinkListElement_TypeDef*) 0UL ;
     SingleLinkListElement_TypeDef* psListHeadNode= (SingleLinkListElement_TypeDef*) 0UL ;
     SingleLinkListElement_TypeDef* psElementNextNode= (SingleLinkListElement_TypeDef*) 0UL ;
     uint32_t u32SizeReg = 0U;
     if(((uint32_t)0UL != (uint32_t)psList))
     {
        #if defined ( __TI_ARM__ )
         psNewElement = (SingleLinkListElement_TypeDef*) memalign((size_t)4,(size_t)sizeof(SingleLinkListElement_TypeDef));
        #elif defined ( __GNUC__ )
         psNewElement = (SingleLinkListElement_TypeDef*) malloc(sizeof(SingleLinkListElement_TypeDef));
        #endif

        if((uint32_t)0UL != (uint32_t)psNewElement)
        {
            SingleLinkList__vSetElementData(psNewElement, pvData);

            u32SizeReg = SingleLinkList__u32GetSize(psList);
            if((uint32_t)0UL == (uint32_t) psElement)
            {
                if( 0UL == u32SizeReg)
                {
                    SingleLinkList__vSetTail(psList,psNewElement);
                }
                psListHeadNode = SingleLinkList__psGetHead(psList);
                SingleLinkList__vSetElementNextNode(psNewElement, psListHeadNode);
                SingleLinkList__vSetHead(psList,psNewElement);
            }
            else
            {
                psElementNextNode = SingleLinkList__psGetElementNextNode(psElement);
                if( (uint32_t)0UL == (uint32_t)psElementNextNode)
                {
                    SingleLinkList__vSetTail(psList,psNewElement);
                }
                SingleLinkList__vSetElementNextNode(psNewElement, psElementNextNode);
                SingleLinkList__vSetElementNextNode(psElement, psNewElement);
            }
            u32SizeReg++;
            SingleLinkList__vSetSize(psList,u32SizeReg);
        }
    }
    return psNewElement;
}



 SingleLinkListElement_TypeDef*  SingleLinkList__psAddEnd(SingleLinkList_TypeDef* psList, void* pvData)
 {
     SingleLinkListElement_TypeDef* psNewElement = (SingleLinkListElement_TypeDef*) 0UL ;
     SingleLinkListElement_TypeDef* psEndElement =(SingleLinkListElement_TypeDef*) 0UL;
     if(((uint32_t)0UL != (uint32_t)psList))
     {
         psEndElement =  SingleLinkList__psGetTail(psList);
         psNewElement = SingleLinkList__psAddNext(psList, psEndElement, pvData);
     }
     return psNewElement;
 }

 SingleLinkListElement_TypeDef*  SingleLinkList__psAddBegin(SingleLinkList_TypeDef* psList, void* pvData)
 {
     SingleLinkListElement_TypeDef* psNewElement = (SingleLinkListElement_TypeDef*) 0UL ;
     if(((uint32_t)0UL != (uint32_t)psList))
     {
         psNewElement = SingleLinkList__psAddNext(psList, (SingleLinkListElement_TypeDef*) 0UL, pvData);
     }
     return psNewElement;
 }

 SingleLinkListElement_TypeDef*  SingleLinkList__psAddPos(SingleLinkList_TypeDef* psList, uint32_t u32Position, void* pvData)
 {
     SingleLinkListElement_TypeDef* psNewElement = (SingleLinkListElement_TypeDef*) 0UL ;
     SingleLinkListElement_TypeDef* psElement = (SingleLinkListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if(((uint32_t)0UL != (uint32_t)psList))
     {
         u32SizeList = SingleLinkList__u32GetSize(psList);
         if(u32Position <= u32SizeList)
         {
             if(0UL == u32Position)
             {
                 psElement = (SingleLinkListElement_TypeDef*) 0UL;
             }
             else if((u32SizeList) == u32Position)
             {
                 psElement = SingleLinkList__psGetTail(psList);
             }
             else
             {
                 psElement = SingleLinkList__psGetHead(psList);
                 u32Position--;
                 while(0UL != u32Position)
                 {
                     psElement = SingleLinkList__psGetElementNextNode(psElement);
                     u32Position--;
                 }
             }
             psNewElement = SingleLinkList__psAddNext(psList, psElement, pvData);
         }
     }
     return psNewElement;
 }
