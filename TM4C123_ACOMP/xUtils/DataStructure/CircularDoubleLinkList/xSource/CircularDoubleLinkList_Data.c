/**
 *
 * @file CircularDoubleLinkList_Data.c
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
#include <xUtils/DataStructure/CircularDoubleLinkList/xHeader/CircularDoubleLinkList_Data.h>
#include <xUtils/DataStructure/CircularDoubleLinkList/xHeader/CircularDoubleLinkList_Node.h>

#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/List/CircularDoubleLinkList_List.h>
#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/Element/CircularDoubleLinkList_Element.h>



 void* CircularDoubleLinkList__pvGetNodeDataPos(const CircularDoubleLinkList_TypeDef* psList, uint32_t u32Position)
 {
     CircularDoubleLinkListElement_TypeDef* psElement = (CircularDoubleLinkListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = CircularDoubleLinkList__psGetNodePos(psList,u32Position);
         if((uint32_t)0UL != (uint32_t)psElement)
         {
             pvElementData = CircularDoubleLinkList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }


 void* CircularDoubleLinkList__pvGetNodeDataEnd(const CircularDoubleLinkList_TypeDef* psList)
 {
     CircularDoubleLinkListElement_TypeDef* psElement = (CircularDoubleLinkListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = CircularDoubleLinkList__psGetNodeEnd(psList);
         if(psElement != 0UL)
         {
             pvElementData = CircularDoubleLinkList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }

 void* CircularDoubleLinkList__pvGetNodeDataBegin(const CircularDoubleLinkList_TypeDef* psList)
 {
     CircularDoubleLinkListElement_TypeDef* psElement = (CircularDoubleLinkListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = CircularDoubleLinkList__psGetNodeBegin(psList);
         if(psElement != 0UL)
         {
             pvElementData = CircularDoubleLinkList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }



