/**
 *
 * @file CSLinkedList_Head.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/xHeader/CSLinkedList_Head.h>
#include <stdlib.h>

CSLinkedListElement_TypeDef* CSLinkedList__psGetHead(const CSLinkedList_TypeDef*  const psList)
{
    CSLinkedListElement_TypeDef* psHeadReg = (CSLinkedListElement_TypeDef*)0U;
    psHeadReg = psList->psHead;
    return psHeadReg;
}

void CSLinkedList__vSetHead(CSLinkedList_TypeDef* psList, CSLinkedListElement_TypeDef* psHeadArg)
{
    psList->psHead = psHeadArg;
}

CSLinkedList_nSTATUS CSLinkedList__enIsHead(const CSLinkedList_TypeDef* const psList, const CSLinkedListElement_TypeDef* const psElement)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListElement_TypeDef* psListHead = (CSLinkedListElement_TypeDef*)0UL;
    psListHead = CSLinkedList__psGetHead(psList);
    if ((uint32_t) psElement == (uint32_t) (psListHead))
    {
        enStatus = CSLinkedList_enSTATUS_OK;
    }
    return enStatus;
}



