/**
 *
 * @file BiTree_ElementLeaf.c
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
#include <xUtils/DataStructure/BinaryTree/Intrinsics/Element/xHeader/BiTree_ElementLeaf.h>
#include <xUtils/DataStructure/BinaryTree/Intrinsics/Element/xHeader/BiTree_ElementLeft.h>
#include <xUtils/DataStructure/BinaryTree/Intrinsics/Element/xHeader/BiTree_ElementRight.h>
#include <xUtils/Standard/Standard.h>

BiTree_nSTATUS BiTree__enIsElementLeaf(const BiTreeElement_TypeDef* const psElement)
{
    BiTreeElement_TypeDef* psLeftNodeReg = (BiTreeElement_TypeDef*) 0UL;
    BiTreeElement_TypeDef* psRightNodeReg = (BiTreeElement_TypeDef*) 0UL;
    BiTree_nSTATUS enStatusReg = BiTree_enSTATUS_ERROR;

    psLeftNodeReg = BiTree__psGetElementLeftNode(psElement);
    psRightNodeReg = BiTree__psGetElementRightNode(psElement);

    if(((uint32_t) 0UL == (uint32_t) psLeftNodeReg) && ((uint32_t) 0UL == (uint32_t) psRightNodeReg))
    {
        enStatusReg = BiTree_enSTATUS_OK;
    }

    return enStatusReg;
}



