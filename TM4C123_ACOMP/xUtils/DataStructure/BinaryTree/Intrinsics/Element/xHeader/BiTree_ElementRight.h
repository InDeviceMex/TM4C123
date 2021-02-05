/**
 *
 * @file BiTree_ElementRight.h
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
#ifndef XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_ELEMENT_XHEADER_BITREE_ELEMENTRIGHT_H_
#define XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_ELEMENT_XHEADER_BITREE_ELEMENTRIGHT_H_

#include <xUtils/DataStructure/BinaryTree/Intrinsics/xHeader/BiTree_Struct.h>

BiTreeElement_TypeDef* BiTree__psGetElementRightNode(const BiTreeElement_TypeDef* const psElement);
void BiTree__vSetElementRightNode(BiTreeElement_TypeDef* psElement,  BiTreeElement_TypeDef* psRightElement);




#endif /* XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_ELEMENT_XHEADER_BITREE_ELEMENTRIGHT_H_ */
