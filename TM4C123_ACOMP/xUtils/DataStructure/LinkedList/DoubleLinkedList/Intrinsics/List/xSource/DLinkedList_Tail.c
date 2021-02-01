/**
 *
 * @file DLinkedList_Tail.c
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
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/Intrinsics/List/xHeader/DLinkedList_Tail.h>
#include <stdlib.h>

DLinkedListElement_TypeDef* DLinkedList__psGetTail(const DLinkedList_TypeDef*  const psList)
{
    DLinkedListElement_TypeDef* psTailReg = (DLinkedListElement_TypeDef*)0U;
    psTailReg = psList->psTail;
    return psTailReg;
}

void DLinkedList__vSetTail(DLinkedList_TypeDef* psList, DLinkedListElement_TypeDef* psTailArg)
{
    psList->psTail = psTailArg;
}

DLinkedList_nSTATUS DLinkedList__enIsTail(const DLinkedListElement_TypeDef* const psElement)
{
    DLinkedList_nSTATUS enStatus = DLinkedList_enSTATUS_ERROR;
    if ((uint32_t) 0UL == (uint32_t) (psElement->psNextNode))
    {
        enStatus = DLinkedList_enSTATUS_OK;
    }
    return enStatus;
}



