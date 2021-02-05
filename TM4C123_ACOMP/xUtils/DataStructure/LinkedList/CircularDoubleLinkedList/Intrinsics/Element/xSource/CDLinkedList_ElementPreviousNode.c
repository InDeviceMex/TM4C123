/**
 *
 * @file CDLinkedList_ElementPreviousNode.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Element/xHeader/CDLinkedList_ElementPreviousNode.h>

CDLinkedListElement_TypeDef* CDLinkedList__psGetElementPreviousNode(const CDLinkedListElement_TypeDef* const psElement)
{
    CDLinkedListElement_TypeDef* psPreviousElementReg = (CDLinkedListElement_TypeDef*)0UL;
    psPreviousElementReg = psElement->psPreviousNode;

    return psPreviousElementReg;
}

void CDLinkedList__vSetElementPreviousNode(CDLinkedListElement_TypeDef* psElement, CDLinkedListElement_TypeDef* psPreviousElement)
{
    psElement->psPreviousNode = psPreviousElement;
}




