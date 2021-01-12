/**
 *
 * @file CircularCircularSingleLinkList_ElementData.c
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
#include <xUtils/DataStructure/CircularSingleLinkList/Intrinsics/Element/xHeader/CircularSingleLinkList_ElementData.h>
#include <stdlib.h>

void* CircularSingleLinkList__pvGetElementData(const CircularSingleLinkListElement_TypeDef* const psElement)
{
    void* pvDataReg = (void*)0UL;
    pvDataReg = psElement->pvDataContainer;

    return pvDataReg;
}

void CircularSingleLinkList__vSetElementData( CircularSingleLinkListElement_TypeDef* psElement, void* pvDataArg)
{
    psElement->pvDataContainer = pvDataArg;
}


