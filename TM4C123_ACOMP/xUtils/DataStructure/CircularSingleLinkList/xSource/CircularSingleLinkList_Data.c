/**
 *
 * @file CircularSingleLinkList_Data.c
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
 * @verbatim 10 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/CircularSingleLinkList/xHeader/CircularSingleLinkList_Data.h>
#include <xUtils/DataStructure/CircularSingleLinkList/xHeader/CircularSingleLinkList_Node.h>

#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/List/CircularSingleLinkList_List.h>
#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/Element/CircularSingleLinkList_Element.h>



 void* CircularSingleLinkList__pvGetNodeDataPos(const CircularSingleLinkList_TypeDef* psList, uint32_t u32Position)
 {
     CircularSingleLinkListElement_TypeDef* psElement = (CircularSingleLinkListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = CircularSingleLinkList__psGetNodePos(psList,u32Position);
         if((uint32_t)0UL != (uint32_t)psElement)
         {
             pvElementData = CircularSingleLinkList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }


 void* CircularSingleLinkList__pvGetNodeDataEnd(const CircularSingleLinkList_TypeDef* psList)
 {
     CircularSingleLinkListElement_TypeDef* psElement = (CircularSingleLinkListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = CircularSingleLinkList__psGetNodeEnd(psList);
         if(psElement != 0UL)
         {
             pvElementData = CircularSingleLinkList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }

 void* CircularSingleLinkList__pvGetNodeDataBegin(const CircularSingleLinkList_TypeDef* psList)
 {
     CircularSingleLinkListElement_TypeDef* psElement = (CircularSingleLinkListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = CircularSingleLinkList__psGetNodeBegin(psList);
         if(psElement != 0UL)
         {
             pvElementData = CircularSingleLinkList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }



