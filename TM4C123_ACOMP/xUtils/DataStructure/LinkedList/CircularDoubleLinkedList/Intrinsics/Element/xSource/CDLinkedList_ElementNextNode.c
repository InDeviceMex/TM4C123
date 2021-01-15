/**
 *
 * @file CDLinkedList_ElementNextNode.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/Element/xHeader/CDLinkedList_ElementNextNode.h>

CDLinkedListElement_TypeDef* CDLinkedList__psGetElementNextNode(const CDLinkedListElement_TypeDef* const psElement)
{
    CDLinkedListElement_TypeDef* psNextElementReg = (CDLinkedListElement_TypeDef*)0UL;
    psNextElementReg = psElement->psNextNode;

    return psNextElementReg;
}

void CDLinkedList__vSetElementNextNode( CDLinkedListElement_TypeDef* psElement,  CDLinkedListElement_TypeDef* psNextElement)
{
    psElement->psNextNode = psNextElement;
}



