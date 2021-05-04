/**
 *
 * @file BiTree_Destroy.c
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
#include <xUtils/DataStructure/BinaryTree/xHeader/BiTree_Destroy.h>

#include <xUtils/DataStructure/BinaryTree/xHeader/BiTree_RemoveLeft.h>
#include <xUtils/DataStructure/BinaryTree/Intrinsics/Tree/xHeader/BiTree_Size.h>

void BiTree__vDestroy(BiTree_TypeDef* pstTree)
 {
     BiTree_nSTATUS enStatus = BiTree_enSTATUS_ERROR;
     void (*pfvListDestroy) (void* List) = (void (*) (void* List) )0UL;

     if((BiTree_TypeDef*)0 != pstTree)
     {
         pfvListDestroy = pstTree->pfvDestroy;
         enStatus = BiTree__enRemoveLeft(pstTree, (BiTreeElement_TypeDef*) 0UL );

         pstTree->pfu32Match = (uint32_t (*) (const void *pcvKey1, const void *pcvKey2)) 0UL;
         pstTree->pfvDestroy = (void (*) (void* List)) 0UL;
         pstTree->pfvDestroyElementData = (void (*) (void* DataContainer)) 0UL;
         pstTree->pstRoot = (BiTreeElement_TypeDef *) 0UL;
         pstTree->u32Size = 0UL;

         if((BiTree_enSTATUS_OK == enStatus ) && ( (uint32_t) 0 != (uint32_t) pfvListDestroy))
         {
             pfvListDestroy(pstTree);
             pstTree = (BiTree_TypeDef*)0UL;
         }
     }
 }



