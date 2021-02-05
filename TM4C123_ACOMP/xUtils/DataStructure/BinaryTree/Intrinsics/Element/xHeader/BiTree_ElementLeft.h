/**
 *
 * @file BiTree_ElementLeftNode.h
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
#ifndef XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_ELEMENT_XHEADER_BITREE_ELEMENTLEFT_H_
#define XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_ELEMENT_XHEADER_BITREE_ELEMENTLEFT_H_

#include <xUtils/DataStructure/BinaryTree/Intrinsics/xHeader/BiTree_Struct.h>

BiTreeElement_TypeDef* BiTree__psGetElementLeftNode(const BiTreeElement_TypeDef* const psElement);
void BiTree__vSetElementLeftNode(BiTreeElement_TypeDef* psElement,  BiTreeElement_TypeDef* psLeftElement);





#endif /* XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_ELEMENT_XHEADER_BITREE_ELEMENTLEFT_H_ */
