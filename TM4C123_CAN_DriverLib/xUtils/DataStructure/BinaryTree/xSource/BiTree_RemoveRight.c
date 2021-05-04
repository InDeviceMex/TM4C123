/**
 *
 * @file BiTree_RemoveRight.c
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
#include <xUtils/DataStructure/BinaryTree/xHeader/BiTree_RemoveRight.h>
#include <xUtils/DataStructure/BinaryTree/xHeader/BiTree_RemoveLeft.h>

#include <xUtils/DataStructure/BinaryTree/Intrinsics/Tree/BiTree_Tree.h>
#include <xUtils/DataStructure/BinaryTree/Intrinsics/Element/BiTree_Element.h>

#include <stdlib.h>


 BiTree_nSTATUS BiTree__enRemoveRight(BiTree_TypeDef* pstTree, BiTreeElement_TypeDef* pstElement)
 {
     BiTree_nSTATUS enStatus = BiTree_enSTATUS_ERROR;
     BiTreeElement_TypeDef** pstElementPosition = (BiTreeElement_TypeDef**) 0UL ;
     void (*pfvDestroyData) (void *DataContainer) = (void (*) (void *DataContainer)) 0UL;
     uint32_t u32SizeReg = 0UL;

     if((uint32_t) 0UL != (uint32_t) pstTree)
     {
         u32SizeReg = BiTree__u32GetSize(pstTree);
         if(0UL != u32SizeReg)
         {

             if((uint32_t) 0UL == (uint32_t) pstElement)
             {
                 pstElementPosition = &pstTree->pstRoot;
             }
             else
             {
                 pstElementPosition = &pstElement->pstRightNode;
             }

             if((uint32_t) 0UL != (uint32_t) *pstElementPosition)
             {
                 enStatus = BiTree_enSTATUS_OK;

                 BiTree__enRemoveLeft(pstTree,*pstElementPosition);
                 BiTree__enRemoveRight(pstTree,*pstElementPosition);
                 pfvDestroyData = pstTree->pfvDestroyElementData;
                 if((uint32_t) 0UL != (uint32_t) pfvDestroyData)
                 {
                     pfvDestroyData((*pstElementPosition)->pvDataContainer);
                 }

                 free(*pstElementPosition);
                 *pstElementPosition = (BiTreeElement_TypeDef*) 0UL;

                 u32SizeReg--;
                 BiTree__vSetSize(pstTree, u32SizeReg);
             }
         }
     }
     return enStatus;
 }



