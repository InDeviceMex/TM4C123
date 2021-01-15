/**
 *
 * @file CSLinkedList_Tail.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/List/xHeader/CSLinkedList_Tail.h>
#include <stdlib.h>

CSLinkedListElement_TypeDef* CSLinkedList__psGetTail(const CSLinkedList_TypeDef*  const psList)
{
    CSLinkedListElement_TypeDef* psTailReg = (CSLinkedListElement_TypeDef*)0U;
    psTailReg = psList->psTail;
    return psTailReg;
}

void CSLinkedList__vSetTail(CSLinkedList_TypeDef* psList, CSLinkedListElement_TypeDef* psTailArg)
{
    psList->psTail = psTailArg;
}

CSLinkedList_nSTATUS CSLinkedList__enIsTail(const CSLinkedList_TypeDef*  const psList, const CSLinkedListElement_TypeDef* const psElement)
{
    CSLinkedList_nSTATUS enStatus = CSLinkedList_enSTATUS_ERROR;
    CSLinkedListElement_TypeDef* psListTail = (CSLinkedListElement_TypeDef*) 0UL;
    psListTail = CSLinkedList__psGetTail(psList);
    if ((uint32_t)psListTail == (uint32_t)psElement)
    {
        enStatus = CSLinkedList_enSTATUS_OK;
    }
    return enStatus;
}



