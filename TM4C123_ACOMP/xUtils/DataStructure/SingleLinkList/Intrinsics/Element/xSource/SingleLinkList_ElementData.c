/**
 *
 * @file SingleLinkList_ElementData.c
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
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/Element/xHeader/SingleLinkList_ElementData.h>
#include <stdlib.h>

void* SingleLinkList__pvGetElementData(const SingleLinkListElement_TypeDef* const psElement)
{
    void* pvDataReg = (void*)0UL;
    pvDataReg = psElement->pvDataContainer;

    return pvDataReg;
}

void SingleLinkList__vSetElementData( SingleLinkListElement_TypeDef* psElement, void* pvDataArg)
{
    psElement->pvDataContainer = pvDataArg;
}


