/**
 *
 * @file DoubleLinkList_Head.c
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
#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/List/xHeader/DoubleLinkList_Head.h>
#include <stdlib.h>

DoubleLinkListElement_TypeDef* DoubleLinkList__psGetHead(const DoubleLinkList_TypeDef*  const psList)
{
    DoubleLinkListElement_TypeDef* psHeadReg = (DoubleLinkListElement_TypeDef*)0U;
    psHeadReg = psList->psHead;
    return psHeadReg;
}

void DoubleLinkList__vSetHead(DoubleLinkList_TypeDef* psList, DoubleLinkListElement_TypeDef* psHeadArg)
{
    psList->psHead = psHeadArg;
}

DoubleLinkList_nSTATUS DoubleLinkList__enIsHead(const DoubleLinkList_TypeDef* const psList, const DoubleLinkListElement_TypeDef* const psElement)
{
    DoubleLinkList_nSTATUS enStatus = DoubleLinkList_enSTATUS_ERROR;
    DoubleLinkListElement_TypeDef* psListHead = (DoubleLinkListElement_TypeDef*)0UL;
    psListHead = DoubleLinkList__psGetHead(psList);
    if ((uint32_t)psElement == (uint32_t)(psListHead))
    {
        enStatus = DoubleLinkList_enSTATUS_OK;
    }
    return enStatus;
}


