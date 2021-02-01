/**
 *
 * @file BiTree_InsertRight.c
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
#include <xUtils/DataStructure/BinaryTree/xHeader/BiTree_InsertRight.h>

#include <xUtils/DataStructure/BinaryTree/Intrinsics/Tree/BiTree_Tree.h>
#include <xUtils/DataStructure/BinaryTree/Intrinsics/Element/BiTree_Element.h>

#include <stdlib.h>


BiTreeElement_TypeDef* BiTree__psInsertRight(BiTree_TypeDef* psTree, BiTreeElement_TypeDef* psElement, void* pvData)
{
     BiTreeElement_TypeDef* psNewElement = (BiTreeElement_TypeDef*) 0UL ;
     BiTreeElement_TypeDef* psElementRight = (BiTreeElement_TypeDef*) 0UL ;
     BiTreeElement_TypeDef** psElementPosition= (BiTreeElement_TypeDef**) 0UL ;
     uint32_t u32SizeReg = 0U;

     if(((uint32_t) 0UL != (uint32_t) psTree))
     {
         u32SizeReg = BiTree__u32GetSize(psTree);
         /*Insert at the root if the Tree is empty*/
         if((uint32_t) 0UL == (uint32_t) psElement)
         {
             if((uint32_t) 0UL == (uint32_t) u32SizeReg)
             {
                 psElementPosition = &psTree->psRoot;
             }
         }
         /*Insertion at the end of the branch*/
         else
         {
             psElementRight = BiTree__psGetElementRightNode(psElement);
             if((uint32_t) 0UL == (uint32_t) psElementRight)
             {
                 psElementPosition = &psElement->psRightNode;
             }
         }

        #if defined ( __TI_ARM__ )
         psNewElement = (BiTreeElement_TypeDef*) memalign((size_t) 4,(size_t) sizeof(BiTreeElement_TypeDef));
        #elif defined ( __GNUC__ )
         psNewElement = (BiTreeElement_TypeDef*) malloc(sizeof(BiTreeElement_TypeDef));
        #endif

        if((uint32_t) 0UL != (uint32_t) psNewElement)
        {

            BiTree__vSetElementData(psNewElement, pvData);
            BiTree__vSetElementRightNode(psNewElement, (BiTreeElement_TypeDef*) 0UL);
            BiTree__vSetElementRightNode(psNewElement, (BiTreeElement_TypeDef*) 0UL);
            if((uint32_t) 0UL != (uint32_t) psElementPosition)
            {
                *psElementPosition = psNewElement;
            }

            u32SizeReg++;
            BiTree__vSetSize(psTree,u32SizeReg);
        }
    }
    return psNewElement;
}



