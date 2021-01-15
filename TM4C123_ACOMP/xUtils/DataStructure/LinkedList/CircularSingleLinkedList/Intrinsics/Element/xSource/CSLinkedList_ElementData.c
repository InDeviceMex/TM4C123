/**
 *
 * @file CSLinkedList_ElementData.c
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
#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/Element/xHeader/CSLinkedList_ElementData.h>
#include <stdlib.h>

void* CSLinkedList__pvGetElementData(const CSLinkedListElement_TypeDef* const psElement)
{
    void* pvDataReg = (void*)0UL;
    pvDataReg = psElement->pvDataContainer;

    return pvDataReg;
}

void CSLinkedList__vSetElementData( CSLinkedListElement_TypeDef* psElement, void* pvDataArg)
{
    psElement->pvDataContainer = pvDataArg;
}


