/**
 *
 * @file SLinkedList_ElementNextNode.c
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
 * @verbatim 6 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/xHeader/SLinkedList_ElementNextNode.h>

SLinkedListElement_TypeDef* SLinkedList__psGetElementNextNode(const SLinkedListElement_TypeDef* const psElement)
{
    SLinkedListElement_TypeDef* psNextElementReg = (SLinkedListElement_TypeDef*)0UL;
    psNextElementReg = psElement->psNextNode;

    return psNextElementReg;
}

void SLinkedList__vSetElementNextNode(SLinkedListElement_TypeDef* psElement, SLinkedListElement_TypeDef* psNextElement)
{
    psElement->psNextNode = psNextElement;
}


