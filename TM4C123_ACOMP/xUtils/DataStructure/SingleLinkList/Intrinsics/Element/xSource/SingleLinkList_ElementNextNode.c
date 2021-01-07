/**
 *
 * @file SingleLinkList_ElementNextNode.c
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
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/Element/xHeader/SingleLinkList_ElementNextNode.h>

SingleLinkListElement_TypeDef* SingleLinkList__psGetElementNextNode(const SingleLinkListElement_TypeDef* const psElement)
{
    SingleLinkListElement_TypeDef* psNextElementReg = (SingleLinkListElement_TypeDef*)0UL;
    psNextElementReg = psElement->psNextNode;

    return psNextElementReg;
}

void SingleLinkList__vSetElementNextNode( SingleLinkListElement_TypeDef* psElement,  SingleLinkListElement_TypeDef* psNextElement)
{
    psElement->psNextNode = psNextElement;
}


