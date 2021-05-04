/**
 *
 * @file BiTree_ElementData.c
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
 * @verbatim 20 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/BinaryTree/Intrinsics/Element/xHeader/BiTree_ElementData.h>
#include <stdlib.h>

void* BiTree__pvGetElementData(const BiTreeElement_TypeDef* const pstElement)
{
    void* pvDataReg = (void*)0UL;
    pvDataReg = pstElement->pvDataContainer;

    return pvDataReg;
}

void BiTree__vSetElementData(BiTreeElement_TypeDef* pstElement, void* pvDataArg)
{
    pstElement->pvDataContainer = pvDataArg;
}


