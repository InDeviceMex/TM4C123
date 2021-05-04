/**
 *
 * @file BiTree_Root.h
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
#ifndef XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_TREE_XHEADER_BITREE_ROOT_H_
#define XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_TREE_XHEADER_BITREE_ROOT_H_

#include <xUtils/DataStructure/BinaryTree/Intrinsics/xHeader/BiTree_Struct.h>

BiTreeElement_TypeDef* BiTree__pstGetRoot(const BiTree_TypeDef*  const pstTree);
void BiTree__vSetRoot(BiTree_TypeDef* pstTree, BiTreeElement_TypeDef* pstRootArg);
BiTree_nSTATUS BiTree__enIsRoot(const BiTree_TypeDef* const pstTree, const BiTreeElement_TypeDef* const pstElement);





#endif /* XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_TREE_XHEADER_BITREE_ROOT_H_ */
