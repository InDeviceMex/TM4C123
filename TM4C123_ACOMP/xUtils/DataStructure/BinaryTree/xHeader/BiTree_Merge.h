/**
 *
 * @file BiTree_Merge.h
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
 * @verbatim 21 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_BINARYTREE_XHEADER_BITREE_MERGE_H_
#define XUTILS_DATASTRUCTURE_BINARYTREE_XHEADER_BITREE_MERGE_H_

#include <xUtils/DataStructure/BinaryTree/Intrinsics/xHeader/BiTree_Struct.h>

BiTree_TypeDef* BiTree__psMerge(BiTree_TypeDef* psTreeLeft,BiTree_TypeDef* psTreeRight, void* pvData);
 BiTree_nSTATUS BiTree__enMerge(BiTree_TypeDef* psTreeMerged,BiTree_TypeDef* psTreeLeft,BiTree_TypeDef* psTreeRight, void* pvData);






#endif /* XUTILS_DATASTRUCTURE_BINARYTREE_XHEADER_BITREE_MERGE_H_ */
