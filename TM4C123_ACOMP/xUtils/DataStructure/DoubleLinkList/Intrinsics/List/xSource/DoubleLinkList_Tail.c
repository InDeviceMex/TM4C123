/**
 *
 * @file DoubleLinkList_Tail.c
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
#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/List/xHeader/DoubleLinkList_Tail.h>
#include <stdlib.h>

DoubleLinkListElement_TypeDef* DoubleLinkList__psGetTail(const DoubleLinkList_TypeDef*  const psList)
{
    DoubleLinkListElement_TypeDef* psTailReg = (DoubleLinkListElement_TypeDef*)0U;
    psTailReg = psList->psTail;
    return psTailReg;
}

void DoubleLinkList__vSetTail(DoubleLinkList_TypeDef* psList, DoubleLinkListElement_TypeDef* psTailArg)
{
    psList->psTail = psTailArg;
}

DoubleLinkList_nSTATUS DoubleLinkList__enIsTail(const DoubleLinkListElement_TypeDef* const psElement)
{
    DoubleLinkList_nSTATUS enStatus = DoubleLinkList_enSTATUS_ERROR;
    if ((uint32_t)0UL == (uint32_t)(psElement->psNextNode))
    {
        enStatus = DoubleLinkList_enSTATUS_OK;
    }
    return enStatus;
}



