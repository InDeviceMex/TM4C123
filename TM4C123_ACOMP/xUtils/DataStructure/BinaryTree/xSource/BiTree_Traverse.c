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

 BiTree_nSTATUS BiTree__enTraversePreOrder(const BiTreeElement_TypeDef* psNode, SLinkedList_TypeDef* psListOrdered )
 {
     BiTree_nSTATUS enStatusReturn = BiTree_enSTATUS_ERROR;
     BiTree_nSTATUS enEndOfBranch = BiTree_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* psElement = (SLinkedListElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* psLeftNodeReg = (BiTreeElement_TypeDef*)0UL;
     BiTreeElement_TypeDef* psRightNodeReg = (BiTreeElement_TypeDef*)0UL;
     void* pvData = (void*) 0UL;

     if((uint32_t) 0UL != (uint32_t) psListOrdered)
     {
         enStatusReturn = BiTree_enSTATUS_OK;
         enEndOfBranch = BiTree__enIsElementEndOfBranch(psNode);
         if(BiTree_enSTATUS_OK != enEndOfBranch)
         {
             pvData = BiTree__pvGetElementData(psNode);
             psElement = SLinkedList__psAddEnd(psListOrdered, pvData);
             if((uint32_t) 0UL == (uint32_t) psElement)
             {
                 enStatusReturn = BiTree_enSTATUS_ERROR;
             }
             else
             {
                 psLeftNodeReg = BiTree__psGetElementLeftNode(psNode);
                 enEndOfBranch = BiTree__enIsElementEndOfBranch(psLeftNodeReg);
                 if(BiTree_enSTATUS_OK != enEndOfBranch)
                 {
                     enStatusReturn = BiTree__enTraversePreOrder(psLeftNodeReg, psListOrdered);
                 }

                 if(BiTree_enSTATUS_OK == enStatusReturn)
                 {
                     psRightNodeReg = BiTree__psGetElementRightNode(psNode);
                     enEndOfBranch = BiTree__enIsElementEndOfBranch(psRightNodeReg);
                     if(BiTree_enSTATUS_OK != enEndOfBranch)
                     {
                         enStatusReturn = BiTree__enTraversePreOrder(psLeftNodeReg, psListOrdered);
                     }
                 }
             }
         }
     }
     return enStatusReturn;
 }

 BiTree_nSTATUS BiTree__enTraverseInOrder(const BiTreeElement_TypeDef* psNode, SLinkedList_TypeDef* psListOrdered )
 {
     BiTree_nSTATUS enStatusReturn = BiTree_enSTATUS_ERROR;
     BiTree_nSTATUS enEndOfBranch = BiTree_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* psElement = (SLinkedListElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* psLeftNodeReg = (BiTreeElement_TypeDef*)0UL;
     BiTreeElement_TypeDef* psRightNodeReg = (BiTreeElement_TypeDef*)0UL;
     void* pvData = (void*) 0UL;

     if((uint32_t) 0UL != (uint32_t) psListOrdered)
     {
         enStatusReturn = BiTree_enSTATUS_OK;
         enEndOfBranch = BiTree__enIsElementEndOfBranch(psNode);
         if(BiTree_enSTATUS_OK != enEndOfBranch)
         {
             psLeftNodeReg = BiTree__psGetElementLeftNode(psNode);
             enEndOfBranch = BiTree__enIsElementEndOfBranch(psLeftNodeReg);
             if(BiTree_enSTATUS_OK != enEndOfBranch)
             {
                 enStatusReturn = BiTree__enTraverseInOrder(psLeftNodeReg, psListOrdered);
             }

             if(BiTree_enSTATUS_OK == enStatusReturn)
             {
                 pvData = BiTree__pvGetElementData(psNode);
                 psElement = SLinkedList__psAddEnd(psListOrdered, pvData);
                 if((uint32_t) 0UL == (uint32_t) psElement)
                 {
                     enStatusReturn = BiTree_enSTATUS_ERROR;
                 }
                 else
                 {
                     psRightNodeReg = BiTree__psGetElementRightNode(psNode);
                     enEndOfBranch = BiTree__enIsElementEndOfBranch(psRightNodeReg);
                     if(BiTree_enSTATUS_OK != enEndOfBranch)
                     {
                         enStatusReturn = BiTree__enTraverseInOrder(psLeftNodeReg, psListOrdered);
                     }
                 }
             }
         }
     }
     return enStatusReturn;
 }

 BiTree_nSTATUS BiTree__enTraversePostOrder(const BiTreeElement_TypeDef* psNode, SLinkedList_TypeDef* psListOrdered )
 {
     BiTree_nSTATUS enStatusReturn = BiTree_enSTATUS_ERROR;
     BiTree_nSTATUS enEndOfBranch = BiTree_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* psElement = (SLinkedListElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* psLeftNodeReg = (BiTreeElement_TypeDef*)0UL;
     BiTreeElement_TypeDef* psRightNodeReg = (BiTreeElement_TypeDef*)0UL;
     void* pvData = (void*) 0UL;

     if((uint32_t) 0UL != (uint32_t) psListOrdered)
     {
         enStatusReturn = BiTree_enSTATUS_OK;
         enEndOfBranch = BiTree__enIsElementEndOfBranch(psNode);
         if(BiTree_enSTATUS_OK != enEndOfBranch)
         {
             psLeftNodeReg = BiTree__psGetElementLeftNode(psNode);
             enEndOfBranch = BiTree__enIsElementEndOfBranch(psLeftNodeReg);
             if(BiTree_enSTATUS_OK != enEndOfBranch)
             {
                 enStatusReturn = BiTree__enTraversePostOrder(psLeftNodeReg, psListOrdered);
             }

             if(BiTree_enSTATUS_OK == enStatusReturn)
             {
                 psRightNodeReg = BiTree__psGetElementRightNode(psNode);
                 enEndOfBranch = BiTree__enIsElementEndOfBranch(psRightNodeReg);
                 if(BiTree_enSTATUS_OK != enEndOfBranch)
                 {
                     enStatusReturn = BiTree__enTraversePostOrder(psLeftNodeReg, psListOrdered);
                 }

                 if(BiTree_enSTATUS_OK == enStatusReturn)
                 {
                     pvData = BiTree__pvGetElementData(psNode);
                     psElement = SLinkedList__psAddEnd(psListOrdered, pvData);
                     if((uint32_t) 0UL == (uint32_t) psElement)
                     {
                         enStatusReturn = BiTree_enSTATUS_ERROR;
                     }
                 }
             }
         }
     }
     return enStatusReturn;
 }
