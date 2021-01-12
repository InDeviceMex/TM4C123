/**
 *
 * @file CircularDoubleLinkList_ElementPreviousNode.c
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
 * @verbatim 11 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/Element/xHeader/CircularDoubleLinkList_ElementPreviousNode.h>

CircularDoubleLinkListElement_TypeDef* CircularDoubleLinkList__psGetElementPreviousNode(const CircularDoubleLinkListElement_TypeDef* const psElement)
{
    CircularDoubleLinkListElement_TypeDef* psPreviousElementReg = (CircularDoubleLinkListElement_TypeDef*)0UL;
    psPreviousElementReg = psElement->psPreviousNode;

    return psPreviousElementReg;
}

void CircularDoubleLinkList__vSetElementPreviousNode( CircularDoubleLinkListElement_TypeDef* psElement,  CircularDoubleLinkListElement_TypeDef* psPreviousElement)
{
    psElement->psPreviousNode = psPreviousElement;
}




