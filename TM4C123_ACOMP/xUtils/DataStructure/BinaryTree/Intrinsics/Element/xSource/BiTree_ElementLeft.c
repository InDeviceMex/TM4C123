/**
 *
 * @file BiTree_ElementLeft.c
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
#include <xUtils/DataStructure/BinaryTree/Intrinsics/Element/xHeader/BiTree_ElementLeft.h>

BiTreeElement_TypeDef* BiTree__psGetElementLeftNode(const BiTreeElement_TypeDef* const psElement)
{
    BiTreeElement_TypeDef* psLeftElementReg = (BiTreeElement_TypeDef*)0UL;
    psLeftElementReg = psElement->psLeftNode;

    return psLeftElementReg;
}

void BiTree__vSetElementLeftNode(BiTreeElement_TypeDef* psElement,  BiTreeElement_TypeDef* psLeftElement)
{
    psElement->psLeftNode = psLeftElement;
}


