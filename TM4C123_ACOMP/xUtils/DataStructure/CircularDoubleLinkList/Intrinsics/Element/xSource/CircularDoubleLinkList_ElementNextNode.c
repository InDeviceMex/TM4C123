/**
 *
 * @file CircularDoubleLinkList_ElementNextNode.c
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
#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/Element/xHeader/CircularDoubleLinkList_ElementNextNode.h>

CircularDoubleLinkListElement_TypeDef* CircularDoubleLinkList__psGetElementNextNode(const CircularDoubleLinkListElement_TypeDef* const psElement)
{
    CircularDoubleLinkListElement_TypeDef* psNextElementReg = (CircularDoubleLinkListElement_TypeDef*)0UL;
    psNextElementReg = psElement->psNextNode;

    return psNextElementReg;
}

void CircularDoubleLinkList__vSetElementNextNode( CircularDoubleLinkListElement_TypeDef* psElement,  CircularDoubleLinkListElement_TypeDef* psNextElement)
{
    psElement->psNextNode = psNextElement;
}



