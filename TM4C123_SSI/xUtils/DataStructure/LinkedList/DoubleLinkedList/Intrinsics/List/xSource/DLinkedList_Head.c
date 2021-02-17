/**
 *
 * @file DLinkedList_Head.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/xHeader/DLinkedList_Head.h>
#include <stdlib.h>

DLinkedListElement_TypeDef* DLinkedList__psGetHead(const DLinkedList_TypeDef*  const psList)
{
    DLinkedListElement_TypeDef* psHeadReg = (DLinkedListElement_TypeDef*)0U;
    psHeadReg = psList->psHead;
    return psHeadReg;
}

void DLinkedList__vSetHead(DLinkedList_TypeDef* psList, DLinkedListElement_TypeDef* psHeadArg)
{
    psList->psHead = psHeadArg;
}

DLinkedList_nSTATUS DLinkedList__enIsHead(const DLinkedList_TypeDef* const psList, const DLinkedListElement_TypeDef* const psElement)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    DLinkedListElement_TypeDef* psListHead = (DLinkedListElement_TypeDef*)0UL;
    psListHead = DLinkedList__psGetHead(psList);
    if ((uint32_t) psElement == (uint32_t) (psListHead))
    {
        enStatus = DLinkedList_enSTATUS_OK;
    }
    return enStatus;
}


