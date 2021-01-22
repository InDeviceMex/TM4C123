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

 BiTree_nSTATUS BiTree__enTraversePreOrder(BiTreeElement_TypeDef* psNode, SLinkedList_TypeDef* psListOrdered )
 {
     BiTree_nSTATUS enStatusReturn = BiTree_enSTATUS_ERROR;
     BiTree_nSTATUS enEndOfBranch = BiTree_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* psElement = (SLinkedListElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* psLeftNode =(BiTreeElement_TypeDef*)0UL;
     BiTreeElement_TypeDef* psRightNode =(BiTreeElement_TypeDef*)0UL;
     void* pvData = (void*) 0UL;

     if((uint32_t)0UL != (uint32_t)psListOrdered)
     {
         enStatusReturn = BiTree_enSTATUS_OK;
         enEndOfBranch = BiTree__enIsElementEndOfBranch(psNode);
         if(BiTree_enSTATUS_OK != enEndOfBranch)
         {
             pvData = BiTree__pvGetElementData(psNode);
             psElement = SLinkedList__psAddEnd(psListOrdered, pvData);
             if((uint32_t)0UL == psElement)
             {
                 enStatusReturn = BiTree_enSTATUS_ERROR;
             }
             else
             {
                 psLeftNode = BiTree__psGetElementLeftNode(psNode);
                 enEndOfBranch = BiTree__enIsElementEndOfBranch(psLeftNode);
                 if(BiTree_enSTATUS_OK != enEndOfBranch)
                 {
                     enStatusReturn = BiTree__enTraversePreOrder(psLeftNode,psListOrdered);
                 }

                 if(BiTree_enSTATUS_OK == enStatusReturn)
                 {
                     psRightNode = BiTree__psGetElementRightNode(psNode);
                     enEndOfBranch = BiTree__enIsElementEndOfBranch(psRightNode);
                     if(BiTree_enSTATUS_OK != enEndOfBranch)
                     {
                         enStatusReturn = BiTree__enTraversePreOrder(psLeftNode,psListOrdered);
                     }
                 }
             }
         }
     }
     return enStatusReturn;
 }

 BiTree_nSTATUS BiTree__enTraverseInOrder(BiTreeElement_TypeDef* psNode, SLinkedList_TypeDef* psListOrdered )
 {
     BiTree_nSTATUS enStatusReturn = BiTree_enSTATUS_ERROR;
     BiTree_nSTATUS enEndOfBranch = BiTree_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* psElement = (SLinkedListElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* psLeftNode =(BiTreeElement_TypeDef*)0UL;
     BiTreeElement_TypeDef* psRightNode =(BiTreeElement_TypeDef*)0UL;
     void* pvData = (void*) 0UL;

     if((uint32_t)0UL != (uint32_t)psListOrdered)
     {
         enStatusReturn = BiTree_enSTATUS_OK;
         enEndOfBranch = BiTree__enIsElementEndOfBranch(psNode);
         if(BiTree_enSTATUS_OK != enEndOfBranch)
         {
             psLeftNode = BiTree__psGetElementLeftNode(psNode);
             enEndOfBranch = BiTree__enIsElementEndOfBranch(psLeftNode);
             if(BiTree_enSTATUS_OK != enEndOfBranch)
             {
                 enStatusReturn = BiTree__enTraverseInOrder(psLeftNode,psListOrdered);
             }

             if(BiTree_enSTATUS_OK == enStatusReturn)
             {
                 pvData = BiTree__pvGetElementData(psNode);
                 psElement = SLinkedList__psAddEnd(psListOrdered, pvData);
                 if((uint32_t)0UL == psElement)
                 {
                     enStatusReturn = BiTree_enSTATUS_ERROR;
                 }
                 else
                 {
                     psRightNode = BiTree__psGetElementRightNode(psNode);
                     enEndOfBranch = BiTree__enIsElementEndOfBranch(psRightNode);
                     if(BiTree_enSTATUS_OK != enEndOfBranch)
                     {
                         enStatusReturn = BiTree__enTraverseInOrder(psLeftNode,psListOrdered);
                     }
                 }
             }
         }
     }
     return enStatusReturn;
 }

 BiTree_nSTATUS BiTree__enTraversePostOrder(BiTreeElement_TypeDef* psNode, SLinkedList_TypeDef* psListOrdered )
 {
     BiTree_nSTATUS enStatusReturn = BiTree_enSTATUS_ERROR;
     BiTree_nSTATUS enEndOfBranch = BiTree_enSTATUS_ERROR;
     SLinkedListElement_TypeDef* psElement = (SLinkedListElement_TypeDef*) 0UL;
     BiTreeElement_TypeDef* psLeftNode =(BiTreeElement_TypeDef*)0UL;
     BiTreeElement_TypeDef* psRightNode =(BiTreeElement_TypeDef*)0UL;
     void* pvData = (void*) 0UL;

     if((uint32_t)0UL != (uint32_t)psListOrdered)
     {
         enStatusReturn = BiTree_enSTATUS_OK;
         enEndOfBranch = BiTree__enIsElementEndOfBranch(psNode);
         if(BiTree_enSTATUS_OK != enEndOfBranch)
         {
             psLeftNode = BiTree__psGetElementLeftNode(psNode);
             enEndOfBranch = BiTree__enIsElementEndOfBranch(psLeftNode);
             if(BiTree_enSTATUS_OK != enEndOfBranch)
             {
                 enStatusReturn = BiTree__enTraversePostOrder(psLeftNode,psListOrdered);
             }

             if(BiTree_enSTATUS_OK == enStatusReturn)
             {
                 psRightNode = BiTree__psGetElementRightNode(psNode);
                 enEndOfBranch = BiTree__enIsElementEndOfBranch(psRightNode);
                 if(BiTree_enSTATUS_OK != enEndOfBranch)
                 {
                     enStatusReturn = BiTree__enTraversePostOrder(psLeftNode,psListOrdered);
                 }

                 if(BiTree_enSTATUS_OK == enStatusReturn)
                 {
                     pvData = BiTree__pvGetElementData(psNode);
                     psElement = SLinkedList__psAddEnd(psListOrdered, pvData);
                     if((uint32_t)0UL == psElement)
                     {
                         enStatusReturn = BiTree_enSTATUS_ERROR;
                     }
                 }
             }
         }
     }
     return enStatusReturn;
 }
