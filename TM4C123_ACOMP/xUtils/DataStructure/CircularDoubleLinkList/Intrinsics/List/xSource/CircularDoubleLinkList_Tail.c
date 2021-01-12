/**
 *
 * @file CircularDoubleLinkList_Tail.c
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
#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/List/xHeader/CircularDoubleLinkList_Tail.h>
#include <stdlib.h>

CircularDoubleLinkListElement_TypeDef* CircularDoubleLinkList__psGetTail(const CircularDoubleLinkList_TypeDef*  const psList)
{
    CircularDoubleLinkListElement_TypeDef* psTailReg = (CircularDoubleLinkListElement_TypeDef*)0U;
    psTailReg = psList->psTail;
    return psTailReg;
}

void CircularDoubleLinkList__vSetTail(CircularDoubleLinkList_TypeDef* psList, CircularDoubleLinkListElement_TypeDef* psTailArg)
{
    psList->psTail = psTailArg;
}

CircularDoubleLinkList_nSTATUS CircularDoubleLinkList__enIsTail(const CircularDoubleLinkListElement_TypeDef* const psElement)
{
    CircularDoubleLinkList_nSTATUS enStatus = CircularDoubleLinkList_enSTATUS_ERROR;
    if ((uint32_t)0UL == (uint32_t)(psElement->psNextNode))
    {
        enStatus = CircularDoubleLinkList_enSTATUS_OK;
    }
    return enStatus;
}



