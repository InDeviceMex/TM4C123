/**
 *
 * @file BiTree_Size.h
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
#ifndef XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_TREE_XHEADER_BITREE_SIZE_H_
#define XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_TREE_XHEADER_BITREE_SIZE_H_

#include <xUtils/DataStructure/BinaryTree/Intrinsics/xHeader/BiTree_Struct.h>

uint32_t BiTree__u32GetSize(const BiTree_TypeDef* const PsTree);
void BiTree__vSetSize(BiTree_TypeDef*  PsTree, uint32_t u32SizeArg);

#endif /* XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_TREE_XHEADER_BITREE_SIZE_H_ */
