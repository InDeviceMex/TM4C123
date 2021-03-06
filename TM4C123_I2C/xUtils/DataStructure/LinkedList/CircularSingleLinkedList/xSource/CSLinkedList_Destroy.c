/**
 *
 * @file CSLinkedList_Destroy.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Destroy.h>

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Init.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Remove.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/xHeader/CSLinkedList_Size.h>
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/xHeader/CSLinkedList_Head.h>
#include <stdlib.h>


#include <stdlib.h>

void CSLinkedList__vDestroy(CSLinkedList_TypeDef* psList)
 {
     CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
     CSLinkedListElement_TypeDef* psHeadElement = (CSLinkedListElement_TypeDef*) 0UL;
     void * pvDataElement = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     void (*pfvListDestroy) (void* List) = (void (*) (void* List) )0UL;

     if((CSLinkedList_TypeDef*)0 != psList)
     {
         enStatus = CSLinkedList_enSTATUS_OK;
         u32SizeReg = CSLinkedList__u32GetSize(psList);
         pfvListDestroy = psList->pfvDestroy;
         while (u32SizeReg> 0UL)
         {
             psHeadElement = CSLinkedList__psGetHead(psList);
             enStatus = CSLinkedList__enRemoveNext(psList, psHeadElement, (void **) & pvDataElement);
             if((CSLinkedList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) psList->pfvDestroyElementData))
             {
                 psList->pfvDestroyElementData(pvDataElement);
             }
             u32SizeReg = CSLinkedList__u32GetSize(psList);
         }

         psList->pfu32Match = (uint32_t (*) (const void *pcvKey1, const void *pcvKey2)) 0UL;
         psList->pfvDestroy = (void (*) (void* List)) 0UL;
         psList->pfvDestroyElementData = (void (*) (void* DataContainer)) 0UL;
         psList->psHead = (CSLinkedListElement_TypeDef *) 0UL;
         psList->psTail = (CSLinkedListElement_TypeDef *) 0UL;
         psList->u32Size = 0UL;

         if((CSLinkedList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) pfvListDestroy))
         {
             pfvListDestroy(psList);
             psList = (CSLinkedList_TypeDef*)0UL;
         }
     }
 }



