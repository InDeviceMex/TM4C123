/**
 *
 * @file CircularSingleLinkList_Tail.c
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
#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/List/xHeader/CircularSingleLinkList_Tail.h>
#include <stdlib.h>

CircularSingleLinkListElement_TypeDef* CircularSingleLinkList__psGetTail(const CircularSingleLinkList_TypeDef*  const psList)
{
    CircularSingleLinkListElement_TypeDef* psTailReg = (CircularSingleLinkListElement_TypeDef*)0U;
    psTailReg = psList->psTail;
    return psTailReg;
}

void CircularSingleLinkList__vSetTail(CircularSingleLinkList_TypeDef* psList, CircularSingleLinkListElement_TypeDef* psTailArg)
{
    psList->psTail = psTailArg;
}

CircularSingleLinkList_nSTATUS CircularSingleLinkList__enIsTail(const CircularSingleLinkList_TypeDef*  const psList, const CircularSingleLinkListElement_TypeDef* const psElement)
{
    CircularSingleLinkList_nSTATUS enStatus = CircularSingleLinkList_enSTATUS_ERROR;
    CircularSingleLinkListElement_TypeDef* psListTail = (CircularSingleLinkListElement_TypeDef*) 0UL;
    psListTail = CircularSingleLinkList__psGetTail(psList);
    if ((uint32_t)psListTail == (uint32_t)psElement)
    {
        enStatus = CircularSingleLinkList_enSTATUS_OK;
    }
    return enStatus;
}



