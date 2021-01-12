/**
 *
 * @file CircularSingleLinkList_Destroy.c
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
#include <xUtils/DataStructure/CircularSingleLinkList/xHeader/CircularSingleLinkList_Destroy.h>

#include <xUtils/DataStructure/CircularSingleLinkList/xHeader/CircularSingleLinkList_Init.h>
#include <xUtils/DataStructure/CircularSingleLinkList/xHeader/CircularSingleLinkList_Remove.h>
#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/List/xHeader/CircularSingleLinkList_Size.h>
#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/List/xHeader/CircularSingleLinkList_Head.h>
#include <stdlib.h>


#include <stdlib.h>

void CircularSingleLinkList__vDestroy( CircularSingleLinkList_TypeDef* psList)
 {
     CircularSingleLinkList_nSTATUS enStatus = CircularSingleLinkList_enSTATUS_ERROR;
     CircularSingleLinkListElement_TypeDef* psHeadElement = (CircularSingleLinkListElement_TypeDef*) 0UL;
     void * pvDataElement = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     void  (*pfvListDestroy)(void* List)  = (void  (*)(void* List) )0UL;

     if( (CircularSingleLinkList_TypeDef*)0 != psList)
     {
         enStatus = CircularSingleLinkList_enSTATUS_OK;
         u32SizeReg = CircularSingleLinkList__u32GetSize(psList);
         pfvListDestroy =  psList->pfvDestroy;
         while (u32SizeReg> 0UL)
         {
             psHeadElement = CircularSingleLinkList__psGetHead(psList);
             enStatus = CircularSingleLinkList__enRemoveNext(psList,psHeadElement,(void **)&pvDataElement);
             if((CircularSingleLinkList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) psList->pfvDestroyElementData))
             {
                 psList->pfvDestroyElementData(pvDataElement);
             }
             u32SizeReg = CircularSingleLinkList__u32GetSize(psList);
         }

         if((CircularSingleLinkList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t)pfvListDestroy))
         {
             pfvListDestroy(psList);
         }

         psList->pfu32Match = (uint32_t  (*)(const void *pcvKey1, const void *pcvKey2)) 0UL;
         psList->pfvDestroy = (void  (*)(void* List)) 0UL;
         psList->pfvDestroyElementData = (void  (*)(void* DataContainer)) 0UL;
         psList->psHead = (CircularSingleLinkListElement_TypeDef *) 0UL;
         psList->psTail = (CircularSingleLinkListElement_TypeDef *) 0UL;
         psList->u32Size = 0UL;
     }
 }



