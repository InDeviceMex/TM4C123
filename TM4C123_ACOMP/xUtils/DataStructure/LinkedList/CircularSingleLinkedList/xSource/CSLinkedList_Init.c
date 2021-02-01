/**
 *
 * @file CSLinkedList_Init.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/xHeader/CSLinkedList_Init.h>
#include <stdlib.h>

CSLinkedList_TypeDef* CSLinkedList__psInit( void    (*pfvDestroyElementDataArg) (void *DataContainer))
{
    CSLinkedList_TypeDef *psList = 0;
#if defined ( __TI_ARM__ )
    psList = (CSLinkedList_TypeDef*) memalign((size_t) 4,(size_t) sizeof(CSLinkedList_TypeDef));
#elif defined ( __GNUC__ )
    psList = (CSLinkedList_TypeDef*) malloc(sizeof(CSLinkedList_TypeDef));
#endif
    if((uint32_t) 0UL != (uint32_t) psList)
    {
        psList->u32Size= 0UL;
        psList->pfvDestroy = &free;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead = (CSLinkedListElement_TypeDef*)  0UL;
    }
    return psList;
}


CSLinkedList_nSTATUS CSLinkedList__enInit( CSLinkedList_TypeDef* psList ,void    (*pfvDestroyElementDataArg) (void *DataContainer))
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    if((uint32_t) 0UL != (uint32_t) psList)
    {
        enStatus = CSLinkedList_enSTATUS_OK;
        psList->u32Size= 0UL;
        psList->pfvDestroy = (void    (*) (void* List))0UL;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead = (CSLinkedListElement_TypeDef*)  0UL;
    }
    return enStatus;
}


