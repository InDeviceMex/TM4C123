/**
 *
 * @file DoubleLinkList_Init.c
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

#include <xUtils/DataStructure/DoubleLinkList/xHeader/DoubleLinkList_Init.h>
#include <stdlib.h>

DoubleLinkList_TypeDef* DoubleLinkList__psInit( void  (*pfvDestroyElementDataArg)(void *DataContainer))
{
    DoubleLinkList_TypeDef *psList = 0;
#if defined ( __TI_ARM__ )
    psList = (DoubleLinkList_TypeDef*) memalign((size_t)4,(size_t)sizeof(DoubleLinkList_TypeDef));
#elif defined ( __GNUC__ )
    psList = (DoubleLinkList_TypeDef*) malloc(sizeof(DoubleLinkList_TypeDef));
#endif
    if((uint32_t)0UL != (uint32_t)psList)
    {
        psList->u32Size= 0UL;
        psList->pfvDestroy = &free;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead =(DoubleLinkListElement_TypeDef*)  0UL;
        psList->psTail =(DoubleLinkListElement_TypeDef*)  0UL;
    }
    return psList;
}


DoubleLinkList_nSTATUS DoubleLinkList__enInit( DoubleLinkList_TypeDef* psList ,void  (*pfvDestroyElementDataArg)(void *DataContainer))
{
    DoubleLinkList_nSTATUS enStatus = DoubleLinkList_enSTATUS_ERROR;
    if((uint32_t)0UL != (uint32_t)psList)
    {
        enStatus = DoubleLinkList_enSTATUS_OK;
        psList->u32Size= 0UL;
        psList->pfvDestroy = (void  (*)(void* List))0UL;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead =(DoubleLinkListElement_TypeDef*)  0UL;
        psList->psTail =(DoubleLinkListElement_TypeDef*)  0UL;
    }
    return enStatus;
}



