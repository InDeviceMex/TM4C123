/**
 *
 * @file SLinkedList_Init.c
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

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Init.h>
#include <stdlib.h>

SLinkedList_TypeDef* SLinkedList__psInit(void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    SLinkedList_TypeDef *psList = 0;
#if defined (__TI_ARM__ )
    psList = (SLinkedList_TypeDef*) memalign((size_t) 4,(size_t) sizeof(SLinkedList_TypeDef));
#elif defined (__GNUC__ )
    psList = (SLinkedList_TypeDef*) malloc(sizeof(SLinkedList_TypeDef));
#endif
    if((uint32_t) 0UL != (uint32_t) psList)
    {
        psList->u32Size= 0UL;
        psList->pfvDestroy = &free;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead = (SLinkedListElement_TypeDef*)  0UL;
        psList->psTail = (SLinkedListElement_TypeDef*)  0UL;
    }
    return psList;
}

SLinkedList_nSTATUS SLinkedList__enInit(SLinkedList_TypeDef* psList, void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    if((uint32_t) 0UL != (uint32_t) psList)
    {
        enStatus = SLinkedList_enSTATUS_OK;
        psList->u32Size= 0UL;
        psList->pfvDestroy = (void (*) (void* List))0UL;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead = (SLinkedListElement_TypeDef*)  0UL;
        psList->psTail = (SLinkedListElement_TypeDef*)  0UL;
    }
    return enStatus;
}

