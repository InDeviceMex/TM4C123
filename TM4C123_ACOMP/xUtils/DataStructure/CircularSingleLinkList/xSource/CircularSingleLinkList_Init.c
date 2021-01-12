/**
 *
 * @file CircularSingleLinkList_Init.c
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
#include <xUtils/DataStructure/CircularSingleLinkList/xHeader/CircularSingleLinkList_Init.h>
#include <stdlib.h>

CircularSingleLinkList_TypeDef* CircularSingleLinkList__psInit( void  (*pfvDestroyElementDataArg)(void *DataContainer))
{
    CircularSingleLinkList_TypeDef *psList = 0;
#if defined ( __TI_ARM__ )
    psList = (CircularSingleLinkList_TypeDef*) memalign((size_t)4,(size_t)sizeof(CircularSingleLinkList_TypeDef));
#elif defined ( __GNUC__ )
    psList = (CircularSingleLinkList_TypeDef*) malloc(sizeof(CircularSingleLinkList_TypeDef));
#endif
    if((uint32_t)0UL != (uint32_t)psList)
    {
        psList->u32Size= 0UL;
        psList->pfvDestroy = &free;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead =(CircularSingleLinkListElement_TypeDef*)  0UL;
    }
    return psList;
}


CircularSingleLinkList_nSTATUS CircularSingleLinkList__enInit( CircularSingleLinkList_TypeDef* psList ,void  (*pfvDestroyElementDataArg)(void *DataContainer))
{
    CircularSingleLinkList_nSTATUS enStatus = CircularSingleLinkList_enSTATUS_ERROR;
    if((uint32_t)0UL != (uint32_t)psList)
    {
        enStatus = CircularSingleLinkList_enSTATUS_OK;
        psList->u32Size= 0UL;
        psList->pfvDestroy = (void  (*)(void* List))0UL;
        psList->pfvDestroyElementData = pfvDestroyElementDataArg;
        psList->psHead =(CircularSingleLinkListElement_TypeDef*)  0UL;
    }
    return enStatus;
}


