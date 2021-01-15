/**
 *
 * @file CircularSingleLinkList_Node.c
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
#include <xUtils/DataStructure/CircularSingleLinkList/xHeader/CircularSingleLinkList_Node.h>

#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/List/CircularSingleLinkList_List.h>
#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/Element/CircularSingleLinkList_Element.h>



 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psGetNodePos(const CircularSingleLinkList_TypeDef* psList, uint32_t u32Position)
 {
     CircularSingleLinkListElement_TypeDef* psElement = (CircularSingleLinkListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         u32SizeList = CircularSingleLinkList__u32GetSize(psList);
         if(u32Position < u32SizeList)
         {
             if(0UL == u32Position)
             {
                 psElement = CircularSingleLinkList__psGetHead(psList);
             }
             else if((u32SizeList -1UL) == u32Position)
             {
                 psElement = CircularSingleLinkList__psGetTail(psList);
             }
             else
             {
                 psElement = CircularSingleLinkList__psGetHead(psList);
                 while(0UL != u32Position)
                 {
                     psElement = CircularSingleLinkList__psGetElementNextNode(psElement);
                     u32Position--;
                 }
             }
         }
     }
     return psElement;
 }


 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psGetNodeEnd(const CircularSingleLinkList_TypeDef* psList)
 {
     CircularSingleLinkListElement_TypeDef* psElement = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = CircularSingleLinkList__psGetTail(psList);
     }
     return psElement;
 }

 CircularSingleLinkListElement_TypeDef*  CircularSingleLinkList__psGetNodeBegin(const CircularSingleLinkList_TypeDef* psList)
 {
     CircularSingleLinkListElement_TypeDef* psElement = (CircularSingleLinkListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = CircularSingleLinkList__psGetHead(psList);
     }
     return psElement;
 }

 uint32_t CircularSingleLinkList__u32GetAllNode(const CircularSingleLinkList_TypeDef* psList, const void** pvData, uint32_t MaxLength)
 {
     CircularSingleLinkListElement_TypeDef *psMember = (CircularSingleLinkListElement_TypeDef*) 0UL;
     CircularSingleLinkListElement_TypeDef *psMemberTemp = (CircularSingleLinkListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     uint32_t u32SizeList = 0UL;

     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != pvData ) && (0UL != MaxLength))
     {
         psMember = CircularSingleLinkList__psGetHead(psList);
         u32SizeList = CircularSingleLinkList__u32GetSize(psList);
          while((0UL != MaxLength) && (u32SizeReg != u32SizeList))
          {
              pvDataMember=CircularSingleLinkList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              MaxLength--;
              psMemberTemp = CircularSingleLinkList__psGetElementNextNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

 uint32_t CircularSingleLinkList__u32GetNNode(const CircularSingleLinkList_TypeDef* psList, const void** pvData,uint32_t u32Nodes, uint32_t MaxLength)
 {
     CircularSingleLinkListElement_TypeDef *psMember = (CircularSingleLinkListElement_TypeDef*) 0UL;
     CircularSingleLinkListElement_TypeDef *psMemberTemp = (CircularSingleLinkListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     uint32_t u32SizeList = 0UL;

     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != pvData ) && (0UL != MaxLength)&& (0UL != u32Nodes))
     {
         psMember = CircularSingleLinkList__psGetHead(psList);
         u32SizeList = CircularSingleLinkList__u32GetSize(psList);
          while((0UL != MaxLength) && (u32SizeReg != u32SizeList) && (0UL != u32Nodes))
          {
              pvDataMember=CircularSingleLinkList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              MaxLength--;
              u32Nodes--;
              psMemberTemp = CircularSingleLinkList__psGetElementNextNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }



