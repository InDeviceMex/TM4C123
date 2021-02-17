/**
 *
 * @file CSLinkedList_ElementNextNode.c
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
 * @verbatim 9 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/Element/xHeader/CSLinkedList_ElementNextNode.h>

CSLinkedListElement_TypeDef* CSLinkedList__psGetElementNextNode(const CSLinkedListElement_TypeDef* const psElement)
{
    CSLinkedListElement_TypeDef* psNextElementReg = (CSLinkedListElement_TypeDef*)0UL;
    psNextElementReg = psElement->psNextNode;

    return psNextElementReg;
}

void CSLinkedList__vSetElementNextNode(CSLinkedListElement_TypeDef* psElement, CSLinkedListElement_TypeDef* psNextElement)
{
    psElement->psNextNode = psNextElement;
}



