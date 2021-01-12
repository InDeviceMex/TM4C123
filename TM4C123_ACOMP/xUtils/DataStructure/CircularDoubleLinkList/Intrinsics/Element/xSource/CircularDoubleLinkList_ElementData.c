/**
 *
 * @file CircularDoubleLinkList_ElementData.c
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

#include <xUtils/DataStructure/CircularDoubleLinkList/Intrinsics/Element/xHeader/CircularDoubleLinkList_ElementData.h>
#include <stdlib.h>

void* CircularDoubleLinkList__pvGetElementData(const CircularDoubleLinkListElement_TypeDef* const psElement)
{
    void* pvDataReg = (void*)0UL;
    pvDataReg = psElement->pvDataContainer;

    return pvDataReg;
}

void CircularDoubleLinkList__vSetElementData( CircularDoubleLinkListElement_TypeDef* psElement, void* pvDataArg)
{
    psElement->pvDataContainer = pvDataArg;
}


