/**
 *
 * @file BiTree_ElementRight.c
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
#include <xUtils/DataStructure/BinaryTree/Intrinsics/Element/xHeader/BiTree_ElementRight.h>

BiTreeElement_TypeDef* BiTree__psGetElementRightNode(const BiTreeElement_TypeDef* const psElement)
{
    BiTreeElement_TypeDef* psRightElementReg = (BiTreeElement_TypeDef*)0UL;
    psRightElementReg = psElement->psRightNode;

    return psRightElementReg;
}

void BiTree__vSetElementRightNode(BiTreeElement_TypeDef* psElement, BiTreeElement_TypeDef* psRightElement)
{
    psElement->psRightNode = psRightElement;
}


