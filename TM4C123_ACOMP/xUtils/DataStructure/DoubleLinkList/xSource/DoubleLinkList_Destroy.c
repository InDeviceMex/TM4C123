/**
 *
 * @file DoubleLinkList_Destroy.c
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
#include <xUtils/DataStructure/DoubleLinkList/xHeader/DoubleLinkList_Destroy.h>

#include <xUtils/DataStructure/DoubleLinkList/xHeader/DoubleLinkList_Init.h>
#include <xUtils/DataStructure/DoubleLinkList/xHeader/DoubleLinkList_Remove.h>
#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/List/xHeader/DoubleLinkList_Size.h>
#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/List/xHeader/DoubleLinkList_Tail.h>
#include <stdlib.h>


#include <stdlib.h>

void DoubleLinkList__vDestroy( DoubleLinkList_TypeDef* psList)
 {
     DoubleLinkList_nSTATUS enStatus = DoubleLinkList_enSTATUS_ERROR;
     DoubleLinkListElement_TypeDef* psTailElement = (DoubleLinkListElement_TypeDef*) 0UL;
     void * pvDataElement = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     void  (*pfvListDestroy)(void* List)  = (void  (*)(void* List) )0UL;

     if( (DoubleLinkList_TypeDef*)0 != psList)
     {
         enStatus = DoubleLinkList_enSTATUS_OK;
         u32SizeReg = DoubleLinkList__u32GetSize(psList);
         pfvListDestroy =  psList->pfvDestroy;
         while (u32SizeReg> 0UL)
         {
             psTailElement = DoubleLinkList__psGetTail(psList);
             enStatus = DoubleLinkList__enRemove(psList,psTailElement,(void **)&pvDataElement);
             if((DoubleLinkList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) psList->pfvDestroyElementData))
             {
                 psList->pfvDestroyElementData(pvDataElement);
             }
             u32SizeReg = DoubleLinkList__u32GetSize(psList);
         }

         if((DoubleLinkList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t)pfvListDestroy))
         {
             pfvListDestroy(psList);
         }

         psList->pfu32Match = (uint32_t  (*)(const void *pcvKey1, const void *pcvKey2)) 0UL;
         psList->pfvDestroy = (void  (*)(void* List)) 0UL;
         psList->pfvDestroyElementData = (void  (*)(void* DataContainer)) 0UL;
         psList->psHead = (DoubleLinkListElement_TypeDef *) 0UL;
         psList->psTail = (DoubleLinkListElement_TypeDef *) 0UL;
         psList->u32Size = 0UL;
     }
 }



