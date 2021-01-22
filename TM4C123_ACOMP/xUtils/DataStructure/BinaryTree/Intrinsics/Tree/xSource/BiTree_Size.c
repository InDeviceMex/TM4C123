/**
 *
 * @file BiTree_Size.c
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
#include <xUtils/DataStructure/BinaryTree/Intrinsics/Tree/xHeader/BiTree_Size.h>

uint32_t BiTree__u32GetSize(const BiTree_TypeDef* const PsTree)
{
    uint32_t u32SizeReg = 0UL;
    u32SizeReg = PsTree->u32Size;
    return u32SizeReg;

}

void BiTree__vSetSize(BiTree_TypeDef*  PsTree, uint32_t u32SizeArg)
{
    PsTree->u32Size = u32SizeArg;
}



