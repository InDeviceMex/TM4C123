/**
 *
 * @file DoubleLinkList_ElementPreviousNode.c
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
#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/Element/xHeader/DoubleLinkList_ElementPreviousNode.h>

DoubleLinkListElement_TypeDef* DoubleLinkList__psGetElementPreviousNode(const DoubleLinkListElement_TypeDef* const psElement)
{
    DoubleLinkListElement_TypeDef* psPreviousElementReg = (DoubleLinkListElement_TypeDef*)0UL;
    psPreviousElementReg = psElement->psPreviousNode;

    return psPreviousElementReg;
}

void DoubleLinkList__vSetElementPreviousNode( DoubleLinkListElement_TypeDef* psElement,  DoubleLinkListElement_TypeDef* psPreviousElement)
{
    psElement->psPreviousNode = psPreviousElement;
}




