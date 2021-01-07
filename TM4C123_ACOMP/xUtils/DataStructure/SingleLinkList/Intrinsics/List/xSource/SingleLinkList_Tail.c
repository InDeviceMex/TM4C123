/**
 *
 * @file SingleLinkList_Tail.c
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
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/xHeader/SingleLinkList_Tail.h>
#include <stdlib.h>

SingleLinkListElement_TypeDef* SingleLinkList__psGetTail(const SingleLinkList_TypeDef*  const psList)
{
    SingleLinkListElement_TypeDef* psTailReg = (SingleLinkListElement_TypeDef*)0U;
    psTailReg = psList->psTail;
    return psTailReg;
}

void SingleLinkList__vSetTail(SingleLinkList_TypeDef* psList, SingleLinkListElement_TypeDef* psTailArg)
{
    psList->psTail = psTailArg;
}

SingleLinkList_nSTATUS SingleLinkList__enIsTail(const SingleLinkListElement_TypeDef* const psElement)
{
    SingleLinkList_nSTATUS enStatus = SingleLinkList_enSTATUS_ERROR;
    if ((uint32_t)0UL == (uint32_t)(psElement->psNextNode))
    {
        enStatus = SingleLinkList_enSTATUS_OK;
    }
    return enStatus;
}

