/**
 *
 * @file SingleLinkList_Head.c
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
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/xHeader/SingleLinkList_Head.h>
#include <stdlib.h>

SingleLinkListElement_TypeDef* SingleLinkList__psGetHead(const SingleLinkList_TypeDef*  const psList)
{
    SingleLinkListElement_TypeDef* psHeadReg = (SingleLinkListElement_TypeDef*)0U;
    psHeadReg = psList->psHead;
    return psHeadReg;
}

void SingleLinkList__vSetHead(SingleLinkList_TypeDef* psList, SingleLinkListElement_TypeDef* psHeadArg)
{
    psList->psHead = psHeadArg;
}

SingleLinkList_nSTATUS SingleLinkList__enIsHead(const SingleLinkList_TypeDef* const psList, const SingleLinkListElement_TypeDef* const psElement)
{
    SingleLinkList_nSTATUS enStatus = SingleLinkList_enSTATUS_ERROR;
    SingleLinkListElement_TypeDef* psListHead = (SingleLinkListElement_TypeDef*)0UL;
    psListHead = SingleLinkList__psGetHead(psList);
    if ((uint32_t)psElement == (uint32_t)(psListHead))
    {
        enStatus = SingleLinkList_enSTATUS_OK;
    }
    return enStatus;
}
