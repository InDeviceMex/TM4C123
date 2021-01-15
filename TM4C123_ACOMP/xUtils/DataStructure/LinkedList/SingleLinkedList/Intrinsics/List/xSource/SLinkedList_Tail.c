/**
 *
 * @file SLinkedList_Tail.c
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
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/xHeader/SLinkedList_Tail.h>
#include <stdlib.h>

SLinkedListElement_TypeDef* SLinkedList__psGetTail(const SLinkedList_TypeDef*  const psList)
{
    SLinkedListElement_TypeDef* psTailReg = (SLinkedListElement_TypeDef*)0U;
    psTailReg = psList->psTail;
    return psTailReg;
}

void SLinkedList__vSetTail(SLinkedList_TypeDef* psList, SLinkedListElement_TypeDef* psTailArg)
{
    psList->psTail = psTailArg;
}

SLinkedList_nSTATUS SLinkedList__enIsTail(const SLinkedListElement_TypeDef* const psElement)
{
    SLinkedList_nSTATUS enStatus = SLinkedList_enSTATUS_ERROR;
    if ((uint32_t)0UL == (uint32_t)(psElement->psNextNode))
    {
        enStatus = SLinkedList_enSTATUS_OK;
    }
    return enStatus;
}

