/**
 *
 * @file SingleLinkList_Data.c
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
 * @verbatim 7 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Data.h>
#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Node.h>

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/SingleLinkList_List.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/Element/SingleLinkList_Element.h>



 void* SingleLinkList__pvGetNodeDataPos(const SingleLinkList_TypeDef* psList, uint32_t u32Position)
 {
     SingleLinkListElement_TypeDef* psElement = (SingleLinkListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = SingleLinkList__psGetNodePos(psList,u32Position);
         if((uint32_t)0UL != (uint32_t)psElement)
         {
             pvElementData = SingleLinkList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }


 void* SingleLinkList__pvGetNodeDataEnd(const SingleLinkList_TypeDef* psList)
 {
     SingleLinkListElement_TypeDef* psElement = (SingleLinkListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = SingleLinkList__psGetNodeEnd(psList);
         if(psElement != 0UL)
         {
             pvElementData = SingleLinkList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }

 void* SingleLinkList__pvGetNodeDataBegin(const SingleLinkList_TypeDef* psList)
 {
     SingleLinkListElement_TypeDef* psElement = (SingleLinkListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = SingleLinkList__psGetNodeBegin(psList);
         if(psElement != 0UL)
         {
             pvElementData = SingleLinkList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }



