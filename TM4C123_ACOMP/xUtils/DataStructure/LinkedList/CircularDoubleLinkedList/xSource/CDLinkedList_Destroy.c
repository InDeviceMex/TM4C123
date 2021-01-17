/**
 *
 * @file CDLinkedList_Destroy.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Destroy.h>

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Init.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Remove.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/xHeader/CDLinkedList_Size.h>
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/xHeader/CDLinkedList_Tail.h>
#include <stdlib.h>


#include <stdlib.h>

void CDLinkedList__vDestroy( CDLinkedList_TypeDef* psList)
 {
     CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
     CDLinkedListElement_TypeDef* psTailElement = (CDLinkedListElement_TypeDef*) 0UL;
     void * pvDataElement = (void*)0UL;
     uint32_t u32SizeReg = 0UL;
     void  (*pfvListDestroy)(void* List)  = (void  (*)(void* List) )0UL;

     if( (CDLinkedList_TypeDef*)0 != psList)
     {
         enStatus = CDLinkedList_enSTATUS_OK;
         u32SizeReg = CDLinkedList__u32GetSize(psList);
         pfvListDestroy =  psList->pfvDestroy;
         while (u32SizeReg> 0UL)
         {
             psTailElement = CDLinkedList__psGetTail(psList);
             enStatus = CDLinkedList__enRemove(psList,psTailElement,(void **)&pvDataElement);
             if((CDLinkedList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) psList->pfvDestroyElementData))
             {
                 psList->pfvDestroyElementData(pvDataElement);
             }
             u32SizeReg = CDLinkedList__u32GetSize(psList);
         }

         psList->pfu32Match = (uint32_t  (*)(const void *pcvKey1, const void *pcvKey2)) 0UL;
         psList->pfvDestroy = (void  (*)(void* List)) 0UL;
         psList->pfvDestroyElementData = (void  (*)(void* DataContainer)) 0UL;
         psList->psHead = (CDLinkedListElement_TypeDef *) 0UL;
         psList->psTail = (CDLinkedListElement_TypeDef *) 0UL;
         psList->u32Size = 0UL;

         if((CDLinkedList_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t)pfvListDestroy))
         {
             pfvListDestroy(psList);
             psList = (CDLinkedList_TypeDef*)0UL;
         }

     }
 }





