/**
 *
 * @file CircularSingleLinkList_Head.c
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
#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/List/xHeader/CircularSingleLinkList_Head.h>
#include <stdlib.h>

CircularSingleLinkListElement_TypeDef* CircularSingleLinkList__psGetHead(const CircularSingleLinkList_TypeDef*  const psList)
{
    CircularSingleLinkListElement_TypeDef* psHeadReg = (CircularSingleLinkListElement_TypeDef*)0U;
    psHeadReg = psList->psHead;
    return psHeadReg;
}

void CircularSingleLinkList__vSetHead(CircularSingleLinkList_TypeDef* psList, CircularSingleLinkListElement_TypeDef* psHeadArg)
{
    psList->psHead = psHeadArg;
}

CircularSingleLinkList_nSTATUS CircularSingleLinkList__enIsHead(const CircularSingleLinkList_TypeDef* const psList, const CircularSingleLinkListElement_TypeDef* const psElement)
{
    CircularSingleLinkList_nSTATUS enStatus = CircularSingleLinkList_enSTATUS_ERROR;
    CircularSingleLinkListElement_TypeDef* psListHead = (CircularSingleLinkListElement_TypeDef*)0UL;
    psListHead = CircularSingleLinkList__psGetHead(psList);
    if ((uint32_t)psElement == (uint32_t)(psListHead))
    {
        enStatus = CircularSingleLinkList_enSTATUS_OK;
    }
    return enStatus;
}



