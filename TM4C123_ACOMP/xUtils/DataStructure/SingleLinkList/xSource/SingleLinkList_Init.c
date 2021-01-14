/**
 *
 * @file SingleLinkList_Init.c
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

#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Init.h>
#include <stdlib.h>

SingleLinkList_TypeDef* SingleLinkList__psInit( void  (*pfvDestroyElementDataArg)(void *DataContainer))
{
    SingleLinkList_TypeDef *psList = 0;
#if defined ( __TI_ARM__ )
    psList = (SingleLinkList_TypeDef*) memalign((size_t)4,(size_t)sizeof(SingleLinkList_TypeDef));
#elif defined ( __GNUC__ )
    psList = (SingleLinkList_TypeDef*) malloc(sizeof(SingleLinkList_TypeDef));
#endif
    if((uint32_t)0UL != (uint32_t)psList)
    {
        psList->u32Size= 0UL;
        psList->pfvDestroy = &free;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead =(SingleLinkListElement_TypeDef*)  0UL;
        psList->psTail =(SingleLinkListElement_TypeDef*)  0UL;
    }
    return psList;
}

SingleLinkList_nSTATUS SingleLinkList__enInit( SingleLinkList_TypeDef* psList ,void  (*pfvDestroyElementDataArg)(void *DataContainer))
{
    SingleLinkList_nSTATUS enStatus = SingleLinkList_enSTATUS_ERROR;
    if((uint32_t)0UL != (uint32_t)psList)
    {
        enStatus = SingleLinkList_enSTATUS_OK;
        psList->u32Size= 0UL;
        psList->pfvDestroy = (void  (*)(void* List))0UL;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead =(SingleLinkListElement_TypeDef*)  0UL;
        psList->psTail =(SingleLinkListElement_TypeDef*)  0UL;
    }
    return enStatus;
}

