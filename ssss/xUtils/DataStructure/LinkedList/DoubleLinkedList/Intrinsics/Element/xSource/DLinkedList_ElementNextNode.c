/**
 *
 * @file DLinkedList_ElementNextNode.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/Element/xHeader/DLinkedList_ElementNextNode.h>

DLinkedListElement_TypeDef* DLinkedList__psGetElementNextNode(const DLinkedListElement_TypeDef* const psElement)
{
    DLinkedListElement_TypeDef* psNextElementReg = (DLinkedListElement_TypeDef*)0UL;
    psNextElementReg = psElement->psNextNode;

    return psNextElementReg;
}

void DLinkedList__vSetElementNextNode(DLinkedListElement_TypeDef* psElement, DLinkedListElement_TypeDef* psNextElement)
{
    psElement->psNextNode = psNextElement;
}



