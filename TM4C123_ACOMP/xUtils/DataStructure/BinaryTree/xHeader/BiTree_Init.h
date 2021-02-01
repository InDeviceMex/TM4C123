/**
 *
 * @file BiTree_Init.h
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
#ifndef XUTILS_DATASTRUCTURE_BINARYTREE_XHEADER_BITREE_INIT_H_
#define XUTILS_DATASTRUCTURE_BINARYTREE_XHEADER_BITREE_INIT_H_

#include <xUtils/DataStructure/BinaryTree/Intrinsics/xHeader/BiTree_Struct.h>

BiTree_TypeDef* BiTree__psInit( void (*pfvDestroyElementDataArg) (void *DataContainer));
BiTree_nSTATUS BiTree__enInit( BiTree_TypeDef* psTree ,void (*pfvDestroyElementDataArg) (void *DataContainer));





#endif /* XUTILS_DATASTRUCTURE_BINARYTREE_XHEADER_BITREE_INIT_H_ */
