/**
 *
 * @file CDLinkedList_Head.c
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
#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/List/xHeader/CDLinkedList_Head.h>
#include <stdlib.h>

CDLinkedListElement_TypeDef* CDLinkedList__psGetHead(const CDLinkedList_TypeDef*  const psList)
{
    CDLinkedListElement_TypeDef* psHeadReg = (CDLinkedListElement_TypeDef*)0U;
    psHeadReg = psList->psHead;
    return psHeadReg;
}

void CDLinkedList__vSetHead(CDLinkedList_TypeDef* psList, CDLinkedListElement_TypeDef* psHeadArg)
{
    psList->psHead = psHeadArg;
}

CDLinkedList_nSTATUS CDLinkedList__enIsHead(const CDLinkedList_TypeDef* const psList, const CDLinkedListElement_TypeDef* const psElement)
{
    CDLinkedList_nSTATUS enStatus = CDLinkedList_enSTATUS_ERROR;
    CDLinkedListElement_TypeDef* psListHead = (CDLinkedListElement_TypeDef*)0UL;
    psListHead = CDLinkedList__psGetHead(psList);
    if ((uint32_t)psElement == (uint32_t)(psListHead))
    {
        enStatus = CDLinkedList_enSTATUS_OK;
    }
    return enStatus;
}



