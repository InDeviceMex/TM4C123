/**
 *
 * @file CircularDoubleLinkList_Head.c
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
#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/List/xHeader/CircularDoubleLinkList_Head.h>
#include <stdlib.h>

CircularDoubleLinkListElement_TypeDef* CircularDoubleLinkList__psGetHead(const CircularDoubleLinkList_TypeDef*  const psList)
{
    CircularDoubleLinkListElement_TypeDef* psHeadReg = (CircularDoubleLinkListElement_TypeDef*)0U;
    psHeadReg = psList->psHead;
    return psHeadReg;
}

void CircularDoubleLinkList__vSetHead(CircularDoubleLinkList_TypeDef* psList, CircularDoubleLinkListElement_TypeDef* psHeadArg)
{
    psList->psHead = psHeadArg;
}

CircularDoubleLinkList_nSTATUS CircularDoubleLinkList__enIsHead(const CircularDoubleLinkList_TypeDef* const psList, const CircularDoubleLinkListElement_TypeDef* const psElement)
{
    CircularDoubleLinkList_nSTATUS enStatus = CircularDoubleLinkList_enSTATUS_ERROR;
    CircularDoubleLinkListElement_TypeDef* psListHead = (CircularDoubleLinkListElement_TypeDef*)0UL;
    psListHead = CircularDoubleLinkList__psGetHead(psList);
    if ((uint32_t)psElement == (uint32_t)(psListHead))
    {
        enStatus = CircularDoubleLinkList_enSTATUS_OK;
    }
    return enStatus;
}



