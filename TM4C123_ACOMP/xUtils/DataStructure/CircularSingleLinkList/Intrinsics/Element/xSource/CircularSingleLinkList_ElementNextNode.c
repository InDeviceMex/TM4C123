/**
 *
 * @file CircularSingleLinkList_ElementNextNode.c
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
#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/Element/xHeader/CircularSingleLinkList_ElementNextNode.h>

CircularSingleLinkListElement_TypeDef* CircularSingleLinkList__psGetElementNextNode(const CircularSingleLinkListElement_TypeDef* const psElement)
{
    CircularSingleLinkListElement_TypeDef* psNextElementReg = (CircularSingleLinkListElement_TypeDef*)0UL;
    psNextElementReg = psElement->psNextNode;

    return psNextElementReg;
}

void CircularSingleLinkList__vSetElementNextNode( CircularSingleLinkListElement_TypeDef* psElement,  CircularSingleLinkListElement_TypeDef* psNextElement)
{
    psElement->psNextNode = psNextElement;
}



