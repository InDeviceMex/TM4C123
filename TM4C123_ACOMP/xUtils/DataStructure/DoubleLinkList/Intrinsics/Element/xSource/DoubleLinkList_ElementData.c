/**
 *
 * @file DoubleLinkList_ElementData.c
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
#include <xUtils/DataStructure/DoubleLinkList/Intrinsics/Element/xHeader/DoubleLinkList_ElementData.h>
#include <stdlib.h>

void* DoubleLinkList__pvGetElementData(const DoubleLinkListElement_TypeDef* const psElement)
{
    void* pvDataReg = (void*)0UL;
    pvDataReg = psElement->pvDataContainer;

    return pvDataReg;
}

void DoubleLinkList__vSetElementData( DoubleLinkListElement_TypeDef* psElement, void* pvDataArg)
{
    psElement->pvDataContainer = pvDataArg;
}


