/**
 *
 * @file CDLinkedList_Init.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/xHeader/CDLinkedList_Init.h>
#include <stdlib.h>

CDLinkedList_TypeDef* CDLinkedList__psInit(void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    CDLinkedList_TypeDef *psList = 0;
#if defined (__TI_ARM__ )
    psList = (CDLinkedList_TypeDef*) memalign((size_t) 4, (size_t) sizeof(CDLinkedList_TypeDef));
#elif defined (__GNUC__ )
    psList = (CDLinkedList_TypeDef*) malloc(sizeof(CDLinkedList_TypeDef));
#endif
    if((uint32_t) 0UL != (uint32_t) psList)
    {
        psList->u32Size = 0UL;
        psList->pfvDestroy = &free;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead = (CDLinkedListElement_TypeDef*)  0UL;
        psList->psTail = (CDLinkedListElement_TypeDef*)  0UL;
    }
    return psList;
}


CDLinkedList_nSTATUS CDLinkedList__enInit(CDLinkedList_TypeDef* psList, void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    if((uint32_t) 0UL != (uint32_t) psList)
    {
        enStatus = CDLinkedList_enSTATUS_OK;
        psList->u32Size = 0UL;
        psList->pfvDestroy = (void (*) (void* List))0UL;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead = (CDLinkedListElement_TypeDef*)  0UL;
        psList->psTail = (CDLinkedListElement_TypeDef*)  0UL;
    }
    return enStatus;
}



