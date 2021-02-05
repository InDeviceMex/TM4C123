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

 BiTree_TypeDef*  BiTree__psMerge(BiTree_TypeDef* psTreeLeft, BiTree_TypeDef* psTreeRight, void* pvData)
 {
     BiTreeElement_TypeDef* psElementReg = (BiTreeElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* psElementRootReg = (BiTreeElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* psElementRootLeftReg = (BiTreeElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* psElementRootRigthReg = (BiTreeElement_TypeDef*) 0UL;
     BiTree_TypeDef* psTreeMerged = (BiTree_TypeDef*)0UL;
     uint32_t u32SizeLeft = 0UL;
     uint32_t u32SizeRight = 0UL;
     uint32_t u32SizeMerged = 0UL;
     uint32_t u32SizeTotal = 0UL;
     if(((uint32_t) 0UL != (uint32_t) psTreeLeft) && ((uint32_t) 0UL != (uint32_t) psTreeRight) )
     {
         psTreeMerged = BiTree__psInit(psTreeLeft->pfvDestroyElementData);
         if((uint32_t) 0UL != (uint32_t) psTreeMerged)
         {
             psElementReg = BiTree__psInsertLeft(psTreeMerged, (BiTreeElement_TypeDef*) 0UL, pvData);
             if((uint32_t) 0UL != (uint32_t) psElementReg)
             {
                 psElementRootReg = BiTree__psGetRoot(psTreeMerged);
                 psElementRootLeftReg = BiTree__psGetRoot(psTreeLeft);
                 psElementRootRigthReg = BiTree__psGetRoot(psTreeRight);
                 BiTree__vSetElementLeftNode(psElementRootReg, psElementRootLeftReg);
                 BiTree__vSetElementRightNode(psElementRootReg, psElementRootRigthReg);

                 u32SizeLeft = BiTree__u32GetSize(psTreeLeft);
                 u32SizeRight = BiTree__u32GetSize(psTreeRight);
                 u32SizeMerged = BiTree__u32GetSize(psTreeMerged);
                 u32SizeTotal = u32SizeMerged + u32SizeRight + u32SizeLeft;

                 BiTree__vSetSize(psTreeMerged, u32SizeTotal);
                 BiTree__vSetRoot(psTreeLeft, (BiTreeElement_TypeDef*) 0UL);
                 BiTree__vSetSize(psTreeLeft, 0UL);
                 BiTree__vSetRoot(psTreeRight, (BiTreeElement_TypeDef*) 0UL);
                 BiTree__vSetSize(psTreeRight, 0UL);
             }
             else
             {
                 BiTree__vDestroy(psTreeMerged);
             }
         }
     }
     return psTreeMerged;
 }

 BiTree_nSTATUS BiTree__enMerge(BiTree_TypeDef* psTreeMerged, BiTree_TypeDef* psTreeLeft, BiTree_TypeDef* psTreeRight, void* pvData)
 {
     BiTree_nSTATUS enStatus = BiTree_enSTATUS_ERROR;
     BiTreeElement_TypeDef* psElementReg = (BiTreeElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* psElementRootReg = (BiTreeElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* psElementRootLeftReg = (BiTreeElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* psElementRootRigthReg = (BiTreeElement_TypeDef*) 0UL;
     uint32_t u32SizeLeft = 0UL;
     uint32_t u32SizeRight = 0UL;
     uint32_t u32SizeMerged = 0UL;
     uint32_t u32SizeTotal = 0UL;
     if(((uint32_t) 0UL != (uint32_t) psTreeMerged) && ((uint32_t) 0UL != (uint32_t) psTreeLeft) && ((uint32_t) 0UL != (uint32_t) psTreeRight) )
     {
         enStatus = BiTree__enInit(psTreeMerged, psTreeLeft->pfvDestroyElementData);
         if(BiTree_enSTATUS_OK == enStatus)
         {
             psElementReg = BiTree__psInsertLeft(psTreeMerged, (BiTreeElement_TypeDef*) 0UL, pvData);
             if((uint32_t) 0UL != (uint32_t) psElementReg)
             {
                 enStatus = BiTree_enSTATUS_OK;
                 psElementRootReg = BiTree__psGetRoot(psTreeMerged);
                 psElementRootLeftReg = BiTree__psGetRoot(psTreeLeft);
                 psElementRootRigthReg = BiTree__psGetRoot(psTreeRight);
                 BiTree__vSetElementLeftNode(psElementRootReg, psElementRootLeftReg);
                 BiTree__vSetElementRightNode(psElementRootReg, psElementRootRigthReg);

                 u32SizeLeft = BiTree__u32GetSize(psTreeLeft);
                 u32SizeRight = BiTree__u32GetSize(psTreeRight);
                 u32SizeMerged = BiTree__u32GetSize(psTreeMerged);
                 u32SizeTotal = u32SizeMerged + u32SizeRight + u32SizeLeft;

                 BiTree__vSetSize(psTreeMerged, u32SizeTotal);
                 BiTree__vSetRoot(psTreeLeft, (BiTreeElement_TypeDef*) 0UL);
                 BiTree__vSetSize(psTreeLeft, 0UL);
                 BiTree__vSetRoot(psTreeRight, (BiTreeElement_TypeDef*) 0UL);
                 BiTree__vSetSize(psTreeRight, 0UL);
             }
             else
             {
                 enStatus = BiTree_enSTATUS_ERROR;
                 BiTree__vDestroy(psTreeMerged);
             }
         }
     }
     return enStatus;
 }
