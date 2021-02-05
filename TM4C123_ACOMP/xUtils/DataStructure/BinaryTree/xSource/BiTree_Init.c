/**
 *
 * @file BiTree_Init.c
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
 * @verbatim 20 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/BinaryTree/xHeader/BiTree_Init.h>
#include <stdlib.h>

BiTree_TypeDef* BiTree__psInit(void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    BiTree_TypeDef *psTree = 0;
#if defined (__TI_ARM__ )
    psTree = (BiTree_TypeDef*) memalign((size_t) 4, (size_t) sizeof(BiTree_TypeDef));
#elif defined (__GNUC__ )
    psTree = (BiTree_TypeDef*) malloc(sizeof(BiTree_TypeDef));
#endif
    if((uint32_t) 0UL != (uint32_t) psTree)
    {
        psTree->u32Size = 0UL;
        psTree->pfvDestroy = &free;
        psTree->pfvDestroyElementData = pfvDestroyElementDataArg;
        psTree->psRoot = (BiTreeElement_TypeDef*)  0UL;
    }
    return psTree;
}


BiTree_nSTATUS BiTree__enInit(BiTree_TypeDef* psTree, void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    BiTree_nSTATUS enStatus = BiTree_enSTATUS_ERROR;
    if((uint32_t) 0UL != (uint32_t) psTree)
    {
        enStatus = BiTree_enSTATUS_OK;
        psTree->u32Size = 0UL;
        psTree->pfvDestroy = (void (*) (void* List))0UL;
        psTree->pfvDestroyElementData = pfvDestroyElementDataArg;
        psTree->psRoot = (BiTreeElement_TypeDef*)  0UL;
    }
    return enStatus;
}



