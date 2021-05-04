/**
 *
 * @file BiTree_Traverse.h
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
#ifndef XUTILS_DATASTRUCTURE_BINARYTREE_XHEADER_BITREE_TRAVERSE_H_
#define XUTILS_DATASTRUCTURE_BINARYTREE_XHEADER_BITREE_TRAVERSE_H_

#include <xUtils/DataStructure/BinaryTree/Intrinsics/xHeader/BiTree_Struct.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/SingleLinkedList.h>

BiTree_nSTATUS BiTree__enTraversePreOrder(const BiTreeElement_TypeDef* pstNode, SLinkedList_TypeDef* pstListOrdered );
BiTree_nSTATUS BiTree__enTraverseInOrder(const BiTreeElement_TypeDef* pstNode, SLinkedList_TypeDef* pstListOrdered );
BiTree_nSTATUS BiTree__enTraversePostOrder(const BiTreeElement_TypeDef* pstNode, SLinkedList_TypeDef* pstListOrdered );



#endif /* XUTILS_DATASTRUCTURE_BINARYTREE_XHEADER_BITREE_TRAVERSE_H_ */
