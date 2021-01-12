/**
 *
 * @file CircularDoubleLinkList_Init.c
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
#include <xUtils/DataStructure/CircularDoubleLinkList/xHeader/CircularDoubleLinkList_Init.h>
#include <stdlib.h>

CircularDoubleLinkList_TypeDef* CircularDoubleLinkList__psInit( void  (*pfvDestroyElementDataArg)(void *DataContainer))
{
    CircularDoubleLinkList_TypeDef *psList = 0;
#if defined ( __TI_ARM__ )
    psList = (CircularDoubleLinkList_TypeDef*) memalign((size_t)4,(size_t)sizeof(CircularDoubleLinkList_TypeDef));
#elif defined ( __GNUC__ )
    psList = (CircularDoubleLinkList_TypeDef*) malloc(sizeof(CircularDoubleLinkList_TypeDef));
#endif
    if((uint32_t)0UL != (uint32_t)psList)
    {
        psList->u32Size= 0UL;
        psList->pfvDestroy = &free;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead =(CircularDoubleLinkListElement_TypeDef*)  0UL;
        psList->psTail =(CircularDoubleLinkListElement_TypeDef*)  0UL;
    }
    return psList;
}


CircularDoubleLinkList_nSTATUS CircularDoubleLinkList__enInit( CircularDoubleLinkList_TypeDef* psList ,void  (*pfvDestroyElementDataArg)(void *DataContainer))
{
    CircularDoubleLinkList_nSTATUS enStatus = CircularDoubleLinkList_enSTATUS_ERROR;
    if((uint32_t)0UL != (uint32_t)psList)
    {
        enStatus = CircularDoubleLinkList_enSTATUS_OK;
        psList->u32Size= 0UL;
        psList->pfvDestroy = (void  (*)(void* List))0UL;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead =(CircularDoubleLinkListElement_TypeDef*)  0UL;
        psList->psTail =(CircularDoubleLinkListElement_TypeDef*)  0UL;
    }
    return enStatus;
}



