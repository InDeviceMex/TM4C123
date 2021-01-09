/**
 *
 * @file DoubleLinkList_Data.c
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

#include <xUtils/DataStructure/DoubleLinkList/xHeader/DoubleLinkList_Data.h>
#include <xUtils/DataStructure/DoubleLinkList/xHeader/DoubleLinkList_Node.h>

#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/List/DoubleLinkList_List.h>
#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/Element/DoubleLinkList_Element.h>



 void* DoubleLinkList__pvGetNodeDataPos(const DoubleLinkList_TypeDef* psList, uint32_t u32Position)
 {
     DoubleLinkListElement_TypeDef* psElement = (DoubleLinkListElement_TypeDef*) 0UL;
     void* pvElementData = (void*) 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = DoubleLinkList__psGetNodePos(psList,u32Position);
         if((uint32_t)0UL != (uint32_t)psElement)
         {
             pvElementData = DoubleLinkList__pvGetElementData(psElement);
         }
     }
     return pvElementData;
 }


 void* DoubleLinkList__pvGetNodeDataEnd(const DoubleLinkList_TypeDef* psList)
 {
     void* pvElementData = (void*) 0UL;
     uint32_t u32SizeList = 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         u32SizeList = DoubleLinkList__u32GetSize(psList);
         if(u32SizeList != 0UL)
         {
             pvElementData = DoubleLinkList__pvGetNodeDataPos(psList, u32SizeList - 1UL);
         }
     }
     return pvElementData;
 }

 void* DoubleLinkList__pvGetNodeDataBegin(const DoubleLinkList_TypeDef* psList)
 {
     void* pvElementData = (void*) 0UL;
     uint32_t u32SizeList = 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         u32SizeList = DoubleLinkList__u32GetSize(psList);
         if(u32SizeList != 0UL)
         {
             pvElementData = DoubleLinkList__pvGetNodeDataPos(psList, 0UL);
         }
     }
     return pvElementData;
 }


