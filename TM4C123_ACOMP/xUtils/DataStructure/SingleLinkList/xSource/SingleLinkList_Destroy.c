/**
 *
 * @file SingleLinkList_Destroy.c
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

#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Destroy.h>

#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Init.h>
#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Remove.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/xHeader/SingleLinkList_Size.h>
#include <stdlib.h>


#include <stdlib.h>

void SingleLinkList__vDestroy( SingleLinkList_TypeDef* psList)
 {
     SingleLinkList_nSTATUS enStatus = SingleLinkList_enSTATUS_ERROR;
     void * pvDataElement = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     void  (*pfvListDestroy)(void* List)  = (void  (*)(void* List) )0UL;

     if( (SingleLinkList_TypeDef*)0 != psList)
     {
         enStatus = SingleLinkList_enSTATUS_OK;
         u32SizeReg = SingleLinkList__u32GetSize(psList);
         pfvListDestroy =  psList->pfvDestroy;
         while (u32SizeReg> 0UL)
         {
             enStatus = SingleLinkList__enRemoveNext(psList,(SingleLinkListElement_TypeDef*)0,(void **)&pvDataElement);
             if((SingleLinkList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) psList->pfvDestroyElementData))
             {
                 psList->pfvDestroyElementData(pvDataElement);
             }
             u32SizeReg = SingleLinkList__u32GetSize(psList);
         }

         if((SingleLinkList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t)pfvListDestroy))
         {
             pfvListDestroy(psList);
         }

         psList->pfu32Match = (uint32_t  (*)(const void *pcvKey1, const void *pcvKey2)) 0UL;
         psList->pfvDestroy = (void  (*)(void* List)) 0UL;
         psList->pfvDestroyElementData = (void  (*)(void* DataContainer)) 0UL;
         psList->psHead = (SingleLinkListElement_TypeDef *) 0UL;
         psList->psTail = (SingleLinkListElement_TypeDef *) 0UL;
         psList->u32Size = 0UL;
     }
 }

