/**
 *
 * @file BiTree_Merge.c
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
#include <xUtils/DataStructure/BinaryTree/xHeader/BiTree_Merge.h>

#include <xUtils/DataStructure/BinaryTree/xHeader/BiTree_Init.h>
#include <xUtils/DataStructure/BinaryTree/xHeader/BiTree_Destroy.h>
#include <xUtils/DataStructure/BinaryTree/xHeader/BiTree_InsertLeft.h>
#include <xUtils/DataStructure/BinaryTree/xHeader/BiTree_RemoveLeft.h>
#include <xUtils/DataStructure/BinaryTree/xHeader/BiTree_RemoveRight.h>

#include <xUtils/DataStructure/BinaryTree/Intrinsics/Tree/BiTree_Tree.h>
#include <xUtils/DataStructure/BinaryTree/Intrinsics/Element/BiTree_Element.h>

#include <stdlib.h>

 BiTree_TypeDef*  BiTree__pstMerge(BiTree_TypeDef* pstTreeLeft, BiTree_TypeDef* pstTreeRight, void* pvData)
 {
     BiTreeElement_TypeDef* pstElementReg = (BiTreeElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* pstElementRootReg = (BiTreeElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* pstElementRootLeftReg = (BiTreeElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* pstElementRootRigthReg = (BiTreeElement_TypeDef*) 0UL;
     BiTree_TypeDef* pstTreeMerged = (BiTree_TypeDef*)0UL;
     uint32_t u32SizeLeft = 0UL;
     uint32_t u32SizeRight = 0UL;
     uint32_t u32SizeMerged = 0UL;
     uint32_t u32SizeTotal = 0UL;
     if(((uint32_t) 0UL != (uint32_t) pstTreeLeft) && ((uint32_t) 0UL != (uint32_t) pstTreeRight) )
     {
         pstTreeMerged = BiTree__pstInit(pstTreeLeft->pfvDestroyElementData);
         if((uint32_t) 0UL != (uint32_t) pstTreeMerged)
         {
             pstElementReg = BiTree__pstInsertLeft(pstTreeMerged, (BiTreeElement_TypeDef*) 0UL, pvData);
             if((uint32_t) 0UL != (uint32_t) pstElementReg)
             {
                 pstElementRootReg = BiTree__pstGetRoot(pstTreeMerged);
                 pstElementRootLeftReg = BiTree__pstGetRoot(pstTreeLeft);
                 pstElementRootRigthReg = BiTree__pstGetRoot(pstTreeRight);
                 BiTree__vSetElementLeftNode(pstElementRootReg, pstElementRootLeftReg);
                 BiTree__vSetElementRightNode(pstElementRootReg, pstElementRootRigthReg);

                 u32SizeLeft = BiTree__u32GetSize(pstTreeLeft);
                 u32SizeRight = BiTree__u32GetSize(pstTreeRight);
                 u32SizeMerged = BiTree__u32GetSize(pstTreeMerged);
                 u32SizeTotal = u32SizeMerged + u32SizeRight + u32SizeLeft;

                 BiTree__vSetSize(pstTreeMerged, u32SizeTotal);
                 BiTree__vSetRoot(pstTreeLeft, (BiTreeElement_TypeDef*) 0UL);
                 BiTree__vSetSize(pstTreeLeft, 0UL);
                 BiTree__vSetRoot(pstTreeRight, (BiTreeElement_TypeDef*) 0UL);
                 BiTree__vSetSize(pstTreeRight, 0UL);
             }
             else
             {
                 BiTree__vDestroy(pstTreeMerged);
             }
         }
     }
     return pstTreeMerged;
 }

 BiTree_nSTATUS BiTree__enMerge(BiTree_TypeDef* pstTreeMerged, BiTree_TypeDef* pstTreeLeft, BiTree_TypeDef* pstTreeRight, void* pvData)
 {
     BiTree_nSTATUS enStatus = BiTree_enSTATUS_ERROR;
     BiTreeElement_TypeDef* pstElementReg = (BiTreeElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* pstElementRootReg = (BiTreeElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* pstElementRootLeftReg = (BiTreeElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* pstElementRootRigthReg = (BiTreeElement_TypeDef*) 0UL;
     uint32_t u32SizeLeft = 0UL;
     uint32_t u32SizeRight = 0UL;
     uint32_t u32SizeMerged = 0UL;
     uint32_t u32SizeTotal = 0UL;
     if(((uint32_t) 0UL != (uint32_t) pstTreeMerged) && ((uint32_t) 0UL != (uint32_t) pstTreeLeft) && ((uint32_t) 0UL != (uint32_t) pstTreeRight) )
     {
         enStatus = BiTree__enInit(pstTreeMerged, pstTreeLeft->pfvDestroyElementData);
         if(BiTree_enSTATUS_OK == enStatus)
         {
             pstElementReg = BiTree__pstInsertLeft(pstTreeMerged, (BiTreeElement_TypeDef*) 0UL, pvData);
             if((uint32_t) 0UL != (uint32_t) pstElementReg)
             {
                 enStatus = BiTree_enSTATUS_OK;
                 pstElementRootReg = BiTree__pstGetRoot(pstTreeMerged);
                 pstElementRootLeftReg = BiTree__pstGetRoot(pstTreeLeft);
                 pstElementRootRigthReg = BiTree__pstGetRoot(pstTreeRight);
                 BiTree__vSetElementLeftNode(pstElementRootReg, pstElementRootLeftReg);
                 BiTree__vSetElementRightNode(pstElementRootReg, pstElementRootRigthReg);

                 u32SizeLeft = BiTree__u32GetSize(pstTreeLeft);
                 u32SizeRight = BiTree__u32GetSize(pstTreeRight);
                 u32SizeMerged = BiTree__u32GetSize(pstTreeMerged);
                 u32SizeTotal = u32SizeMerged + u32SizeRight + u32SizeLeft;

                 BiTree__vSetSize(pstTreeMerged, u32SizeTotal);
                 BiTree__vSetRoot(pstTreeLeft, (BiTreeElement_TypeDef*) 0UL);
                 BiTree__vSetSize(pstTreeLeft, 0UL);
                 BiTree__vSetRoot(pstTreeRight, (BiTreeElement_TypeDef*) 0UL);
                 BiTree__vSetSize(pstTreeRight, 0UL);
             }
             else
             {
                 enStatus = BiTree_enSTATUS_ERROR;
                 BiTree__vDestroy(pstTreeMerged);
             }
         }
     }
     return enStatus;
 }
