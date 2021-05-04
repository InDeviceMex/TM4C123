/**
 *
 * @file BiTree_Root.c
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
#include <xUtils/DataStructure/BinaryTree/Intrinsics/Tree/xHeader/BiTree_Root.h>
#include <stdlib.h>

BiTreeElement_TypeDef* BiTree__pstGetRoot(const BiTree_TypeDef*  const pstTree)
{
    BiTreeElement_TypeDef* pstRootReg = (BiTreeElement_TypeDef*)0U;
    pstRootReg = pstTree->pstRoot;
    return pstRootReg;
}

void BiTree__vSetRoot(BiTree_TypeDef* pstTree, BiTreeElement_TypeDef* pstRootArg)
{
    pstTree->pstRoot = pstRootArg;
}

BiTree_nSTATUS BiTree__enIsRoot(const BiTree_TypeDef* const pstTree, const BiTreeElement_TypeDef* const pstElement)
{
    BiTree_nSTATUS enStatus = BiTree_enSTATUS_ERROR;
    BiTreeElement_TypeDef* pstTreeRoot = (BiTreeElement_TypeDef*)0UL;
    pstTreeRoot = BiTree__pstGetRoot(pstTree);
    if ((uint32_t) pstElement == (uint32_t) (pstTreeRoot))
    {
        enStatus = BiTree_enSTATUS_OK;
    }
    return enStatus;
}




