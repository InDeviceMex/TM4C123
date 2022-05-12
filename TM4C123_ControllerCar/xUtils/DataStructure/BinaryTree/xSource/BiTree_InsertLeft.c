/**
 *
 * @file BiTree_InsertLeft.c
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
#include <xUtils/DataStructure/BinaryTree/xHeader/BiTree_InsertLeft.h>

#include <xUtils/DataStructure/BinaryTree/Intrinsics/Tree/BiTree_Tree.h>
#include <xUtils/DataStructure/BinaryTree/Intrinsics/Element/BiTree_Element.h>

#include <stdlib.h>


BiTreeElement_TypeDef* BiTree__pstInsertLeft(BiTree_TypeDef* pstTree, BiTreeElement_TypeDef* pstElement, void* pvData)
{
     BiTreeElement_TypeDef* pstNewElement = (BiTreeElement_TypeDef*) 0UL ;
     BiTreeElement_TypeDef* pstElementLeft = (BiTreeElement_TypeDef*) 0UL ;
     BiTreeElement_TypeDef** pstElementPosition = (BiTreeElement_TypeDef**) 0UL ;
     uint32_t u32SizeReg = 0U;

     if(((uint32_t) 0UL != (uint32_t) pstTree))
     {
         u32SizeReg = BiTree__u32GetSize(pstTree);
         /*Insert at the root if the Tree is empty*/
         if((uint32_t) 0UL == (uint32_t) pstElement)
         {
             if((uint32_t) 0UL == (uint32_t) u32SizeReg)
             {
                 pstElementPosition = &pstTree->pstRoot;
             }
         }
         /*Insertion at the end of the branch*/
         else
         {
             pstElementLeft = BiTree__pstGetElementLeftNode(pstElement);
             if((uint32_t) 0UL == (uint32_t) pstElementLeft)
             {
                 pstElementPosition = &pstElement->pstLeftNode;
             }
         }

        #if defined (__TI_ARM__ )
         pstNewElement = (BiTreeElement_TypeDef*) memalign((size_t) 4, (size_t) sizeof(BiTreeElement_TypeDef));
        #elif defined (__GNUC__ )
         pstNewElement = (BiTreeElement_TypeDef*) malloc(sizeof(BiTreeElement_TypeDef));
        #endif

        if((uint32_t) 0UL != (uint32_t) pstNewElement)
        {

            BiTree__vSetElementData(pstNewElement, pvData);
            BiTree__vSetElementLeftNode(pstNewElement, (BiTreeElement_TypeDef*) 0UL);
            BiTree__vSetElementRightNode(pstNewElement, (BiTreeElement_TypeDef*) 0UL);
            if((uint32_t) 0UL != (uint32_t) pstElementPosition)
            {
                *pstElementPosition = pstNewElement;
            }

            u32SizeReg++;
            BiTree__vSetSize(pstTree, u32SizeReg);
        }
    }
    return pstNewElement;
}


