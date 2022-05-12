/**
 *
 * @file BiTree_Traverse.c
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

#include <xUtils/DataStructure/BinaryTree/xHeader/BiTree_Traverse.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/SingleLinkedList.h>

#include <xUtils/DataStructure/BinaryTree/Intrinsics/Tree/BiTree_Tree.h>
#include <xUtils/DataStructure/BinaryTree/Intrinsics/Element/BiTree_Element.h>

 BiTree_nSTATUS BiTree__enTraversePreOrder(const BiTreeElement_TypeDef* pstNode, SLinkedList_TypeDef* pstListOrdered )
 {
     BiTree_nSTATUS enStatusReturn = BiTree_enSTATUS_ERROR;
     BiTree_nSTATUS enEndOfBranch = BiTree_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* pstElement = (SLinkedListElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* pstLeftNodeReg = (BiTreeElement_TypeDef*)0UL;
     BiTreeElement_TypeDef* pstRightNodeReg = (BiTreeElement_TypeDef*)0UL;
     void* pvData = (void*) 0UL;

     if((uint32_t) 0UL != (uint32_t) pstListOrdered)
     {
         enStatusReturn = BiTree_enSTATUS_OK;
         enEndOfBranch = BiTree__enIsElementEndOfBranch(pstNode);
         if(BiTree_enSTATUS_OK != enEndOfBranch)
         {
             pvData = BiTree__pvGetElementData(pstNode);
             pstElement = SLinkedList__pstAddEnd(pstListOrdered, pvData);
             if((uint32_t) 0UL == (uint32_t) pstElement)
             {
                 enStatusReturn = BiTree_enSTATUS_ERROR;
             }
             else
             {
                 pstLeftNodeReg = BiTree__pstGetElementLeftNode(pstNode);
                 enEndOfBranch = BiTree__enIsElementEndOfBranch(pstLeftNodeReg);
                 if(BiTree_enSTATUS_OK != enEndOfBranch)
                 {
                     enStatusReturn = BiTree__enTraversePreOrder(pstLeftNodeReg, pstListOrdered);
                 }

                 if(BiTree_enSTATUS_OK == enStatusReturn)
                 {
                     pstRightNodeReg = BiTree__pstGetElementRightNode(pstNode);
                     enEndOfBranch = BiTree__enIsElementEndOfBranch(pstRightNodeReg);
                     if(BiTree_enSTATUS_OK != enEndOfBranch)
                     {
                         enStatusReturn = BiTree__enTraversePreOrder(pstLeftNodeReg, pstListOrdered);
                     }
                 }
             }
         }
     }
     return enStatusReturn;
 }

 BiTree_nSTATUS BiTree__enTraverseInOrder(const BiTreeElement_TypeDef* pstNode, SLinkedList_TypeDef* pstListOrdered )
 {
     BiTree_nSTATUS enStatusReturn = BiTree_enSTATUS_ERROR;
     BiTree_nSTATUS enEndOfBranch = BiTree_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* pstElement = (SLinkedListElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* pstLeftNodeReg = (BiTreeElement_TypeDef*)0UL;
     BiTreeElement_TypeDef* pstRightNodeReg = (BiTreeElement_TypeDef*)0UL;
     void* pvData = (void*) 0UL;

     if((uint32_t) 0UL != (uint32_t) pstListOrdered)
     {
         enStatusReturn = BiTree_enSTATUS_OK;
         enEndOfBranch = BiTree__enIsElementEndOfBranch(pstNode);
         if(BiTree_enSTATUS_OK != enEndOfBranch)
         {
             pstLeftNodeReg = BiTree__pstGetElementLeftNode(pstNode);
             enEndOfBranch = BiTree__enIsElementEndOfBranch(pstLeftNodeReg);
             if(BiTree_enSTATUS_OK != enEndOfBranch)
             {
                 enStatusReturn = BiTree__enTraverseInOrder(pstLeftNodeReg, pstListOrdered);
             }

             if(BiTree_enSTATUS_OK == enStatusReturn)
             {
                 pvData = BiTree__pvGetElementData(pstNode);
                 pstElement = SLinkedList__pstAddEnd(pstListOrdered, pvData);
                 if((uint32_t) 0UL == (uint32_t) pstElement)
                 {
                     enStatusReturn = BiTree_enSTATUS_ERROR;
                 }
                 else
                 {
                     pstRightNodeReg = BiTree__pstGetElementRightNode(pstNode);
                     enEndOfBranch = BiTree__enIsElementEndOfBranch(pstRightNodeReg);
                     if(BiTree_enSTATUS_OK != enEndOfBranch)
                     {
                         enStatusReturn = BiTree__enTraverseInOrder(pstLeftNodeReg, pstListOrdered);
                     }
                 }
             }
         }
     }
     return enStatusReturn;
 }

 BiTree_nSTATUS BiTree__enTraversePostOrder(const BiTreeElement_TypeDef* pstNode, SLinkedList_TypeDef* pstListOrdered )
 {
     BiTree_nSTATUS enStatusReturn = BiTree_enSTATUS_ERROR;
     BiTree_nSTATUS enEndOfBranch = BiTree_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* pstElement = (SLinkedListElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* pstLeftNodeReg = (BiTreeElement_TypeDef*)0UL;
     BiTreeElement_TypeDef* pstRightNodeReg = (BiTreeElement_TypeDef*)0UL;
     void* pvData = (void*) 0UL;

     if((uint32_t) 0UL != (uint32_t) pstListOrdered)
     {
         enStatusReturn = BiTree_enSTATUS_OK;
         enEndOfBranch = BiTree__enIsElementEndOfBranch(pstNode);
         if(BiTree_enSTATUS_OK != enEndOfBranch)
         {
             pstLeftNodeReg = BiTree__pstGetElementLeftNode(pstNode);
             enEndOfBranch = BiTree__enIsElementEndOfBranch(pstLeftNodeReg);
             if(BiTree_enSTATUS_OK != enEndOfBranch)
             {
                 enStatusReturn = BiTree__enTraversePostOrder(pstLeftNodeReg, pstListOrdered);
             }

             if(BiTree_enSTATUS_OK == enStatusReturn)
             {
                 pstRightNodeReg = BiTree__pstGetElementRightNode(pstNode);
                 enEndOfBranch = BiTree__enIsElementEndOfBranch(pstRightNodeReg);
                 if(BiTree_enSTATUS_OK != enEndOfBranch)
                 {
                     enStatusReturn = BiTree__enTraversePostOrder(pstLeftNodeReg, pstListOrdered);
                 }

                 if(BiTree_enSTATUS_OK == enStatusReturn)
                 {
                     pvData = BiTree__pvGetElementData(pstNode);
                     pstElement = SLinkedList__pstAddEnd(pstListOrdered, pvData);
                     if((uint32_t) 0UL == (uint32_t) pstElement)
                     {
                         enStatusReturn = BiTree_enSTATUS_ERROR;
                     }
                 }
             }
         }
     }
     return enStatusReturn;
 }
