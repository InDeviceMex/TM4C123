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

BiTreeElement_TypeDef* BiTree__pstGetElementRightNode(const BiTreeElement_TypeDef* const pstElement)
{
    BiTreeElement_TypeDef* pstRightElementReg = (BiTreeElement_TypeDef*)0UL;
    pstRightElementReg = pstElement->pstRightNode;

    return pstRightElementReg;
}

void BiTree__vSetElementRightNode(BiTreeElement_TypeDef* pstElement, BiTreeElement_TypeDef* pstRightElement)
{
    pstElement->pstRightNode = pstRightElement;
}


