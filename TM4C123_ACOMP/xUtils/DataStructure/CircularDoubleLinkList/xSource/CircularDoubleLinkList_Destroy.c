/**
 *
 * @file CircularDoubleLinkList_Destroy.c
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
#include <xUtils/DataStructure/CircularDoubleLinkList/xHeader/CircularDoubleLinkList_Destroy.h>

#include <xUtils/DataStructure/CircularDoubleLinkList/xHeader/CircularDoubleLinkList_Init.h>
#include <xUtils/DataStructure/CircularDoubleLinkList/xHeader/CircularDoubleLinkList_Remove.h>
#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/List/xHeader/CircularDoubleLinkList_Size.h>
#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/List/xHeader/CircularDoubleLinkList_Tail.h>
#include <stdlib.h>


#include <stdlib.h>

void CircularDoubleLinkList__vDestroy( CircularDoubleLinkList_TypeDef* psList)
 {
     CircularDoubleLinkList_nSTATUS enStatus = CircularDoubleLinkList_enSTATUS_ERROR;
     CircularDoubleLinkListElement_TypeDef* psTailElement = (CircularDoubleLinkListElement_TypeDef*) 0UL;
     void * pvDataElement = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     void  (*pfvListDestroy)(void* List)  = (void  (*)(void* List) )0UL;

     if( (CircularDoubleLinkList_TypeDef*)0 != psList)
     {
         enStatus = CircularDoubleLinkList_enSTATUS_OK;
         u32SizeReg = CircularDoubleLinkList__u32GetSize(psList);
         pfvListDestroy =  psList->pfvDestroy;
         while (u32SizeReg> 0UL)
         {
             psTailElement = CircularDoubleLinkList__psGetTail(psList);
             enStatus = CircularDoubleLinkList__enRemove(psList,psTailElement,(void **)&pvDataElement);
             if((CircularDoubleLinkList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) psList->pfvDestroyElementData))
             {
                 psList->pfvDestroyElementData(pvDataElement);
             }
             u32SizeReg = CircularDoubleLinkList__u32GetSize(psList);
         }

         if((CircularDoubleLinkList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t)pfvListDestroy))
         {
             pfvListDestroy(psList);
         }

         psList->pfu32Match = (uint32_t  (*)(const void *pcvKey1, const void *pcvKey2)) 0UL;
         psList->pfvDestroy = (void  (*)(void* List)) 0UL;
         psList->pfvDestroyElementData = (void  (*)(void* DataContainer)) 0UL;
         psList->psHead = (CircularDoubleLinkListElement_TypeDef *) 0UL;
         psList->psTail = (CircularDoubleLinkListElement_TypeDef *) 0UL;
         psList->u32Size = 0UL;
     }
 }





