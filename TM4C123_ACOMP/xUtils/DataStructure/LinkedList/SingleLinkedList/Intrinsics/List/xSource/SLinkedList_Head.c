/**
 *
 * @file SLinkedList_Head.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/xHeader/SLinkedList_Head.h>
#include <stdlib.h>

SLinkedListElement_TypeDef* SLinkedList__psGetHead(const SLinkedList_TypeDef*  const psList)
{
    SLinkedListElement_TypeDef* psHeadReg = (SLinkedListElement_TypeDef*)0U;
    psHeadReg = psList->psHead;
    return psHeadReg;
}

void SLinkedList__vSetHead(SLinkedList_TypeDef* psList, SLinkedListElement_TypeDef* psHeadArg)
{
    psList->psHead = psHeadArg;
}

SLinkedList_nSTATUS SLinkedList__enIsHead(const SLinkedList_TypeDef* const psList, const SLinkedListElement_TypeDef* const psElement)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    SLinkedListElement_TypeDef* psListHead = (SLinkedListElement_TypeDef*)0UL;
    psListHead = SLinkedList__psGetHead(psList);
    if ((uint32_t)psElement == (uint32_t)(psListHead))
    {
        enStatus = SLinkedList_enSTATUS_OK;
    }
    return enStatus;
}
