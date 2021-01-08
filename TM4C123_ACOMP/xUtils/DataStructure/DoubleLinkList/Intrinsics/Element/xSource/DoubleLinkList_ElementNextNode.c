/**
 *
 * @file DoubleLinkList_ElementNextNode.c
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
#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/Element/xHeader/DoubleLinkList_ElementNextNode.h>

DoubleLinkListElement_TypeDef* DoubleLinkList__psGetElementNextNode(const DoubleLinkListElement_TypeDef* const psElement)
{
    DoubleLinkListElement_TypeDef* psNextElementReg = (DoubleLinkListElement_TypeDef*)0UL;
    psNextElementReg = psElement->psNextNode;

    return psNextElementReg;
}

void DoubleLinkList__vSetElementNextNode( DoubleLinkListElement_TypeDef* psElement,  DoubleLinkListElement_TypeDef* psNextElement)
{
    psElement->psNextNode = psNextElement;
}



