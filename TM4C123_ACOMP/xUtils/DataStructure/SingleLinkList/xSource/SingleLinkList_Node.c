/**
 *
 * @file SingleLinkList_Node.c
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
#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Node.h>

#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/SingleLinkList_List.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/Element/SingleLinkList_Element.h>



 SingleLinkListElement_TypeDef*  SingleLinkList__psGetNodePos(const SingleLinkList_TypeDef* psList, uint32_t u32Position)
 {
     SingleLinkListElement_TypeDef* psElement = (SingleLinkListElement_TypeDef*) 0UL;
     uint32_t u32SizeList = 0UL;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         u32SizeList = SingleLinkList__u32GetSize(psList);
         if(u32Position < u32SizeList)
         {
             if(0UL == u32Position)
             {
                 psElement = SingleLinkList__psGetHead(psList);
             }
             else if((u32SizeList -1UL) == u32Position)
             {
                 psElement = SingleLinkList__psGetTail(psList);
             }
             else
             {
                 psElement = SingleLinkList__psGetHead(psList);
                 while(0UL != u32Position)
                 {
                     psElement = SingleLinkList__psGetElementNextNode(psElement);
                     u32Position--;
                 }
             }
         }
     }
     return psElement;
 }


 SingleLinkListElement_TypeDef*  SingleLinkList__psGetNodeEnd(const SingleLinkList_TypeDef* psList)
 {
     SingleLinkListElement_TypeDef* psElement = (SingleLinkListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = SingleLinkList__psGetTail(psList);
     }
     return psElement;
 }

 SingleLinkListElement_TypeDef*  SingleLinkList__psGetNodeBegin(const SingleLinkList_TypeDef* psList)
 {
     SingleLinkListElement_TypeDef* psElement = (SingleLinkListElement_TypeDef*) 0UL ;
     if((uint32_t)0UL != (uint32_t)psList)
     {
         psElement = SingleLinkList__psGetHead(psList);
     }
     return psElement;
 }

 uint32_t SingleLinkList__u32GetAllNode(const SingleLinkList_TypeDef* psList, const void** pvData, uint32_t MaxLength)
 {
     SingleLinkListElement_TypeDef *psMember = (SingleLinkListElement_TypeDef*) 0UL;
     SingleLinkListElement_TypeDef *psMemberTemp = (SingleLinkListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != pvData ) && (0UL != MaxLength))
     {
         psMember = SingleLinkList__psGetHead(psList);
          while(((uint32_t)0UL != (uint32_t)psMember) && (0UL != MaxLength))
          {
              pvDataMember=SingleLinkList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              MaxLength--;
              psMemberTemp = SingleLinkList__psGetElementNextNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

 uint32_t SingleLinkList__u32GetNNode(const SingleLinkList_TypeDef* psList, const void** pvData,uint32_t u32Nodes, uint32_t MaxLength)
 {
     SingleLinkListElement_TypeDef *psMember = (SingleLinkListElement_TypeDef*) 0UL;
     SingleLinkListElement_TypeDef *psMemberTemp = (SingleLinkListElement_TypeDef*) 0UL;
     void* pvDataMember = (void*)0UL;
     uint32_t u32SizeReg = 0UL;

     if(((uint32_t)0UL != (uint32_t)psList) && ((uint32_t)0UL != pvData ) && (0UL != MaxLength)&& (0UL != u32Nodes))
     {
         psMember = SingleLinkList__psGetHead(psList);
          while(((uint32_t)0UL != (uint32_t)psMember) && (0UL != MaxLength) && (0UL != u32Nodes))
          {
              pvDataMember=SingleLinkList__pvGetElementData(psMember);
              *pvData = pvDataMember;
              u32SizeReg++;
              pvData += 1U;
              MaxLength--;
              u32Nodes--;
              psMemberTemp = SingleLinkList__psGetElementNextNode(psMember);
              psMember = psMemberTemp;
          }
     }
     return u32SizeReg;
 }

