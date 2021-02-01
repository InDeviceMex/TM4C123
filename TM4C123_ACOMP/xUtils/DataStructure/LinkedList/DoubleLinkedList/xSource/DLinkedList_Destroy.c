/**
 *
 * @file DLinkedList_Destroy.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Destroy.h>

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Init.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Remove.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/xHeader/DLinkedList_Size.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/xHeader/DLinkedList_Tail.h>
#include <stdlib.h>

void DLinkedList__vDestroy( DLinkedList_TypeDef* psList)
 {
     DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
     DLinkedListElement_TypeDef* psTailElement = (DLinkedListElement_TypeDef*) 0UL;
     void * pvDataElement = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     void (*pfvListDestroy) (void* List) = (void (*) (void* List) )0UL;

     if((DLinkedList_TypeDef*)0 != psList)
     {
         enStatus = DLinkedList_enSTATUS_OK;
         u32SizeReg = DLinkedList__u32GetSize(psList);
         pfvListDestroy = psList->pfvDestroy;
         while (u32SizeReg> 0UL)
         {
             psTailElement = DLinkedList__psGetTail(psList);
             enStatus = DLinkedList__enRemove(psList,psTailElement,(void **) & pvDataElement);
             if((DLinkedList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) psList->pfvDestroyElementData))
             {
                 psList->pfvDestroyElementData(pvDataElement);
             }
             u32SizeReg = DLinkedList__u32GetSize(psList);
         }

         psList->pfu32Match = (uint32_t    (*) (const void *pcvKey1, const void *pcvKey2)) 0UL;
         psList->pfvDestroy = (void (*) (void* List)) 0UL;
         psList->pfvDestroyElementData = (void (*) (void* DataContainer)) 0UL;
         psList->psHead = (DLinkedListElement_TypeDef *) 0UL;
         psList->psTail = (DLinkedListElement_TypeDef *) 0UL;
         psList->u32Size = 0UL;

         if((DLinkedList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) pfvListDestroy))
         {
             pfvListDestroy(psList);
             psList = (DLinkedList_TypeDef*)0UL;
         }
     }
 }



