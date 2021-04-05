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

BiTreeElement_TypeDef* BiTree__psGetRoot(const BiTree_TypeDef*  const psTree)
{
    BiTreeElement_TypeDef* psRootReg = (BiTreeElement_TypeDef*)0U;
    psRootReg = psTree->psRoot;
    return psRootReg;
}

void BiTree__vSetRoot(BiTree_TypeDef* psTree, BiTreeElement_TypeDef* psRootArg)
{
    psTree->psRoot = psRootArg;
}

BiTree_nSTATUS BiTree__enIsRoot(const BiTree_TypeDef* const psTree, const BiTreeElement_TypeDef* const psElement)
{
    BiTree_nSTATUS enStatus = BiTree_enSTATUS_ERROR;
    BiTreeElement_TypeDef* psTreeRoot = (BiTreeElement_TypeDef*)0UL;
    psTreeRoot = BiTree__psGetRoot(psTree);
    if ((uint32_t) psElement == (uint32_t) (psTreeRoot))
    {
        enStatus = BiTree_enSTATUS_OK;
    }
    return enStatus;
}




