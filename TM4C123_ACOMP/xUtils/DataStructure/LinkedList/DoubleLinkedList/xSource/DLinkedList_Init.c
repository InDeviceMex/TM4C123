/**
 *
 * @file DLinkedList_Init.c
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

#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/xHeader/DLinkedList_Init.h>
#include <stdlib.h>

DLinkedList_TypeDef* DLinkedList__psInit(void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    DLinkedList_TypeDef *psList = 0;
#if defined (__TI_ARM__ )
    psList = (DLinkedList_TypeDef*) memalign((size_t) 4,(size_t) sizeof(DLinkedList_TypeDef));
#elif defined (__GNUC__ )
    psList = (DLinkedList_TypeDef*) malloc(sizeof(DLinkedList_TypeDef));
#endif
    if((uint32_t) 0UL != (uint32_t) psList)
    {
        psList->u32Size = 0UL;
        psList->pfvDestroy = &free;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead = (DLinkedListElement_TypeDef*)  0UL;
        psList->psTail = (DLinkedListElement_TypeDef*)  0UL;
    }
    return psList;
}


DLinkedList_nSTATUS DLinkedList__enInit(DLinkedList_TypeDef* psList, void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    if((uint32_t) 0UL != (uint32_t) psList)
    {
        enStatus = DLinkedList_enSTATUS_OK;
        psList->u32Size = 0UL;
        psList->pfvDestroy = (void (*) (void* List))0UL;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead = (DLinkedListElement_TypeDef*)  0UL;
        psList->psTail = (DLinkedListElement_TypeDef*)  0UL;
    }
    return enStatus;
}



