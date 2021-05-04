/**
 *
 * @file BiTree_Struct.h
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
#ifndef XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_XHEADER_BITREE_STRUCT_H_
#define XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_XHEADER_BITREE_STRUCT_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    BiTree_enSTATUS_OK,
    BiTree_enSTATUS_ERROR,
    BiTree_enSTATUS_EXIST,
}BiTree_nSTATUS;

typedef struct BiTreeElement
{
        void* pvDataContainer;
        struct BiTreeElement *pstLeftNode;
        struct BiTreeElement *pstRightNode;
}BiTreeElement_TypeDef;

typedef struct BiTree
{
        uint32_t u32Size;
        uint32_t (*pfu32Match) (const void *pcvKey1, const void *pcvKey2);
        void (*pfvDestroyElementData) (void *DataContainer);
        void (*pfvDestroy) (void* List);
        BiTreeElement_TypeDef *pstRoot;
}BiTree_TypeDef;




#endif /* XUTILS_DATASTRUCTURE_BINARYTREE_INTRINSICS_XHEADER_BITREE_STRUCT_H_ */
