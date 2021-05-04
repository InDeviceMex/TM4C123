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

BiTree_TypeDef* BiTree__pstInit(void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    BiTree_TypeDef *pstTree = 0;
#if defined (__TI_ARM__ )
    pstTree = (BiTree_TypeDef*) memalign((size_t) 4, (size_t) sizeof(BiTree_TypeDef));
#elif defined (__GNUC__ )
    pstTree = (BiTree_TypeDef*) malloc(sizeof(BiTree_TypeDef));
#endif
    if((uint32_t) 0UL != (uint32_t) pstTree)
    {
        pstTree->u32Size = 0UL;
        pstTree->pfvDestroy = &free;
        pstTree->pfvDestroyElementData = pfvDestroyElementDataArg;
        pstTree->pstRoot = (BiTreeElement_TypeDef*)  0UL;
    }
    return pstTree;
}


BiTree_nSTATUS BiTree__enInit(BiTree_TypeDef* pstTree, void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    BiTree_nSTATUS enStatus = BiTree_enSTATUS_ERROR;
    if((uint32_t) 0UL != (uint32_t) pstTree)
    {
        enStatus = BiTree_enSTATUS_OK;
        pstTree->u32Size = 0UL;
        pstTree->pfvDestroy = (void (*) (void* List))0UL;
        pstTree->pfvDestroyElementData = pfvDestroyElementDataArg;
        pstTree->pstRoot = (BiTreeElement_TypeDef*)  0UL;
    }
    return enStatus;
}



